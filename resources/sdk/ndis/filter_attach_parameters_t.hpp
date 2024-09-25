#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "net_luid_lh_t.hpp"
#include "object_header_t.hpp"
#include "physical_medium_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "net_if_media_connect_state_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/filter_attach_parameters_t.start.hpp"
namespace ndis
{
    struct offload_t;
    struct sriov_capabilities_t;
    struct nic_switch_info_array_t;
    struct hd_split_current_config_t;
    struct nic_switch_capabilities_t;
    struct receive_filter_capabilities_t;

    // [struct _NDIS_FILTER_ATTACH_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_attach_parameters_t                                                        
    {                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                   
        _m000 struct ndis::object_header_t                header;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint32_t                                    if_index;                            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IfIndex
        _m002 union ndis::net_luid_lh_t                   net_luid;                            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NetLuid
        _m003 nt::unicode_view*                           filter_module_guid_name;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FilterModuleGuidName
        _m004 uint32_t                                    base_miniport_if_index;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BaseMiniportIfIndex
        _m005 nt::unicode_view*                           base_miniport_instance_name;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BaseMiniportInstanceName
        _m006 nt::unicode_view*                           base_miniport_name;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .BaseMiniportName
        _m007 enum ndis::net_if_media_connect_state_t     media_connect_state;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MediaConnectState
        _m008 enum ndis::net_if_media_duplex_state_t      media_duplex_state;                  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .MediaDuplexState
        _m009 uint64_t                                    xmit_link_speed;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .XmitLinkSpeed
        _m010 uint64_t                                    rcv_link_speed;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RcvLinkSpeed
        _m011 enum ndis::medium_t                         miniport_media_type;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MiniportMediaType
        _m012 enum ndis::physical_medium_t                miniport_physical_media_type;        //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .MiniportPhysicalMediaType
        _m013 void*                                       miniport_media_specific_attributes;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MiniportMediaSpecificAttributes
        _m014 struct ndis::offload_t*                     default_offload_configuration;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .DefaultOffloadConfiguration
        _m015 uint16_t                                    mac_address_length;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .MacAddressLength
        _m016 sdk::array<uint8_t, 32>                     current_mac_address;                 //{ +0x0062    +0x0062    +0x0062    +0x0062    } | .CurrentMacAddress
        _m017 union ndis::net_luid_lh_t                   base_miniport_net_luid;              //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .BaseMiniportNetLuid
        _m018 uint32_t                                    lower_if_index;                      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .LowerIfIndex
        _m019 union ndis::net_luid_lh_t                   lower_if_net_luid;                   //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .LowerIfNetLuid
        _m020 uint32_t                                    flags;                               //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .Flags
        _m021 struct ndis::hd_split_current_config_t*     hd_split_current_config;             //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .HDSplitCurrentConfig
        _m022 struct ndis::receive_filter_capabilities_t* receive_filter_capabilities;         //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .ReceiveFilterCapabilities
        _m023 struct nt::device_object_t*                 miniport_physical_device_object;     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .MiniportPhysicalDeviceObject
        _m024 struct ndis::nic_switch_capabilities_t*     nic_switch_capabilities;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .NicSwitchCapabilities
        _m025 uint8_t                                     base_miniport_if_connector_present;  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .BaseMiniportIfConnectorPresent
        _m026 struct ndis::sriov_capabilities_t*          sriov_capabilities;                  //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .SriovCapabilities
        _m027 struct ndis::nic_switch_info_array_t*       nic_switch_array;                    //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .NicSwitchArray
                                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_ATTACH_PARAMETERS.$", 0xe0, true, 0xcdfebb9aaaad3f80 );                                   
        SDK_FIXED_SIZE( filter_attach_parameters_t, 0xe0 );                                   
    };                                                                                       
};
#include "magic/filter_attach_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::filter_attach_parameters_t, 0xe0 );
