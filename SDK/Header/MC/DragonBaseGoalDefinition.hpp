// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DragonBaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONBASEGOALDEFINITION
public:
    class DragonBaseGoalDefinition& operator=(class DragonBaseGoalDefinition const &) = delete;
    DragonBaseGoalDefinition(class DragonBaseGoalDefinition const &) = delete;
    DragonBaseGoalDefinition() = delete;
#endif

public:
    /*0*/ virtual ~DragonBaseGoalDefinition();
    /*
    inline bool validateMobType(class Mob & a0){
        bool (DragonBaseGoalDefinition::*rv)(class Mob &);
        *((void**)&rv) = dlsym("?validateMobType@DragonBaseGoalDefinition@@UEAA_NAEAVMob@@@Z");
        return (this->*rv)(std::forward<class Mob &>(a0));
    }
    */

protected:

private:

};