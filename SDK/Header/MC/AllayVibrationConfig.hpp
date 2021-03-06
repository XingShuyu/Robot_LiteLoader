// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "VibrationListenerConfig.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AllayVibrationConfig : public VibrationListenerConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ALLAYVIBRATIONCONFIG
public:
    class AllayVibrationConfig& operator=(class AllayVibrationConfig const &) = delete;
    AllayVibrationConfig(class AllayVibrationConfig const &) = delete;
    AllayVibrationConfig() = delete;
#endif

public:
    /*0*/ virtual void onSignalReceive(class BlockSource &, class BlockPos, class GameEvent const &, class Actor *, float, class Actor *);
    /*2*/ virtual bool shouldListen(class BlockSource &, class BlockPos, class GameEvent const &, class Actor const *);
    /*3*/ virtual ~AllayVibrationConfig();
    MCAPI AllayVibrationConfig(class Actor &, unsigned short);

protected:

private:

};