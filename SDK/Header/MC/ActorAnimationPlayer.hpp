// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ActorAnimationPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONPLAYER
public:
    class ActorAnimationPlayer& operator=(class ActorAnimationPlayer const &) = delete;
    ActorAnimationPlayer(class ActorAnimationPlayer const &) = delete;
    ActorAnimationPlayer() = delete;
#endif

public:
    /*0*/ virtual ~ActorAnimationPlayer();
    /*
    inline void buildBoneToPartMapping(class AnimationComponent & a0){
        void (ActorAnimationPlayer::*rv)(class AnimationComponent &);
        *((void**)&rv) = dlsym("?buildBoneToPartMapping@ActorAnimationPlayer@@UEAAXAEAVAnimationComponent@@@Z");
        return (this->*rv)(std::forward<class AnimationComponent &>(a0));
    }
    inline void bindParticleEffects(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const & a0){
        void (ActorAnimationPlayer::*rv)(class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &);
        *((void**)&rv) = dlsym("?bindParticleEffects@ActorAnimationPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V1@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V1@@std@@@3@@std@@@Z");
        return (this->*rv)(std::forward<class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> const &>(a0));
    }
    inline void bindSoundEffects(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const & a0){
        void (ActorAnimationPlayer::*rv)(class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const &);
        *((void**)&rv) = dlsym("?bindSoundEffects@ActorAnimationPlayer@@UEAAXAEBV?$unordered_map@VHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z");
        return (this->*rv)(std::forward<class std::unordered_map<class HashedString, std::string, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, std::string>>> const &>(a0));
    }
    inline  ~ActorAnimationPlayer(){
         (ActorAnimationPlayer::*rv)();
        *((void**)&rv) = dlsym("??1ActorAnimationPlayer@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ActorAnimationPlayer(class HashedString const &, class ExpressionNode const &);

protected:

private:

};