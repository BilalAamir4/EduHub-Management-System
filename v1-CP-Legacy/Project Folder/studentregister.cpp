#include "studentregister.h"
#include "ui_studentregister.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap usernameIconPixmap("C:/Users/death/Desktop/username.png");
    QLabel *usernameIconLabel = createIconLabel(usernameIconPixmap);
    usernameIconLabel->setGeometry(470, 185, 50, 50);  // Adjust the position and size as needed

    // Load the password icon
    QPixmap passwordIconPixmap("C:/Users/death/Desktop/password.png");
    QLabel *passwordIconLabel = createIconLabel(passwordIconPixmap);
    passwordIconLabel->setGeometry(470, 290, 50, 50);  // Adjust the position and size as needed
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString username = ui->studentuser->text();
    QString password = ui->studentpass->text();

    // Check if the password is empty
    if (password.trimmed().isEmpty()) {
        qDebug() << "Error: Empty password";
        // Handle the error, e.g., show an error message
    } else {
        // Prepare the data to be written to the file
        QString data = "Username: " + username + "\nPassword: " + password;

        // Write data to the file
        QFile file("studentcredentials.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream stream(&file);
            stream << data;
            file.close();

            // Display a message of successful registration
            QMessageBox::information(this, "Registration", "Registration successful!");

            qDebug() << "Student credentials saved to studentcredentials.txt";
        }
        else
        {
            // Display an error message if the file cannot be opened for writing
            QMessageBox::critical(this, "Error", "Error opening file for writing");

            qDebug() << "Error opening file for writing";
        }
    }
}

QLabel *Dialog::createIconLabel(const QPixmap &pixmap)
{
    QLabel *iconLabel = new QLabel(this);
    iconLabel->setPixmap(pixmap);
    iconLabel->setScaledContents(true);
    return iconLabel;
}
