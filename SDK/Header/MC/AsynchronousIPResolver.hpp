// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AsynchronousIPResolver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ASYNCHRONOUSIPRESOLVER
public:
    class AsynchronousIPResolver& operator=(class AsynchronousIPResolver const &) = delete;
    AsynchronousIPResolver(class AsynchronousIPResolver const &) = delete;
    AsynchronousIPResolver() = delete;
#endif

public:
    MCAPI AsynchronousIPResolver(std::string);
    MCAPI std::string getIp() const;
    MCAPI std::string const & getOriginalUrl() const;
    MCAPI bool isDone() const;
    MCAPI ~AsynchronousIPResolver();

protected:

private:
    MCAPI void _resolve();

};