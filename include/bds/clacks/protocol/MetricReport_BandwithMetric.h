#pragma once

#include "./MetricReport_BandwithMetric.h"
#include "./Xuid.h"


namespace com::mojang::clacks::protocol {

class MetricReport_BandwithMetric /*google::protobuf::Message*/ { //TODO: incomplete class definition

public:
    virtual ~MetricReport_BandwithMetric();
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

    void set_allocated_xuid(com::mojang::clacks::protocol::Xuid *);
    void set_playerdeltabytessent(long);
    void set_playerdeltabytesreceived(long);
    void set_connectiontotalbytesreceived(long);
    void set_connectiontotalbytessent(long);
    void GetArenaNoVirtual()const;
    void InitAsDefaultInstance();
    MetricReport_BandwithMetric();
    void SharedCtor();
    MetricReport_BandwithMetric(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
    void SharedDtor();
    void descriptor();
    void default_instance();
    void MergeFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
    void CopyFrom(com::mojang::clacks::protocol::MetricReport_BandwithMetric const&);
    void Swap(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
    void InternalSwap(com::mojang::clacks::protocol::MetricReport_BandwithMetric *);
    void has_xuid()const;
    void internal_default_instance();
    void mutable_xuid();
    void _internal_xuid()const;
    void playerdeltabytessent()const;
    void playerdeltabytesreceived()const;
    void connectiontotalbytesreceived()const;
    void connectiontotalbytessent()const;
    void xuid()const;
};

}