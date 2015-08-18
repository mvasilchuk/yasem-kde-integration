#include "kdeintegrationplugin.h"
#include "kdeintegrationobject.h"

using namespace yasem;

KdeIntegration::KdeIntegration(QObject* parent):
    SDK::Plugin(parent)
{

}

KdeIntegration::~KdeIntegration()
{

}


void KdeIntegration::register_dependencies()
{
}

void KdeIntegration::register_roles()
{
    register_role(SDK::ROLE_ENV_INTEGRATION, new KdeIntegrationObject(this));
}
