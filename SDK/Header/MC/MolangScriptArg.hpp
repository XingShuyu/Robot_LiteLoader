// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct MolangScriptArg {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGSCRIPTARG
public:
    MolangScriptArg() = delete;
#endif

public:
    MCAPI MolangScriptArg(struct MolangScriptArg const &);
    MCAPI MolangScriptArg(int);
    MCAPI MolangScriptArg(float);
    MCAPI MolangScriptArg(struct MolangScriptArg &&);
    MCAPI struct MolangMemberArray * getAsNonConstMolangMemberArray();
    MCAPI struct MolangScriptArg & operator=(struct MolangScriptArg &&);
    MCAPI struct MolangScriptArg & operator=(struct MolangScriptArg const &);
    MCAPI ~MolangScriptArg();

protected:

private:

};