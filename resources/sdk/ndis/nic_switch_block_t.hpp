#pragma once
#include <sdkgen/support_library.hpp>
#include "nic_switch_parameters_t.hpp"

#include "magic/nic_switch_block_t.start.hpp"
namespace ndis
{
    struct pf_block_t;
    struct open_block_t;
    struct miniport_block_t;

    // [struct _NDIS_NIC_SWITCH_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nic_switch_block_t                                                                 
    {                                                                                         
        // Windows 10 v1607                                                                   
        //                                                                                    
        _m00 nt::list_entry_t                     adapter_link;                                 //{ +0x0000    } | .AdapterLink
        _m01 struct ndis::miniport_block_t*       miniport;                                     //{ +0x0010    } | .Miniport
        _m02 struct ndis::open_block_t*           open;                                         //{ +0x0018    } | .Open
        _m03 int32_t                              reference;                                    //{ +0x0020    } | .Reference
        _m04 uint32_t                             switch_id;                                    //{ +0x0024    } | .SwitchId
        _m05 struct ndis::pf_block_t*             pf_block;                                     //{ +0x0028    } | .PFBlock
        _m06 uint32_t                             num_active_v_ports;                           //{ +0x0030    } | .NumActiveVPorts
        _m07 nt::list_entry_t                     v_port_list;                                  //{ +0x0038    } | .VPortList
        _m08 uint32_t                             num_allocated_v_fs;                           //{ +0x0048    } | .NumAllocatedVFs
        _m09 nt::list_entry_t                     vf_list;                                      //{ +0x0050    } | .VFList
        _m10 uint32_t                             non_default_queue_pairs_in_use;               //{ +0x0060    } | .NonDefaultQueuePairsInUse
        _m11 struct ndis::nic_switch_parameters_t switch_parameters;                            //{ +0x0064    } | .SwitchParameters
        _m12 uint32_t                             num_active_default_v_port_mac_addresses;      //{ +0x028c    } | .NumActiveDefaultVPortMacAddresses
        _m13 uint32_t                             num_active_non_default_v_port_mac_addresses;  //{ +0x0290    } | .NumActiveNonDefaultVPortMacAddresses
        _m14 uint32_t                             num_active_default_v_port_vlan_ids;           //{ +0x0294    } | .NumActiveDefaultVPortVlanIds
        _m15 uint32_t                             num_active_non_default_v_port_vlan_ids;       //{ +0x0298    } | .NumActiveNonDefaultVPortVlanIds
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_NIC_SWITCH_BLOCK.$", 0x0, true, 0x614f8764d860e13 );                                            
        SDK_DYNAMIC_SIZE( nic_switch_block_t );                                               
    };                                                                                        
};
#include "magic/nic_switch_block_t.end.hpp"
