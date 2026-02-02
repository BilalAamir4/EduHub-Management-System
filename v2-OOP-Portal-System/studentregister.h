#ifndef STUDENTREGISTER_H
#define STUDENTREGISTER_H

#include <QDialog>
#include <QLabel>
#include <QPixmap>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    QLabel *createIconLabel(const QPixmap &pixmap);
};

#endif // STUDENTREGISTER_H
