#ifndef PAGE_H
#define PAGE_H

#include <QDialog>
#include"emission.h"
namespace Ui {
class page;
}

class page : public QDialog
{
    Q_OBJECT

public:
    explicit page(QWidget *parent = nullptr);
    void setemission(emission c);
    ~page();

private:
    Ui::page *ui;
};

#endif // PAGE_H
