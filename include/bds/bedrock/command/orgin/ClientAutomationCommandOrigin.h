#pragma once

#include "./CommandOrigin.h"
#include <string>


class ClientAutomationCommandOrigin : CommandOrigin {

public:
    virtual ~ClientAutomationCommandOrigin();
    virtual std::string getRequestId()const;
    virtual std::string getName()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    virtual void toCommandOriginData()const;

    ClientAutomationCommandOrigin(std::string const&);
};