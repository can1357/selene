#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_adapter_hardware_assist_attributes_t.start.hpp"
namespace ndis
{
    struct qos_capabilities_t;
    struct sriov_capabilities_t;
    struct hd_split_attributes_t;
    struct nic_switch_capabilities_t;
    struct gft_offload_capabilities_t;
    struct receive_filter_capabilities_t;

    // [struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_adapter_hardware_assist_attributes_t                                      
    {                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                    
        _m00 struct ndis::object_header_t                header;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct ndis::hd_split_attributes_t*         hd_split_attributes;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HDSplitAttributes
        _m02 struct ndis::receive_filter_capabilities_t* hardware_receive_filter_capabilities;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HardwareReceiveFilterCapabilities
        _m03 struct ndis::receive_filter_capabilities_t* current_receive_filter_capabilities;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CurrentReceiveFilterCapabilities
        _m04 struct ndis::nic_switch_capabilities_t*     hardware_nic_switch_capabilities;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .HardwareNicSwitchCapabilities
        _m05 struct ndis::nic_switch_capabilities_t*     current_nic_switch_capabilities;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CurrentNicSwitchCapabilities
        _m06 struct ndis::sriov_capabilities_t*          hardware_sriov_capabilities;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HardwareSriovCapabilities
        _m07 struct ndis::sriov_capabilities_t*          current_sriov_capabilities;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CurrentSriovCapabilities
        _m08 struct ndis::qos_capabilities_t*            hardware_qos_capabilities;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HardwareQosCapabilities
        _m09 struct ndis::qos_capabilities_t*            current_qos_capabilities;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CurrentQosCapabilities
        _m10 struct ndis::gft_offload_capabilities_t*    hardware_gft_offload_capabilities;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .HardwareGftOffloadCapabilities
        _m11 struct ndis::gft_offload_capabilities_t*    current_gft_offload_capabilities;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CurrentGftOffloadCapabilities
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES.$", 0x60, true, 0xa79635105a61d015 );                                     
        SDK_FIXED_SIZE( miniport_adapter_hardware_assist_attributes_t, 0x60 );                                     
    };                                                                                        
};
#include "magic/miniport_adapter_hardware_assist_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_adapter_hardware_assist_attributes_t, 0x60 );
