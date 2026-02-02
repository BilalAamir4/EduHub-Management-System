
#include "teacherloginn.h"
#include "ui_teacherloginn.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>
#include <QDebug>


Loginteacher::Loginteacher(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Loginteacher)
{
    ui->setupUi(this);
    // Load the username icon
    QPixmap usernameIconPixmap("C:/Users/death/Desktop/Project/username.png");
    QLabel *usernameIconLabel = createIconLabel(usernameIconPixmap);
    usernameIconLabel->setGeometry(470, 185, 50, 50);  // Adjust the position and size as needed

    // Load the password icon
    QPixmap passwordIconPixmap("C:/Users/death/Desktop/Project/password.png");
    QLabel *passwordIconLabel = createIconLabel(passwordIconPixmap);
    passwordIconLabel->setGeometry(470, 290, 50, 50);  // Adjust the position and size as needed
}

Loginteacher::~Loginteacher()
{
    delete ui;
}

void Loginteacher::on_pushButton_clicked()
{
    QString teacheruser = ui->userlogin->text();
    QString teacherpass = ui->passlogin->text();

    // Read data from the file
    QFile file("teachercredentials.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        QString storedUser = in.readLine().mid(10).trimmed();  // Read the stored username
        QString storedPass = in.readLine().mid(10).trimmed();  // Read the stored password
        file.close();

        qDebug() << "Entered User:" << teacheruser;
        qDebug() << "Entered Password:" << teacherpass;
        qDebug() << "Stored User:" << storedUser;
        qDebug() << "Stored Password:" << storedPass;

        // Compare entered credentials with stored credentials
        if (teacheruser == storedUser && teacherpass == storedPass)
        {
            QMessageBox::information(this, "LOGIN", "Success");


            Teacher_info_choice = new teacher_info_choice(this);
            Teacher_info_choice->show();

            // Hide the login window upon successful login
            this->hide();
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
QLabel *Loginteacher::createIconLabel(const QPixmap &pixmap)
{
    QLabel *iconLabel = new QLabel(this);
    iconLabel->setPixmap(pixmap);
    iconLabel->setScaledContents(true);
    return iconLabel;
}
