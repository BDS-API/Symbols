#ifndef BDSAPIIMPL_WEAPONITEM_H
#define BDSAPIIMPL_WEAPONITEM_H

#include "Item.h"

class WeaponItem : public Item {

public:

    WeaponItem(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, int,
               const Tier &);

    virtual ~WeaponItem();

    virtual bool canDestroySpecial(const Block &) const;

    virtual unsigned int getAttackDamage() const;

    virtual bool isHandEquipped() const;

    virtual bool canDestroyInCreative() const;

    virtual void appendFormattedHovertext(const ItemStackBase &, Level &,
                                          const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &,
                                          bool) const;

    virtual bool isValidRepairItem(const ItemInstance &, const ItemInstance &) const;

    virtual unsigned int getEnchantSlot() const;

    virtual unsigned int getEnchantValue() const;

    virtual ItemStack &use(ItemStack &, Player &) const;

    virtual float getDestroySpeed(const ItemInstance &, const Block &) const;

    virtual void hurtEnemy(ItemStack &, Mob *, Mob *) const;
};

#endif //BDSAPIIMPL_WEAPONITEM_H
