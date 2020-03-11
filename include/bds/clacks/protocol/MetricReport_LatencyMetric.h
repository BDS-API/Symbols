#pragma once

#include "./MetricReport_LatencyMetric.h"
#include "./Xuid.h"


namespace com::mojang::clacks::protocol {

class MetricReport_LatencyMetric /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~MetricReport_LatencyMetric();
    virtual void New()const;
//  virtual void New(google::protobuf::Arena *)const; //TODO: incomplete function definition
    virtual void Clear();
    virtual bool IsInitialized()const;
//  virtual void MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *); //TODO: incomplete function definition
    virtual void ByteSizeLong()const;
//  virtual void SerializeWithCachedSizes(google::protobuf::io::CodedOutputStream *)const; //TODO: incomplete function definition
    virtual void GetCachedSize()const;
    virtual void InternalSerializeWithCachedSizesToArray(bool, unsigned char *)const;
//  virtual void CopyFrom(google::protobuf::Message const&); //TODO: incomplete function definition
//  virtual void MergeFrom(google::protobuf::Message const&); //TODO: incomplete function definition
    virtual void SetCachedSize(int)const;
    virtual void GetMetadata()const;

    void set_latencyinns(long);
    void set_pinginns(long);
    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *);
    void GetArenaNoVirtual()const;
    void InitAsDefaultInstance();
    MetricReport_LatencyMetric();
    void SharedCtor();
    MetricReport_LatencyMetric(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
    void CopyFrom(com::mojang::clacks::protocol::MetricReport_LatencyMetric const&);
    void Swap(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
    void InternalSwap(com::mojang::clacks::protocol::MetricReport_LatencyMetric *);
    void has_xuid()const;
    void internal_default_instance();
    void mutable_xuid();
    void _internal_xuid()const;
    void latencyinns()const;
    void pinginns()const;
    void xuid()const;
};

}