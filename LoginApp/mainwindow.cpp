#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QString>
#include <QMessageBox>
#include <QPixmap>
#include <QMovie>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//   animation = new QPropertyAnimation(ui->label_2,"geometry");
//   animation->setDuration(10000);
//   animation->setStartValue(ui->label_2->geometry());
//   animation->setEndValue(QRect(20,20,0,0));
//   animation->start();

//    QPixmap pix(":/img/icons8-user-48.png");
//    int w = 100;
//    int h = 100;
//    ui->label_user->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


//    QPixmap pix2(":/img/frame no ok.png");
//    int w1 = ui->label_3->width();
//    int h1 = ui->label_3->height();
//    ui->label_3->setPixmap(pix2.scaled(w1,h1,Qt::KeepAspectRatio));

                                    /*user gif*/

    QMovie *movie = new QMovie(":/img/ezgif.com-gif-maker.gif");
   // QLabel *processLabel = new QLabel(this);
   // ui->label_2->setGeometry(100,100,100,100);
    ui->label_2->setMovie(movie);
    movie->start();






}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
   QString username = ui->username->text();
   QString password = ui->password->text();

   if(username == "admin" && password == "radio123")
   {
        QMessageBox::information(this,"Messgage","test provided");
        hide();

        dialog = new Dialog(this);
        dialog->show();
      // ui->statusbar->showMessage("correct username and password",5000);
   }
   else
       QMessageBox::warning(this,"Message","test not provided");
       //ui->statusbar->showMessage("incorect username and password", 5000);

}


void MainWindow::on_sign_in_push_button_clicked()
{
    sign = new sign_in(this);
    sign->show();
}


