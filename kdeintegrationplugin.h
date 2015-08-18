#ifndef KDEINTERGATION_H
#define KDEINTERGATION_H

#include "kdeintegration_global.h"

#include "plugin.h"

#include <QObject>
#include <QSystemTrayIcon>
#include <QMenu>

namespace yasem {

class KDEINTERGATIONSHARED_EXPORT KdeIntegration: public SDK::Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.KdeIntegrationPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::SDK::Plugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "KDE integration")
    Q_CLASSINFO("version", MODULE_VERSION)
    Q_CLASSINFO("revision", GIT_VERSION)
public:
    KdeIntegration(QObject* parent = 0);
    virtual ~KdeIntegration();

    // Plugin interface
public:
    void register_dependencies();
    void register_roles();
};

}

#endif // KDEINTERGATION_H
