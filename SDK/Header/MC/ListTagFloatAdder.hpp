// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ListTagFloatAdder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LISTTAGFLOATADDER
public:
    class ListTagFloatAdder& operator=(class ListTagFloatAdder const &) = delete;
    ListTagFloatAdder(class ListTagFloatAdder const &) = delete;
    ListTagFloatAdder() = delete;
#endif

public:
    MCAPI class ListTagFloatAdder & operator()(float);
    MCAPI ~ListTagFloatAdder();

protected:

private:

};