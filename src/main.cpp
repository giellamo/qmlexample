#include <QApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QScreen>

#include "sortbackend.h"

/**
 * @brief setupLogger
 * @return
 **/
int main(int argc, char *argv[])
{

  QApplication app{ argc, argv };

  SortBackend bc;

  QQmlApplicationEngine engine;
  engine.rootContext()->setContextProperty("backend", &bc);
  engine.addImportPath("qrc:/");

  engine.load(QUrl(QStringLiteral("qrc:/views/Main.qml")));
  if (engine.rootObjects().isEmpty())
    return -1;

  return app.exec();
}
