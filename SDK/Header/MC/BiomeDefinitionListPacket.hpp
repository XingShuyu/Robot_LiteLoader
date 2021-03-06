// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BiomeDefinitionListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEDEFINITIONLISTPACKET
public:
    class BiomeDefinitionListPacket& operator=(class BiomeDefinitionListPacket const &) = delete;
    BiomeDefinitionListPacket(class BiomeDefinitionListPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~BiomeDefinitionListPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /*
    inline  ~BiomeDefinitionListPacket(){
         (BiomeDefinitionListPacket::*rv)();
        *((void**)&rv) = dlsym("??1BiomeDefinitionListPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BiomeDefinitionListPacket();

protected:

private:

};