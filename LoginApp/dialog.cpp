#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
#include"mainwindow.h"
#include "emission.h"
#include "page.h"
#include<QMovie>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

//    QMovie *movie = new QMovie(":/img/profile.gif");
//   // QLabel *processLabel = new QLabel(this);
//   // ui->label_2->setGeometry(100,100,100,100);
//    ui->emission_button->setMovie(movie);
//    movie->start();

    QMovie *movie1 = new QMovie(":/img/giphy (2) (1).gif");
   // QLabel *processLabel = new QLabel(this);
   // ui->label_2->setGeometry(100,100,100,100);
    ui->label_8->setMovie(movie1);
    movie1->start();

}

Dialog::~Dialog()
{
    delete ui;
}





void Dialog::on_emission_button_clicked()
{
    ui->menu_stacked_widget->setCurrentIndex(1);
}

void Dialog::on_pushButton_invite_clicked()
{
     ui->menu_stacked_widget->setCurrentIndex(2);
}
