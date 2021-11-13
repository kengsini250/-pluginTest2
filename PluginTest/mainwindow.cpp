#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "pluginmanager.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PluginManager* manager = new PluginManager;
    manager->load("D:\\Program\\QT\\build-PluginA-Desktop_Qt_6_2_0_MSVC2019_64bit-Debug\\PluginA.dll");
    manager->run("PluginA");

    connect(ui->pushButton,&QPushButton::clicked,this,[manager]{
        manager->unload("PluginA");
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

