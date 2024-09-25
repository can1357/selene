#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/if_stack_entry_t.start.hpp"
namespace ndis
{
    struct if_block_t;

    // [struct _NDIS_IF_STACK_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_stack_entry_t                                 
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 nt::list_entry_t         link;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 uint32_t                 higher_layer_if_index;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HigherLayerIfIndex
        _m02 uint32_t                 lower_layer_if_index;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LowerLayerIfIndex
        _m03 struct ndis::if_block_t* higher_layer_if;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HigherLayerIf
        _m04 struct ndis::if_block_t* lower_layer_if;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .LowerLayerIf
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_IF_STACK_ENTRY.$", 0x28, true, 0x290c1bab10438bb9 );                      
        SDK_FIXED_SIZE( if_stack_entry_t, 0x28 );                      
    };                                                      
};
#include "magic/if_stack_entry_t.end.hpp"
SDK_VERIFY( struct ndis::if_stack_entry_t, 0x28 );
