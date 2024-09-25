#pragma once
#include <sdkgen/support_library.hpp>
#include "nic_switch_vport_parameters_t.hpp"

#include "magic/vport_block_t.start.hpp"
namespace ndis
{
    struct open_block_t;
    struct miniport_block_t;
    struct nic_switch_block_t;
    struct receive_scale_parameters_t;
    struct miniport_rss_parameters_cache_t;

    // [struct _NDIS_VPORT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vport_block_t                                                                
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                              
        _m00 nt::list_entry_t                              adapter_link;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AdapterLink
        _m01 nt::list_entry_t                              open_link;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OpenLink
        _m02 nt::list_entry_t                              switch_link;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SwitchLink
        _m03 nt::list_entry_t                              function_link;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FunctionLink
        _m04 uint32_t                                      flags;                         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m05 struct ndis::miniport_block_t*                miniport;                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Miniport
        _m06 struct ndis::open_block_t*                    open;                          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Open
        _m07 struct ndis::nic_switch_block_t*              nic_switch;                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NicSwitch
        _m08 void*                                         attached_function;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .AttachedFunction
        _m09 int32_t                                       reference;                     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Reference
        _m10 struct ndis::nic_switch_vport_parameters_t    v_port_params;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .VPortParams
        _m11 uint32_t                                      num_filters;                   //{ +0x0360    +0x0360    +0x0360    +0x0360    } | .NumFilters
        _m12 nt::list_entry_t                              filter_list;                   //{ +0x0368    +0x0368    +0x0368    +0x0368    } | .FilterList
                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                              
        _m13 struct ndis::miniport_rss_parameters_cache_t* rss_parameters_buffer;         //{ +0x0378    +0x0378    +0x0378    } | .RssParametersBuffer
        _m14 struct ndis::receive_scale_parameters_t*      combined_ndis_rss_parameters;  //{ +0x0380    +0x0380    +0x0380    } | .CombinedNdisRSSParameters
                                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_VPORT_BLOCK.$", 0x388, true, 0x6a76093560e1979 );                             
        SDK_DYNAMIC_SIZE( vport_block_t );                                              
    };                                                                                  
};
#include "magic/vport_block_t.end.hpp"
