// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct PropertyDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA

public:
    MCAPI PropertyDescription(struct PropertyDescription const &);
    MCAPI PropertyDescription();
    MCAPI float getFloatMax() const;
    MCAPI float getFloatMin() const;
    MCAPI int getIntMax() const;
    MCAPI int getIntMin() const;
    MCAPI int indexOf(unsigned __int64 const &) const;
    MCAPI struct PropertyDescription & operator=(struct PropertyDescription const &);
    MCAPI class CompoundTag toCompoundTag() const;
    MCAPI ~PropertyDescription();

protected:

private:
    MCAPI void _copy(struct PropertyDescription const &);

};