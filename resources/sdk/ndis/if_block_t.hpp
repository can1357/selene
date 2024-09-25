#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "../nt/guid_t.hpp"
#include "net_luid_lh_t.hpp"
#include "miniport_event_t.hpp"
#include "if_block_source_t.hpp"
#include "physical_medium_t.hpp"
#include "net_if_access_type_t.hpp"
#include "net_if_oper_status_t.hpp"
#include "net_if_admin_status_t.hpp"
#include "if_counted_string_lh_t.hpp"
#include "net_if_direction_type_t.hpp"
#include "nsi_interface_purpose_t.hpp"
#include "if_physical_address_lh_t.hpp"
#include "net_if_connection_type_t.hpp"
#include "net_physical_location_lh_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "net_if_media_connect_state_t.hpp"

namespace nt { struct kevent_t; }

#include "magic/if_block_t.start.hpp"
namespace ndis
{
    struct filter_block_t;
    struct if_rcv_address_t;
    struct miniport_block_t;
    struct pcw_data_block_t;
    struct refcount_handle_t;
    struct if_network_block_t;
    struct if_provider_block_t;
    struct if_compartment_block_t;

    // [struct _NDIS_IF_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_block_t                                                                      
    {                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                 
        _m000 uint8_t                                 type;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m001 uint8_t                                 revision;                              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Revision
        _m002 uint16_t                                size;                                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m003 uint32_t                                if_index;                              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ifIndex
        _m004 struct ndis::if_counted_string_lh_t     if_descr;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ifDescr
        _m005 uint16_t                                if_type;                               //{ +0x020c    +0x020c    +0x020c    +0x020c    } | .ifType
        _m006 enum ndis::net_if_access_type_t         access_type;                           //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .AccessType
        _m007 enum ndis::net_if_direction_type_t      direction_type;                        //{ +0x0214    +0x0214    +0x0214    +0x0214    } | .DirectionType
        _m008 enum ndis::net_if_connection_type_t     connection_type;                       //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .ConnectionType
        _m009 struct nt::guid_t                       interface_guid;                        //{ +0x021c    +0x021c    +0x021c    +0x021c    } | .InterfaceGuid
        _m010 uint8_t                                 if_connector_present;                  //{ +0x022c    +0x022c    +0x022c    +0x022c    } | .ifConnectorPresent
        _m011 uint32_t                                if_flags;                              //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .ifFlags
        _m012 enum ndis::medium_t                     media_type;                            //{ +0x0234    +0x0234    +0x0234    +0x0234    } | .MediaType
        _m013 enum ndis::physical_medium_t            physical_medium_type;                  //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .PhysicalMediumType
        _m014 uint32_t                                compartment_id;                        //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .CompartmentId
        _m015 struct nt::guid_t                       network_guid;                          //{ +0x0244    +0x0244    +0x0244    +0x0244    } | .NetworkGuid
        _m016 struct ndis::if_counted_string_lh_t     if_alias;                              //{ +0x0254    +0x0254    +0x0254    +0x0254    } | .ifAlias
        _m017 enum ndis::net_if_oper_status_t         if_oper_status;                        //{ +0x0458    +0x0458    +0x0458    +0x0458    } | .ifOperStatus
        _m018 uint32_t                                if_oper_status_flags;                  //{ +0x045c    +0x045c    +0x045c    +0x045c    } | .ifOperStatusFlags
        _m019 uint32_t                                if_mtu;                                //{ +0x0460    +0x0460    +0x0460    +0x0460    } | .ifMtu
        _m020 struct ndis::if_physical_address_lh_t   if_phys_address;                       //{ +0x0464    +0x0464    +0x0464    +0x0464    } | .ifPhysAddress
        _m021 struct ndis::if_physical_address_lh_t   permanent_phys_address;                //{ +0x0486    +0x0486    +0x0486    +0x0486    } | .PermanentPhysAddress
        _m022 enum ndis::net_if_admin_status_t        if_admin_status;                       //{ +0x04a8    +0x04a8    +0x04a8    +0x04a8    } | .ifAdminStatus
        _m023 uint64_t                                xmit_link_speed;                       //{ +0x04b0    +0x04b0    +0x04b0    +0x04b0    } | .XmitLinkSpeed
        _m024 uint64_t                                rcv_link_speed;                        //{ +0x04b8    +0x04b8    +0x04b8    +0x04b8    } | .RcvLinkSpeed
        _m025 uint8_t                                 if_promiscuous_mode;                   //{ +0x04c0    +0x04c0    +0x04c0    +0x04c0    } | .ifPromiscuousMode
        _m026 uint8_t                                 if_device_wake_up_enable;              //{ +0x04c1    +0x04c1    +0x04c1    +0x04c1    } | .ifDeviceWakeUpEnable
        _m027 enum ndis::net_if_media_connect_state_t media_connect_state;                   //{ +0x04c4    +0x04c4    +0x04c4    +0x04c4    } | .MediaConnectState
        _m028 enum ndis::net_if_media_duplex_state_t  media_duplex_state;                    //{ +0x04c8    +0x04c8    +0x04c8    +0x04c8    } | .MediaDuplexState
        _m029 nt::list_entry_t                        link;                                  //{ +0x04d0    +0x04d0    +0x04d0    +0x04d0    } | .Link
        _m030 nt::list_entry_t                        provider_link;                         //{ +0x04e0    +0x04e0    +0x04e0    +0x04e0    } | .ProviderLink
        _m031 nt::list_entry_t                        network_link;                          //{ +0x04f0    +0x04f0    +0x04f0    +0x04f0    } | .NetworkLink
        _m032 struct ndis::if_rcv_address_t*          if_rcv_address_table;                  //{ +0x0500    +0x0500    +0x0500    +0x0500    } | .ifRcvAddressTable
        _m033 uint32_t                                if_rcv_address_count;                  //{ +0x0508    +0x0508    +0x0508    +0x0508    } | .ifRcvAddressCount
        _m034 uint32_t                                if_max_rcv_address_count;              //{ +0x050c    +0x050c    +0x050c    +0x050c    } | .ifMaxRcvAddressCount
        _m035 uint32_t                                lower_layer_if_count;                  //{ +0x0510    +0x0510    +0x0510    +0x0510    } | .LowerLayerIfCount
        _m036 uint32_t                                higher_layer_if_count;                 //{ +0x0514    +0x0514    +0x0514    +0x0514    } | .HigherLayerIfCount
        _m037 int32_t                                 ref;                                   //{ +0x0518    +0x0518    +0x0518    +0x0518    } | .Ref
        _m038 union ndis::net_luid_lh_t               net_luid;                              //{ +0x0520    +0x0520    +0x0520    +0x0520    } | .NetLuid
        _m039 void*                                   provider_if_context;                   //{ +0x0528    +0x0528    +0x0528    +0x0528    } | .ProviderIfContext
        _m040 struct ndis::if_provider_block_t*       provider_handle;                       //{ +0x0530    +0x0530    +0x0530    +0x0530    } | .ProviderHandle
        _m041 uint32_t                                flags;                                 //{ +0x0538    +0x0538    +0x0538    +0x0538    } | .Flags
        _m042 uint32_t                                wan_tunnel_type;                       //{ +0x0548    +0x053c    +0x053c    +0x053c    } | .WanTunnelType
        _m043 uint32_t                                port_number;                           //{ +0x054c    +0x0540    +0x0540    +0x0540    } | .PortNumber
        _m044 uint64_t                                if_last_change;                        //{ +0x0550    +0x0548    +0x0548    +0x0548    } | .ifLastChange
        _m045 uint64_t                                if_counter_discontinuity_time;         //{ +0x0558    +0x0550    +0x0550    +0x0550    } | .ifCounterDiscontinuityTime
        _m046 struct ndis::if_network_block_t*        network;                               //{ +0x0560    +0x0558    +0x0558    +0x0558    } | .Network
        _m047 struct ndis::if_compartment_block_t*    compartment;                           //{ +0x0568    +0x0560    +0x0560    +0x0560    } | .Compartment
        _m048 struct nt::kevent_t*                    async_event;                           //{ +0x0570    +0x0568    +0x0568    +0x0568    } | .AsyncEvent
        _m049 uint8_t                                 already_deregistered;                  //{ +0x0578    +0x0570    +0x0570    +0x0570    } | .AlreadyDeregistered
        _m050 uint8_t                                 b_ndis_is_provider;                    //{ +0x0579    +0x0571    +0x0571    +0x0571    } | .bNdisIsProvider
        _m051 uint8_t                                 is_ndis_filter;                        //{ +0x057a    +0x0572    +0x0572    +0x0572    } | .IsNdisFilter
        _m052 uint8_t                                 miniport_available;                    //{ +0x057b    +0x0573    +0x0573    +0x0573    } | .MiniportAvailable
        _m053 uint32_t                                miniport_link_reference;               //{ +0x057c    +0x0574    +0x0574    +0x0574    } | .MiniportLinkReference
        _m054 enum ndis::if_block_source_t            source;                                //{ +0x0580    +0x0578    +0x0578    +0x0578    } | .Source
        _m055 struct ndis::miniport_block_t*          miniport;                              //{ +0x0588    +0x0580    +0x0580    +0x0580    } | .Miniport
        _m056 struct ndis::filter_block_t*            filter;                                //{ +0x0588    +0x0580    +0x0580    +0x0580    } | .Filter
        _m057 uint32_t                                supported_statistics;                  //{ +0x0590    +0x0588    +0x0588    +0x0588    } | .SupportedStatistics
        _m058 struct ndis::if_counted_string_lh_t*    if_l2_network_info;                    //{ +0x0598    +0x0590    +0x0590    +0x0590    } | .ifL2NetworkInfo
        _m059 struct ndis::refcount_handle_t*         ref_count_tracker;                     //{ +0x05a0    +0x0598    +0x0598    +0x0598    } | .RefCountTracker
        _m060 struct ndis::refcount_handle_t*         mp_ref_count_tracker;                  //{ +0x05a8    +0x05a0    +0x05a0    +0x05a0    } | .MpRefCountTracker
        _m061 uint32_t                                interlocked_flags;                     //{ +0x05b0    +0x05a8    +0x05a8    +0x05a8    } | .InterlockedFlags
        _m062 enum ndis::miniport_event_t             last_miniport_fatal_error_reason;      //{ +0x05b4    +0x05ac    +0x05ac    +0x05ac    } | .LastMiniportFatalErrorReason
        _m063 sdk::array<uint64_t, 3>                 miniport_fatal_error_timestamp;        //{ +0x05b8    +0x05b0    +0x05b0    +0x05b0    } | .MiniportFatalErrorTimestamp
        _m064 uint8_t                                 miniport_fatal_error_timestamp_index;  //{ +0x05d0    +0x05c8    +0x05c8    +0x05c8    } | .MiniportFatalErrorTimestampIndex
        _m065 uint8_t                                 network_id_overridden;                 //{ +0x05d1    +0x05c9    +0x05c9    +0x05c9    } | .NetworkIdOverridden
        _m066 struct ndis::pcw_data_block_t*          pcw_data_block;                        //{ +0x05d8    +0x05d0    +0x05d0    +0x05d0    } | .PcwDataBlock
                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                 
        _m067 uint8_t                                 if_hide_interface_in_ui;               //{ +0x04c2    +0x04c2    +0x04c2    } | .ifHideInterfaceInUi
        _m068 uint8_t                                 is_wdf_miniport_interface;             //{ +0x05ca    +0x05ca    +0x05ca    } | .IsWDFMiniportInterface
        _m069 enum ndis::nsi_interface_purpose_t      if_purpose;                            //{ +0x05cc    +0x05cc    +0x05cc    } | .ifPurpose
                                                                                           
        // Windows 10 v1607                                                                
        //                                                                                 
        _m070 struct ndis::net_physical_location_lh_t physical_location;                     //{ +0x053c    } | .PhysicalLocation
                                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_IF_BLOCK.$", 0x5d8, true, 0x4c138d1ea8a655f );                                     
        SDK_DYNAMIC_SIZE( if_block_t );                                                    
    };                                                                                     
};
#include "magic/if_block_t.end.hpp"
