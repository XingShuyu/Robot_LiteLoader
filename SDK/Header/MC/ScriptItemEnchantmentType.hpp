// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptItemEnchantmentType {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMENCHANTMENTTYPE
public:
    ScriptItemEnchantmentType(struct ScriptItemEnchantmentType const &) = delete;
    ScriptItemEnchantmentType() = delete;
#endif

public:
    MCAPI std::string getName() const;
    MCAPI struct ScriptItemEnchantmentType & operator=(struct ScriptItemEnchantmentType const &);
    MCAPI ~ScriptItemEnchantmentType();

protected:

private:

};