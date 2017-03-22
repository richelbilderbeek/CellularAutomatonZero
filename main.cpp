#include <QApplication>
#include <QTimer>
#include "qtwidget.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QtWidget d;
  if (argc > 1)
  {
    //Profile for 10 secs
    QTimer::singleShot(10000, &d, SLOT(close()));
  }
  d.show();

  return a.exec();
}
