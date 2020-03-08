#pragma once

#include "../../../../unmapped/CircuitSystem"
#include "../../../../unmapped/CircuitSceneGraph"
#include "../../../util/BlockPos"
#include "../../../../unmapped/CircuitTrackingInfo"


class ConsumerComponent : BaseCircuitComponent {

public:
    virtual ConsumerComponent::~ConsumerComponent()
    virtual bool canConsumerPower();
    virtual void getBaseType()const;
    virtual void getInstanceType()const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual bool isSecondaryPowered();

    void setAcceptHalfPulse(bool);
    ConsumerComponent(void);
    void setPropagatePower(bool);
    bool isPromotedToProducer();
};
