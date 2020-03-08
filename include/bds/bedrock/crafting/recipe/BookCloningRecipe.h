#pragma once

#include "../../level/Level"
#include "../../container/CraftingContainer"
#include "../../../mce/UUID"


class BookCloningRecipe : MultiRecipe {

public:
    static long ID;

    virtual BookCloningRecipe::~BookCloningRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    BookCloningRecipe(std::string);
    BookCloningRecipe(std::string, mce::UUID const&);
};
