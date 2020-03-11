#pragma once

#include "../../block/BlockLegacy.h"
#include "../../definition/BlockDefinition.h"
#include "./BlockComponentDescription.h"
#include <string>


class BlockMapColorDescription : BlockComponentDescription {

public:
    static std::string NameID;

    virtual ~BlockMapColorDescription();
    virtual std::string getName()const;
    virtual void initializeComponent(BlockLegacy &)const;
//  virtual void buildSchema(JsonUtil::JsonSchemaObjectNode<JsonUtil::JsonParseState<JsonUtil::EmptyClass, BlockDefinition>, BlockDefinition> &)const; //TODO: incomplete function definition

    BlockMapColorDescription();
};