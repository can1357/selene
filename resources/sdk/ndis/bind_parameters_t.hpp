#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "net_luid_lh_t.hpp"
#include "object_header_t.hpp"
#include "physical_medium_t.hpp"
#include "net_if_access_type_t.hpp"
#include "net_if_direction_type_t.hpp"
#include "net_if_connection_type_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "net_if_media_connect_state_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/bind_parameters_t.start.hpp"
namespace ndis
{
    struct port_t;
    struct offload_t;
    struct pm_capabilities_t;
    struct ndk_capabilities_t;
    struct pnp_capabilities_t;
    struct sriov_capabilities_t;
    struct nic_switch_info_array_t;
    struct tcp_connection_offload_t;
    struct hd_split_current_config_t;
    struct nic_switch_capabilities_t;
    struct receive_scale_capabilities_t;
    struct receive_filter_capabilities_t;

    // [struct _NDIS_BIND_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bind_parameters_t                                                                  
    {                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                    
        _m000 struct ndis::object_header_t                header;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 nt::unicode_view*                           protocol_section;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProtocolSection
        _m002 nt::unicode_view*                           adapter_name;                         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AdapterName
        _m003 struct nt::device_object_t*                 physical_device_object;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PhysicalDeviceObject
        _m004 enum ndis::medium_t                         media_type;                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MediaType
        _m005 uint32_t                                    mtu_size;                             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MtuSize
        _m006 uint64_t                                    max_xmit_link_speed;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxXmitLinkSpeed
        _m007 uint64_t                                    xmit_link_speed;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .XmitLinkSpeed
        _m008 uint64_t                                    max_rcv_link_speed;                   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MaxRcvLinkSpeed
        _m009 uint64_t                                    rcv_link_speed;                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .RcvLinkSpeed
        _m010 enum ndis::net_if_media_connect_state_t     media_connect_state;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MediaConnectState
        _m011 enum ndis::net_if_media_duplex_state_t      media_duplex_state;                   //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .MediaDuplexState
        _m012 uint32_t                                    lookahead_size;                       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .LookaheadSize
        _m013 struct ndis::pnp_capabilities_t*            power_management_capabilities;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .PowerManagementCapabilities
        _m014 uint32_t                                    supported_packet_filters;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SupportedPacketFilters
        _m015 uint32_t                                    max_multicast_list_size;              //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .MaxMulticastListSize
        _m016 uint16_t                                    mac_address_length;                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .MacAddressLength
        _m017 sdk::array<uint8_t, 32>                     current_mac_address;                  //{ +0x006a    +0x006a    +0x006a    +0x006a    } | .CurrentMacAddress
        _m018 enum ndis::physical_medium_t                physical_medium_type;                 //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .PhysicalMediumType
        _m019 struct ndis::receive_scale_capabilities_t*  rcv_scale_capabilities;               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .RcvScaleCapabilities
        _m020 union ndis::net_luid_lh_t                   bound_if_netluid;                     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .BoundIfNetluid
        _m021 uint32_t                                    bound_if_index;                       //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .BoundIfIndex
        _m022 union ndis::net_luid_lh_t                   lowest_if_netluid;                    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .LowestIfNetluid
        _m023 uint32_t                                    lowest_if_index;                      //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .LowestIfIndex
        _m024 enum ndis::net_if_access_type_t             access_type;                          //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .AccessType
        _m025 enum ndis::net_if_direction_type_t          direction_type;                       //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .DirectionType
        _m026 enum ndis::net_if_connection_type_t         connection_type;                      //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .ConnectionType
        _m027 uint16_t                                    if_type;                              //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .IfType
        _m028 uint8_t                                     if_connector_present;                 //{ +0x00c2    +0x00c2    +0x00c2    +0x00c2    } | .IfConnectorPresent
        _m029 struct ndis::port_t*                        active_ports;                         //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .ActivePorts
        _m030 uint32_t                                    data_back_fill_size;                  //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .DataBackFillSize
        _m031 uint32_t                                    context_back_fill_size;               //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .ContextBackFillSize
        _m032 uint32_t                                    mac_options;                          //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .MacOptions
        _m033 uint32_t                                    compartment_id;                       //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .CompartmentId
        _m034 struct ndis::offload_t*                     default_offload_configuration;        //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .DefaultOffloadConfiguration
        _m035 struct ndis::tcp_connection_offload_t*      tcp_connection_offload_capabilities;  //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .TcpConnectionOffloadCapabilities
        _m036 nt::unicode_view*                           bound_adapter_name;                   //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .BoundAdapterName
        _m037 struct ndis::hd_split_current_config_t*     hd_split_current_config;              //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .HDSplitCurrentConfig
        _m038 struct ndis::receive_filter_capabilities_t* receive_filter_capabilities;          //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .ReceiveFilterCapabilities
        _m039 struct ndis::pm_capabilities_t*             power_management_capabilities_ex;     //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .PowerManagementCapabilitiesEx
        _m040 struct ndis::nic_switch_capabilities_t*     nic_switch_capabilities;              //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .NicSwitchCapabilities
        _m041 uint8_t                                     ndk_enabled;                          //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .NDKEnabled
        _m042 struct ndis::ndk_capabilities_t*            ndk_capabilities;                     //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .NDKCapabilities
        _m043 struct ndis::sriov_capabilities_t*          sriov_capabilities;                   //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .SriovCapabilities
        _m044 struct ndis::nic_switch_info_array_t*       nic_switch_array;                     //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .NicSwitchArray
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_BIND_PARAMETERS.$", 0x138, true, 0x4fe253a2957fbe14 );                                    
        SDK_FIXED_SIZE( bind_parameters_t, 0x138 );                                           
    };                                                                                        
};
#include "magic/bind_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::bind_parameters_t, 0x138 );
