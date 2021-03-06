// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FillingContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Inventory : public FillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORY
public:
    class Inventory& operator=(class Inventory const &) = delete;
    Inventory(class Inventory const &) = delete;
    Inventory() = delete;
#endif

public:
    /*0*/ virtual ~Inventory();
    /*1*/ virtual void init();
    /*9*/ virtual void setItem(int, class ItemStack const &);
    /*10*/ virtual void setItemWithForceBalance(int, class ItemStack const &, bool);
    /*16*/ virtual void startOpen(class Player &);
    /*17*/ virtual void stopOpen(class Player &);
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*31*/ virtual void __unk_vfn_31();
    /*33*/ virtual bool add(class ItemStack &);
    /*34*/ virtual bool canAdd(class ItemStack const &) const;
    /*38*/ virtual int getEmptySlotsCount() const;
    /*39*/ virtual int getFirstEmptySlot() const;
    /*40*/ virtual void setContainerSize(int);
    MCAPI void dropSlot(int, bool, bool, bool);
    MCAPI void setupDefault();
    MCAPI void tick(int);

protected:

private:

};