#ifndef FINALSTUDENTSCREEN_H
#define FINALSTUDENTSCREEN_H

#include <QDialog>
#include <QLabel>

namespace Ui {
class finalstudentscreen;
}

class finalstudentscreen : public QDialog
{
    Q_OBJECT

public:
    explicit finalstudentscreen(QWidget *parent = nullptr);
    ~finalstudentscreen();

private slots:

    void on_submitbtn_clicked();

private:
    Ui::finalstudentscreen *ui;
    QLabel *createIconLabel(const QPixmap &pixmap);
};

#endif // FINALSTUDENTSCREEN_H
