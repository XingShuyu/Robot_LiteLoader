// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelDbRandomAccessFile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBRANDOMACCESSFILE
public:
    class LevelDbRandomAccessFile& operator=(class LevelDbRandomAccessFile const &) = delete;
    LevelDbRandomAccessFile(class LevelDbRandomAccessFile const &) = delete;
    LevelDbRandomAccessFile() = delete;
#endif

public:
    /*0*/ virtual ~LevelDbRandomAccessFile();
    /*1*/ virtual class leveldb::Status Read(unsigned __int64, unsigned __int64, class leveldb::Slice *, char *) const;

protected:

private:

};