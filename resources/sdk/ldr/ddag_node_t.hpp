#pragma once
#include <sdkgen/support_library.hpp>
#include "ddag_state_t.hpp"
#include "../ldrp/cslist_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/ddag_node_t.start.hpp"
namespace ldr
{
    struct service_tag_record_t;

    // [struct _LDR_DDAG_NODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ddag_node_t                                                    
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                
        _m00 nt::list_entry_t                  modules;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Modules
        _m01 struct ldr::service_tag_record_t* service_tag_list;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ServiceTagList
        _m02 uint32_t                          load_count;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LoadCount
        _m03 uint32_t                          load_while_unloading_count;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .LoadWhileUnloadingCount
        _m04 uint32_t                          lowest_link;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .LowestLink
        _m05 struct ldrp::cslist_t             dependencies;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Dependencies
        _m06 struct ldrp::cslist_t             incoming_dependencies;       //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .IncomingDependencies
        _m07 enum ldr::ddag_state_t            state;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .State
        _m08 struct nt::single_list_entry_t    condense_link;               //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .CondenseLink
        _m09 uint32_t                          preorder_number;             //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .PreorderNumber
                                                                          
        // WDK 10                                                         
        //                                                                
        _m10 struct nt::single_list_entry_t    removal_link;                //{ +0x0028    } | .RemovalLink
                                                                          
        SDK_NONVOL_PROPERTIES( "_LDR_DDAG_NODE.$", 0x50, true, 0x64e10cf1b3d669f1 );                           
        SDK_FIXED_SIZE( ddag_node_t, 0x50 );                              
    };                                                                    
};
#include "magic/ddag_node_t.end.hpp"
SDK_VERIFY( struct ldr::ddag_node_t, 0x50 );
