#ifndef KDEINTEGRATIONOBJECT_H
#define KDEINTEGRATIONOBJECT_H

#include "abstractpluginobject.h"

namespace yasem {

class KdeIntegrationObject: public SDK::AbstractPluginObject
{
    Q_OBJECT
public:
    explicit KdeIntegrationObject(SDK::Plugin* plugin);
    virtual ~KdeIntegrationObject();

public:
    SDK::PluginObjectResult init();
    SDK::PluginObjectResult deinit();
};

}

#endif // KDEINTEGRATIONOBJECT_H
