// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FlyTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYTRAVELSYSTEM
public:
    class FlyTravelSystem& operator=(class FlyTravelSystem const &) = delete;
    FlyTravelSystem(class FlyTravelSystem const &) = delete;
    FlyTravelSystem() = delete;
#endif

public:
    MCAPI static float getPlayerFlySpeed(class Abilities const &, class SynchedActorData const &);

protected:

private:

};