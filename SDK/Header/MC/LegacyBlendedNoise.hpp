// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyBlendedNoise {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBLENDEDNOISE
public:
    class LegacyBlendedNoise& operator=(class LegacyBlendedNoise const &) = delete;
    LegacyBlendedNoise(class LegacyBlendedNoise const &) = delete;
    LegacyBlendedNoise() = delete;
#endif

public:
    MCAPI ~LegacyBlendedNoise();
    MCAPI static class LegacyBlendedNoise make(class IRandom &);

protected:

private:

};