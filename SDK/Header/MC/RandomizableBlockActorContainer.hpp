// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RandomizableBlockActorContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZABLEBLOCKACTORCONTAINER
public:
    class RandomizableBlockActorContainer& operator=(class RandomizableBlockActorContainer const &) = delete;
    RandomizableBlockActorContainer(class RandomizableBlockActorContainer const &) = delete;
    RandomizableBlockActorContainer() = delete;
#endif

public:
    /*
    inline  ~RandomizableBlockActorContainer(){
         (RandomizableBlockActorContainer::*rv)();
        *((void**)&rv) = dlsym("??1RandomizableBlockActorContainer@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void dropContents(class BlockSource & a0, class Vec3 const & a1, bool a2){
        void (RandomizableBlockActorContainer::*rv)(class BlockSource &, class Vec3 const &, bool);
        *((void**)&rv) = dlsym("?dropContents@RandomizableBlockActorContainer@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0), std::forward<class Vec3 const &>(a1), std::forward<bool>(a2));
    }
    inline void initializeContainerContents(class BlockSource & a0){
        void (RandomizableBlockActorContainer::*rv)(class BlockSource &);
        *((void**)&rv) = dlsym("?initializeContainerContents@RandomizableBlockActorContainer@@UEAAXAEAVBlockSource@@@Z");
        return (this->*rv)(std::forward<class BlockSource &>(a0));
    }
    inline void setContainerChanged(int a0){
        void (RandomizableBlockActorContainer::*rv)(int);
        *((void**)&rv) = dlsym("?setContainerChanged@RandomizableBlockActorContainer@@UEAAXH@Z");
        return (this->*rv)(std::forward<int>(a0));
    }
    inline void startOpen(class Player & a0){
        void (RandomizableBlockActorContainer::*rv)(class Player &);
        *((void**)&rv) = dlsym("?startOpen@RandomizableBlockActorContainer@@UEAAXAEAVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player &>(a0));
    }
    */
    MCAPI RandomizableBlockActorContainer(enum BlockActorType, std::string const &, class BlockPos const &, enum ContainerType);

protected:

private:

};