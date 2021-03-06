// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptPluginPackSourceEnumerator {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINPACKSOURCEENUMERATOR
public:
    class ScriptPluginPackSourceEnumerator& operator=(class ScriptPluginPackSourceEnumerator const &) = delete;
    ScriptPluginPackSourceEnumerator(class ScriptPluginPackSourceEnumerator const &) = delete;
    ScriptPluginPackSourceEnumerator() = delete;
#endif

public:
    /*0*/ virtual ~ScriptPluginPackSourceEnumerator();
    /*
    inline std::vector<std::unique_ptr<class IScriptPluginSource>> const & getPluginSources() const{
        std::vector<std::unique_ptr<class IScriptPluginSource>> const & (ScriptPluginPackSourceEnumerator::*rv)() const;
        *((void**)&rv) = dlsym("?getPluginSources@ScriptPluginPackSourceEnumerator@@UEBAAEBV?$vector@V?$unique_ptr@VIScriptPluginSource@@U?$default_delete@VIScriptPluginSource@@@std@@@std@@V?$allocator@V?$unique_ptr@VIScriptPluginSource@@U?$default_delete@VIScriptPluginSource@@@std@@@std@@@2@@std@@XZ");
        return (this->*rv)();
    }
    inline std::vector<struct PackIdVersion> const & getFullPackStack() const{
        std::vector<struct PackIdVersion> const & (ScriptPluginPackSourceEnumerator::*rv)() const;
        *((void**)&rv) = dlsym("?getFullPackStack@ScriptPluginPackSourceEnumerator@@UEBAAEBV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline  ~ScriptPluginPackSourceEnumerator(){
         (ScriptPluginPackSourceEnumerator::*rv)();
        *((void**)&rv) = dlsym("??1ScriptPluginPackSourceEnumerator@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ScriptPluginPackSourceEnumerator(std::string const &, std::vector<class PackInstance> const &, std::vector<class PackInstance> const &);

protected:

private:

};