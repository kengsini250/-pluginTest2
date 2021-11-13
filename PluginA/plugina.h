#ifndef PLUGINA_H
#define PLUGINA_H

#include <QWidget>
#include "PluginA_global.h"
#include "../PluginTest/PluginInterface.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Form; }
QT_END_NAMESPACE

class PLUGINA_EXPORT PluginA : public QWidget,public PluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.Plugin.PluginA")
    Q_INTERFACES(PluginInterface)
public:
    PluginA(QWidget* parent = Q_NULLPTR);
    virtual ~PluginA(){delete ui;}
    virtual QString getVersion()override
    {
        return "PluginA";
    }
    virtual void run()override;
private:
    Ui::Form *ui;
};

#endif // PLUGINA_H
