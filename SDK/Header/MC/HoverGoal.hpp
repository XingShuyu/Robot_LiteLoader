// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HoverGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERGOAL
public:
    class HoverGoal& operator=(class HoverGoal const &) = delete;
    HoverGoal(class HoverGoal const &) = delete;
    HoverGoal() = delete;
#endif

public:
    /*0*/ virtual ~HoverGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*
    inline void stop(){
        void (HoverGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@HoverGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI HoverGoal(class Mob &, float);

protected:

private:

};