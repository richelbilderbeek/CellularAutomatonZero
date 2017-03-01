#ifndef QTWIDGET_H
#define QTWIDGET_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
  class QtWidget;
}

struct QImage;

class QtWidget : public QWidget
{
  Q_OBJECT //!OCLINT

public:
  explicit QtWidget(
    const int width = 10,
    const int height = 10,
    QWidget *parent = nullptr
  );
  ~QtWidget();

protected:
  void paintEvent(QPaintEvent *);
private:
  Ui::QtWidget *ui;
  QPixmap m_pixmap;

private slots:
  void OnTimer();
};

#endif // QTWIDGET_H
