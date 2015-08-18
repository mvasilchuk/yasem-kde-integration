#include "kdeintegrationobject.h"
#include "macros.h"

#include <QCoreApplication>

using namespace yasem;

KdeIntegrationObject::KdeIntegrationObject(SDK::Plugin* plugin):
    SDK::AbstractPluginObject(plugin)
{

}

KdeIntegrationObject::~KdeIntegrationObject()
{
}

SDK::PluginObjectResult KdeIntegrationObject::init()
{
    return SDK::PLUGIN_OBJECT_RESULT_OK;
}

SDK::PluginObjectResult KdeIntegrationObject::deinit()
{
    return SDK::PLUGIN_OBJECT_RESULT_OK;
}
