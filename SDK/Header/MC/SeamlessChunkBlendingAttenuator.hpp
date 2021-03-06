// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SeamlessChunkBlendingAttenuator {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAMLESSCHUNKBLENDINGATTENUATOR
public:
    class SeamlessChunkBlendingAttenuator& operator=(class SeamlessChunkBlendingAttenuator const &) = delete;
    SeamlessChunkBlendingAttenuator(class SeamlessChunkBlendingAttenuator const &) = delete;
    SeamlessChunkBlendingAttenuator() = delete;
#endif

public:
    MCAPI SeamlessChunkBlendingAttenuator(class ChunkPos, class std::optional<std::vector<class std::array<struct SeamlessChunkBlendingAttenuatorUtil::AttenuationData, 4>>>, short);
    MCAPI float attenuateDensity(class DividedPos2d<4> const &, int, float) const;
    MCAPI struct TerrainInfo attenuateTerrainInfo(class DividedPos2d<4> const &, struct TerrainInfo const &) const;
    MCAPI class Biome const * tryGetAttenuatedBiome(class DividedPos<4> const &, class BiomeRegistry const &, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>> const &) const;
    MCAPI ~SeamlessChunkBlendingAttenuator();

protected:

private:

};