// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptMinecraftNetModuleFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTNETMODULEFACTORY
public:
    class ScriptMinecraftNetModuleFactory& operator=(class ScriptMinecraftNetModuleFactory const &) = delete;
    ScriptMinecraftNetModuleFactory(class ScriptMinecraftNetModuleFactory const &) = delete;
    ScriptMinecraftNetModuleFactory() = delete;
#endif

public:
    MCAPI static std::string getModuleUUIDAsString();

protected:

private:
    MCAPI static char const * ModuleName;
    MCAPI static class mce::UUID const ModuleUUID;

};