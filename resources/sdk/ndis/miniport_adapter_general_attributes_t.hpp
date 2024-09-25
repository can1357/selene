#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "object_header_t.hpp"
#include "physical_medium_t.hpp"
#include "net_if_access_type_t.hpp"
#include "net_if_direction_type_t.hpp"
#include "net_if_connection_type_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "net_if_media_connect_state_t.hpp"

#include "magic/miniport_adapter_general_attributes_t.start.hpp"
namespace ndis
{
    struct pm_capabilities_t;
    struct pnp_capabilities_t;
    struct receive_scale_capabilities_t;

    // [struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_adapter_general_attributes_t                                          
    {                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                                
        _m000 struct ndis::object_header_t               header;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint32_t                                   flags;                             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m002 enum ndis::medium_t                        media_type;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MediaType
        _m003 enum ndis::physical_medium_t               physical_medium_type;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PhysicalMediumType
        _m004 uint32_t                                   mtu_size;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MtuSize
        _m005 uint64_t                                   max_xmit_link_speed;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxXmitLinkSpeed
        _m006 uint64_t                                   xmit_link_speed;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .XmitLinkSpeed
        _m007 uint64_t                                   max_rcv_link_speed;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxRcvLinkSpeed
        _m008 uint64_t                                   rcv_link_speed;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RcvLinkSpeed
        _m009 enum ndis::net_if_media_connect_state_t    media_connect_state;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MediaConnectState
        _m010 enum ndis::net_if_media_duplex_state_t     media_duplex_state;                //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .MediaDuplexState
        _m011 uint32_t                                   lookahead_size;                    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .LookaheadSize
        _m012 struct ndis::pnp_capabilities_t*           power_management_capabilities;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PowerManagementCapabilities
        _m013 uint32_t                                   mac_options;                       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MacOptions
        _m014 uint32_t                                   supported_packet_filters;          //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .SupportedPacketFilters
        _m015 uint32_t                                   max_multicast_list_size;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .MaxMulticastListSize
        _m016 uint16_t                                   mac_address_length;                //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .MacAddressLength
        _m017 sdk::array<uint8_t, 32>                    permanent_mac_address;             //{ +0x005e    +0x005e    +0x005e    +0x005e    } | .PermanentMacAddress
        _m018 sdk::array<uint8_t, 32>                    current_mac_address;               //{ +0x007e    +0x007e    +0x007e    +0x007e    } | .CurrentMacAddress
        _m019 struct ndis::receive_scale_capabilities_t* recv_scale_capabilities;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .RecvScaleCapabilities
        _m020 enum ndis::net_if_access_type_t            access_type;                       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .AccessType
        _m021 enum ndis::net_if_direction_type_t         direction_type;                    //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .DirectionType
        _m022 enum ndis::net_if_connection_type_t        connection_type;                   //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .ConnectionType
        _m023 uint16_t                                   if_type;                           //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .IfType
        _m024 uint8_t                                    if_connector_present;              //{ +0x00b6    +0x00b6    +0x00b6    +0x00b6    } | .IfConnectorPresent
        _m025 uint32_t                                   supported_statistics;              //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .SupportedStatistics
        _m026 uint32_t                                   supported_pause_functions;         //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .SupportedPauseFunctions
        _m027 uint32_t                                   data_back_fill_size;               //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .DataBackFillSize
        _m028 uint32_t                                   context_back_fill_size;            //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .ContextBackFillSize
        _m029 uint32_t*                                  supported_oid_list;                //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .SupportedOidList
        _m030 uint32_t                                   supported_oid_list_length;         //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .SupportedOidListLength
        _m031 uint32_t                                   auto_negotiation_flags;            //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .AutoNegotiationFlags
        _m032 struct ndis::pm_capabilities_t*            power_management_capabilities_ex;  //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .PowerManagementCapabilitiesEx
                                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.$", 0xe0, true, 0xbeca1cf20c8a179 );                                 
        SDK_FIXED_SIZE( miniport_adapter_general_attributes_t, 0xe0 );                                 
    };                                                                                    
};
#include "magic/miniport_adapter_general_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_adapter_general_attributes_t, 0xe0 );
