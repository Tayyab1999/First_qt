#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButton_clicked()
{
    qDebug()<<"submitt the data";
    qDebug()<<"First name of user is "<<ui->f_button->text();
    qDebug()<<"Second name of user is "<<ui->s_button->text();
}
