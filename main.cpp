#include <QApplication>
#include "qtwidget.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QtWidget d;
  d.show();
  return a.exec();
}
