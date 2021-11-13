#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H

#include <QObject>
#include <QMap>
#include <QPluginLoader>
#include "PluginInterface.h"

class PluginManager : public QObject
{
    Q_OBJECT
public:
    explicit PluginManager(QObject *parent = nullptr);
    void load(QString path);
    void unload(QString name);
    void run(QString name);
private:
    QMap<QString,QPluginLoader*> plugin;
signals:

};

#endif // PLUGINMANAGER_H
