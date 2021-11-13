#include "plugina.h"
#include "./ui_form.h"

PluginA::PluginA(QWidget* parent):QWidget(parent),ui(new Ui::Form)
{
    ui->setupUi(this);
    show();
}

void PluginA::run()
{
    qDebug()<<"Plugin A";
}
