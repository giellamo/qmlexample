Small application where a user can input a list of numbers, and display the sorted values in the output.

Build with cmake:
From the repo directory and a prompt with Compiler and Qt paths do 

mkdir build;
cd build;
cmake ..;
cmake --build .

You can use windeployqt to get all the needed redistributable Qt files

windeployqt . --qmldir ${PATH_TO_REPO}\src\qml


