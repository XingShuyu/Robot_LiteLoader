// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SquidMoveAwayFromGroundGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDMOVEAWAYFROMGROUNDGOAL
public:
    class SquidMoveAwayFromGroundGoal& operator=(class SquidMoveAwayFromGroundGoal const &) = delete;
    SquidMoveAwayFromGroundGoal(class SquidMoveAwayFromGroundGoal const &) = delete;
    SquidMoveAwayFromGroundGoal() = delete;
#endif

public:
    /*0*/ virtual ~SquidMoveAwayFromGroundGoal();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*
    inline void stop(){
        void (SquidMoveAwayFromGroundGoal::*rv)();
        *((void**)&rv) = dlsym("?stop@SquidMoveAwayFromGroundGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void tick(){
        void (SquidMoveAwayFromGroundGoal::*rv)();
        *((void**)&rv) = dlsym("?tick@SquidMoveAwayFromGroundGoal@@UEAAXXZ");
        return (this->*rv)();
    }
    inline bool canContinueToUse(){
        bool (SquidMoveAwayFromGroundGoal::*rv)();
        *((void**)&rv) = dlsym("?canContinueToUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    inline bool canUse(){
        bool (SquidMoveAwayFromGroundGoal::*rv)();
        *((void**)&rv) = dlsym("?canUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ");
        return (this->*rv)();
    }
    */

protected:

private:

};