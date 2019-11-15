#ifndef BDSAPIIMPL_SIMPLECONTAINER_H
#define BDSAPIIMPL_SIMPLECONTAINER_H

#include "Container.h"
#include "../actor/player/Player.h"

class Player;

class SimpleContainer : public Container {

public:
    virtual void clearContent();

    virtual unsigned int getContainerSize() const;

    virtual ItemStack &getItem() const;

    virtual unsigned int getMaxStackSize() const;

    virtual void setItem(int slot, const ItemStack &itemStack);

    virtual void startOpen(Player &);

    virtual void stopOpen(Player &);
};

#endif //BDSAPIIMPL_SIMPLECONTAINER_H
