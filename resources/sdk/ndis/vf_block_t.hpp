#pragma once
#include <sdkgen/support_library.hpp>
#include "nic_switch_vf_parameters_t.hpp"

#include "magic/vf_block_t.start.hpp"
namespace ndis
{
    struct open_block_t;
    struct miniport_block_t;
    struct nic_switch_block_t;

    // [struct _NDIS_VF_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vf_block_t                                                     
    {                                                                     
        // Windows 10 v1607                                               
        //                                                                
        _m00 nt::list_entry_t                        adapter_link;          //{ +0x0000    } | .AdapterLink
        _m01 nt::list_entry_t                        open_link;             //{ +0x0010    } | .OpenLink
        _m02 nt::list_entry_t                        switch_link;           //{ +0x0020    } | .SwitchLink
        _m03 struct ndis::miniport_block_t*          miniport;              //{ +0x0030    } | .Miniport
        _m04 struct ndis::open_block_t*              open;                  //{ +0x0038    } | .Open
        _m05 struct ndis::nic_switch_block_t*        nic_switch;            //{ +0x0040    } | .NicSwitch
        _m06 int32_t                                 reference;             //{ +0x0048    } | .Reference
        _m07 uint32_t                                num_attached_v_ports;  //{ +0x004c    } | .NumAttachedVPorts
        _m08 nt::list_entry_t                        attached_v_port_list;  //{ +0x0050    } | .AttachedVPortList
        _m09 struct ndis::nic_switch_vf_parameters_t vf_parameters;         //{ +0x0060    } | .VFParameters
                                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_VF_BLOCK.$", 0x0, true, 0xf2c225628b479909 );                     
        SDK_DYNAMIC_SIZE( vf_block_t );                                   
    };                                                                    
};
#include "magic/vf_block_t.end.hpp"
