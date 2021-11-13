#include "pluginmanager.h"


PluginManager::PluginManager(QObject *parent) : QObject(parent)
{
}

void PluginManager::load(QString path)
{
    QPluginLoader* loader = new QPluginLoader(path);
    QObject*temp = loader->instance();
    PluginInterface *self = qobject_cast<PluginInterface*>(temp);
    plugin.insert(self->getVersion(),loader);

}

void PluginManager::unload(QString name)
{
    auto curr = plugin[name];
    curr->unload();
    plugin.remove(name);
}

void PluginManager::run(QString name)
{
    auto loader = plugin[name];
    PluginInterface *self = qobject_cast<PluginInterface*>(loader->instance());
    self->run();
}
