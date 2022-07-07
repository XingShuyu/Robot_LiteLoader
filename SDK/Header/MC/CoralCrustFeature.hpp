// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CoralCrustFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALCRUSTFEATURE
public:
    class CoralCrustFeature& operator=(class CoralCrustFeature const &) = delete;
    CoralCrustFeature(class CoralCrustFeature const &) = delete;
    CoralCrustFeature() = delete;
#endif

public:
    /*0*/ virtual ~CoralCrustFeature();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

protected:

private:
    MCAPI class BlockPos _getCropOffsetFromRot(int, int) const;
    MCAPI class BlockPos _getOffsetFromRot(int, int) const;
    MCAPI void _placeCoral(class BlockSource &, class BlockPos const &, class Random &, std::vector<class BlockPos> &, std::vector<struct std::pair<class BlockPos, unsigned char>> &, int) const;
    MCAPI void _placeCoralBase(class BlockSource &, class BlockPos const &, class Random &, class LegacyStructureTemplate &, class LegacyStructureSettings &) const;
    MCAPI void _placeSideDecorations(class BlockSource &, class BlockPos const &, class Random &, unsigned char) const;

};