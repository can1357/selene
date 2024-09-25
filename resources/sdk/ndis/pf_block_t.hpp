#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pf_block_t.start.hpp"
namespace ndis
{
    struct open_block_t;
    struct miniport_block_t;
    struct nic_switch_block_t;

    // [struct _NDIS_PF_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pf_block_t                                              
    {                                                              
        // Windows 10 v1607                                        
        //                                                         
        _m00 struct ndis::miniport_block_t*   miniport;              //{ +0x0000    } | .Miniport
        _m01 struct ndis::open_block_t*       open;                  //{ +0x0008    } | .Open
        _m02 struct ndis::nic_switch_block_t* nic_switch;            //{ +0x0010    } | .NicSwitch
        _m03 int32_t                          reference;             //{ +0x0018    } | .Reference
        _m04 uint32_t                         num_attached_v_ports;  //{ +0x001c    } | .NumAttachedVPorts
        _m05 nt::list_entry_t                 attached_v_port_list;  //{ +0x0020    } | .AttachedVPortList
                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_PF_BLOCK.$", 0x0, true, 0x4133769ec158772a );                     
        SDK_DYNAMIC_SIZE( pf_block_t );                            
    };                                                             
};
#include "magic/pf_block_t.end.hpp"
