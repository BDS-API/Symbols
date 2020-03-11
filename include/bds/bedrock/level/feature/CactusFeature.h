#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "./Feature.h"
#include "../../util/BlockPos.h"


class CactusFeature : Feature {

public:
    virtual ~CactusFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CactusFeature();
};