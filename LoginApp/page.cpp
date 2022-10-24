#include "page.h"
#include "ui_page.h"

page::page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page)
{
    ui->setupUi(this);
}

page::~page()
{
    delete ui;
}

void page::setemission(emission e)
{
    ui->name_2->setText(e.get_name());
    ui->type_2->setText(e.get_type());
    ui->sujet_2->setText(e.get_sujet());

}
