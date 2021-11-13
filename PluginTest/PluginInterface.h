#ifndef PLUGININTERFACE_H
#define PLUGININTERFACE_H

#include <QObject>
#include <QString>
#include <QDebug>

class PluginInterface
{
public:
    virtual ~PluginInterface(){}
    virtual QString getVersion() = 0;
    virtual void run() = 0;
};
Q_DECLARE_INTERFACE(PluginInterface,"com.Plugin.PluginInterface")

#endif // PLUGININTERFACE_H
