// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct EducationMetadata {

#define AFTER_EXTRA
// Add Member There
enum ContentType;
enum UserType;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONMETADATA
public:
    struct EducationMetadata& operator=(struct EducationMetadata const &) = delete;
    EducationMetadata(struct EducationMetadata const &) = delete;
#endif

public:
    MCAPI EducationMetadata();
    MCAPI ~EducationMetadata();

protected:

private:

};