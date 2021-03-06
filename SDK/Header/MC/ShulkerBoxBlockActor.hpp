// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShulkerBoxBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXBLOCKACTOR
public:
    class ShulkerBoxBlockActor& operator=(class ShulkerBoxBlockActor const &) = delete;
    ShulkerBoxBlockActor(class ShulkerBoxBlockActor const &) = delete;
    ShulkerBoxBlockActor() = delete;
#endif

public:
    /*
    inline bool _detectEntityObstruction(class BlockSource & a0) const{
        bool (ShulkerBoxBlockActor::*rv)(class BlockSource &) const;
        *((void**)&rv) = dlsym("?_detectEntityObstruction@ShulkerBoxBlockActor@@MEBA_NAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void onPlace(class BlockSource & a0){
        void (ShulkerBoxBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?onPlace@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline int getMaxStackSize() const{
        int (ShulkerBoxBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getMaxStackSize@ShulkerBoxBlockActor@@UEBAHXZ");
        return (this->*rv)();
    }
    inline std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource & a0){
        std::unique_ptr<class BlockActorDataPacket> (ShulkerBoxBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?_getUpdatePacket@ShulkerBoxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void _onUpdatePacket(class CompoundTag const & a0, class BlockSource & a1){
        void (ShulkerBoxBlockActor::*rv)(class CompoundTag const &, class BlockSource &);
        *((void**)&rv) = dlsym("?_onUpdatePacket@ShulkerBoxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class CompoundTag const &>(a0), std::forward<class BlockSource &>(a1));
    }
    inline bool canPushInItem(class BlockSource & a0, int a1, int a2, class ItemInstance const & a3) const{
        bool (ShulkerBoxBlockActor::*rv)(class BlockSource &, int, int, class ItemInstance const &) const;
        *((void**)&rv) = dlsym("?canPushInItem@ShulkerBoxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<int>(a1), std::forward<int>(a2), std::forward<class ItemInstance const &>(a3));
    }
    inline std::string getName() const{
        std::string (ShulkerBoxBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getName@ShulkerBoxBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
        return (this->*rv)();
    }
    inline class AABB getObstructionAABB() const{
        class AABB (ShulkerBoxBlockActor::*rv)() const;
        *((void**)&rv) = dlsym("?getObstructionAABB@ShulkerBoxBlockActor@@MEBA?AVAABB@@XZ");
        return (this->*rv)();
    }
    inline void load(class Level & a0, class CompoundTag const & a1, class DataLoadHelper & a2){
        void (ShulkerBoxBlockActor::*rv)(class Level &, class CompoundTag const &, class DataLoadHelper &);
        *((void**)&rv) = dlsym("?load@ShulkerBoxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z");
        return (this->*rv)(std::forward<class Level &>(a0), std::forward<class CompoundTag const &>(a1), std::forward<class DataLoadHelper &>(a2));
    }
    inline void playCloseSound(class BlockSource & a0){
        void (ShulkerBoxBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?playCloseSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void playOpenSound(class BlockSource & a0){
        void (ShulkerBoxBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?playOpenSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline bool save(class CompoundTag & a0) const{
        bool (ShulkerBoxBlockActor::*rv)(class CompoundTag &) const;
        *((void**)&rv) = dlsym("?save@ShulkerBoxBlockActor@@UEBA_NAEAVCompoundTag@@@Z");
        return (this->*rv)(std::forward<class CompoundTag &>(a0));
    }
    inline void tick(class BlockSource & a0){
        void (ShulkerBoxBlockActor::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?tick@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    */
    MCAPI ShulkerBoxBlockActor(enum BlockActorType, std::string const &, enum BlockActorRendererId, class BlockPos const &);
    MCAPI void setFacingDir(unsigned char);
    MCAPI static bool itemAllowed(class ItemStackBase const &);
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const &, int);

protected:

private:
    MCAPI void _calculateBB();
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource &, class Actor *) const;
    MCAPI static int const ITEMS_SIZE;

};