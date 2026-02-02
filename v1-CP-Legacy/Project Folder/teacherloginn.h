#ifndef LOGINTEACHER_H
#define LOGINTEACHER_H

#include "finalteacherscreen.h"
#include <QDialog>
#include <QPixmap>
#include <QLabel>

namespace Ui {
class Loginteacher;
}

class Loginteacher : public QDialog
{
    Q_OBJECT

public:
    explicit Loginteacher(QWidget *parent = nullptr);
    ~Loginteacher();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Loginteacher *ui;
    finalteacherscreen *finalteacherscreenshow;

    QLabel *createIconLabel(const QPixmap &pixmap);
};

#endif // LOGINTEACHER_H
