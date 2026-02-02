#include "teacherregister.h"
#include "ui_teacherregister.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

TeacherRegister::TeacherRegister(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::TeacherRegister)
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

TeacherRegister::~TeacherRegister()
{
    delete ui;
}

void TeacherRegister::on_Createteacheracc_clicked()
{
    QString writetuser = ui->teacheruser->text();
    QString writetpass = ui->teacherpass->text();

    // Check if the password is empty
    if (writetpass.trimmed().isEmpty()) {
        qDebug() << "Error: Empty password";
        // Handle the error, e.g., show an error message
    } else {
        // Prepare the data to be written to the file
        QString data = "Username: " + writetuser + "\nPassword: " + writetpass;

        // Write data to the file
        QFile file("teachercredentials.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << data;
            file.close();

            // Display a message of successful registration
            QMessageBox::information(this, "Registration", "Registration successful!");

            qDebug() << "Teacher credentials saved to teachercredentials.txt";
        }
        else
        {
            // Display an error message if the file cannot be opened for writing
            QMessageBox::critical(this, "Error", "Error opening file for writing");

            qDebug() << "Error opening file for writing";
        }
    }
}

QLabel *TeacherRegister::createIconLabel(const QPixmap &pixmap)
{
    QLabel *iconLabel = new QLabel(this);
    iconLabel->setPixmap(pixmap);
    iconLabel->setScaledContents(true);
    return iconLabel;
}
