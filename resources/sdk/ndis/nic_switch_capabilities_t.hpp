#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/nic_switch_capabilities_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NIC_SWITCH_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nic_switch_capabilities_t                                                                    
    {                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                             
        //                                                                                              
        _m000 struct ndis::object_header_t header;                                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint32_t                     flags;                                                         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m002 uint32_t                     ndis_reserved1;                                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdisReserved1
        _m003 uint32_t                     num_total_mac_addresses;                                       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumTotalMacAddresses
        _m004 uint32_t                     num_mac_addresses_per_port;                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumMacAddressesPerPort
        _m005 uint32_t                     num_vlans_per_port;                                            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumVlansPerPort
        _m006 uint32_t                     ndis_reserved2;                                                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NdisReserved2
        _m007 uint32_t                     ndis_reserved3;                                                //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .NdisReserved3
        _m008 uint32_t                     nic_switch_capabilities;                                       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NicSwitchCapabilities
        _m009 uint32_t                     max_num_switches;                                              //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .MaxNumSwitches
        _m010 uint32_t                     max_num_v_ports;                                               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MaxNumVPorts
        _m011 uint32_t                     ndis_reserved4;                                                //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .NdisReserved4
        _m012 uint32_t                     max_num_v_fs;                                                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MaxNumVFs
        _m013 uint32_t                     max_num_queue_pairs;                                           //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .MaxNumQueuePairs
        _m014 uint32_t                     ndis_reserved5;                                                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NdisReserved5
        _m015 uint32_t                     ndis_reserved6;                                                //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .NdisReserved6
        _m016 uint32_t                     ndis_reserved7;                                                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NdisReserved7
        _m017 uint32_t                     max_num_queue_pairs_per_non_default_v_port;                    //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .MaxNumQueuePairsPerNonDefaultVPort
        _m018 uint32_t                     ndis_reserved8;                                                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NdisReserved8
        _m019 uint32_t                     ndis_reserved9;                                                //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .NdisReserved9
        _m020 uint32_t                     ndis_reserved10;                                               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .NdisReserved10
        _m021 uint32_t                     ndis_reserved11;                                               //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .NdisReserved11
        _m022 uint32_t                     ndis_reserved12;                                               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NdisReserved12
        _m023 uint32_t                     max_num_mac_addresses;                                         //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .MaxNumMacAddresses
        _m024 uint32_t                     ndis_reserved13;                                               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .NdisReserved13
        _m025 uint32_t                     ndis_reserved14;                                               //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .NdisReserved14
        _m026 uint32_t                     ndis_reserved15;                                               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NdisReserved15
        _m027 uint32_t                     ndis_reserved16;                                               //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .NdisReserved16
        _m028 uint32_t                     ndis_reserved17;                                               //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .NdisReserved17
        _m029 uint32_t                     max_num_rss_capable_non_default_pfv_ports;                     //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .MaxNumRssCapableNonDefaultPFVPorts
        _m030 uint32_t                     number_of_indirection_table_entries_for_default_v_port;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .NumberOfIndirectionTableEntriesForDefaultVPort
        _m031 uint32_t                     number_of_indirection_table_entries_per_non_default_pfv_port;  //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .NumberOfIndirectionTableEntriesPerNonDefaultPFVPort
        _m032 uint32_t                     max_num_queue_pairs_for_default_v_port;                        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .MaxNumQueuePairsForDefaultVPort
                                                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_NIC_SWITCH_CAPABILITIES.$", 0x84, true, 0xa9b3b8ddb4a568e5 );                                                             
        SDK_FIXED_SIZE( nic_switch_capabilities_t, 0x84 );                                                             
    };                                                                                                  
};
#include "magic/nic_switch_capabilities_t.end.hpp"
SDK_VERIFY( struct ndis::nic_switch_capabilities_t, 0x84 );
