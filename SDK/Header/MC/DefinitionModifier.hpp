// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct DefinitionModifier {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFINITIONMODIFIER
public:
    DefinitionModifier() = delete;
#endif

public:
    MCAPI DefinitionModifier(struct DefinitionModifier const &);
    MCAPI struct DefinitionModifier & operator=(struct DefinitionModifier &&);
    MCAPI struct DefinitionModifier & operator=(struct DefinitionModifier const &);
    MCAPI ~DefinitionModifier();

protected:

private:

};