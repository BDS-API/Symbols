#pragma once

#include "./Item.h"
#include "./ItemStackBase.h"
#include <string>


class EnchantedBookItem : Item {

public:
    virtual ~EnchantedBookItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void getEnchantSlot()const;
    virtual void getEnchantValue()const;

    EnchantedBookItem(std::string const&, int, bool);
};