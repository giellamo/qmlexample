
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Quick Widgets Test)

set(SRC_FILES main.cpp)
set(MOC_FILES )
set(QRC_FILES qml/qml.qrc)

add_library(kape_backendlib STATIC)
target_sources(kape_backendlib PRIVATE sortbackend.h sortbackend.cpp)
target_link_libraries(kape_backendlib PRIVATE Qt5::Core project_options project_warnings)

add_executable(kape_exercise)
target_sources(kape_exercise PRIVATE ${SRC_FILES} ${MOC_FILES} ${QRC_FILES})
target_link_libraries(kape_exercise PRIVATE kape_backendlib Qt5::Quick Qt5::Widgets project_options project_warnings)

if(ENABLE_TESTING)
  add_executable(kape_test kape_test.cpp kape_test.h)
  target_link_libraries(kape_test PRIVATE kape_backendlib Qt5::Test)
  add_test(NAME kape_test COMMAND kape_test)
endif()
