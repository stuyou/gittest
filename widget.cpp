#include "widget.h"
#include "ui_widget.h"
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    ui->textBrowser->setText(tr("test for QString"));
    double value=99.0;
    ui->textBrowser->setText(QString::number(value,'g',6));
    int value1=20;
    ui->textBrowser->setText(QString::number(value1,10));
}
