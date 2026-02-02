#include "studentloginn.h"
#include "ui_studentloginn.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>
#include <QLabel>

Loginstudent::Loginstudent(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::Loginstudent)
{
    ui->setupUi(this);

    // Load the username icon
    QPixmap usernameIconPixmap("C:/Users/death/Desktop/Project/username.png");
    QLabel *usernameIconLabel = createIconLabel(usernameIconPixmap);
    usernameIconLabel->setGeometry(470, 185, 50, 50);

    // Load the password icon
    QPixmap passwordIconPixmap("C:/Users/death/Desktop/Project/password.png");
    QLabel *passwordIconLabel = createIconLabel(passwordIconPixmap);
    passwordIconLabel->setGeometry(470, 290, 50, 50);
}

Loginstudent::~Loginstudent()
{
    delete ui;
}

void Loginstudent::on_pushButton_clicked()
{
    QString studentuser = ui->username->text();
    QString studentpass = ui->password->text();

    // Read data from the file
    QFile file("studentcredentials.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString storedUser = in.readLine().mid(10).trimmed();  // Read the stored username
        QString storedPass = in.readLine().mid(10).trimmed();  // Read the stored password
        file.close();

        qDebug() << "Entered User:" << studentuser;
        qDebug() << "Entered Password:" << studentpass;
        qDebug() << "Stored User:" << storedUser;
        qDebug() << "Stored Password:" << storedPass;

        // Compare entered credentials with stored credentials
        if (studentuser == storedUser && studentpass == storedPass)
        {
            QMessageBox::information(this, "LOGIN", "Success");
            hide();
            Student_info_choice = new student_info_choice(this);
            Student_info_choice->show();
        }
        else
        {
            QMessageBox::information(this, "Warning", "Invalid Credentials");
        }
    }
    else
    {
        qDebug() << "Error opening file for reading";
    }

}

QLabel *Loginstudent::createIconLabel(const QPixmap &pixmap)
{
    QLabel *iconLabel = new QLabel(this);
    iconLabel->setPixmap(pixmap);
    iconLabel->setScaledContents(true);
    return iconLabel;
}
