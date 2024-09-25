#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/interrupt_line_internal_state_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_LINE_INTERNAL_STATE]
    // => Windows 11
    //
    struct interrupt_line_internal_state_t  
    {                                       
        // Windows 11                       
        //                                  
        _m00 uint8_t  fixed;                  //{ +0x0000    } | .Fixed
        _m01 uint8_t  irql;                   //{ +0x0001    } | .Irql
        _m02 uint8_t  swapping;               //{ +0x0002    } | .Swapping
        _m03 uint32_t old_cluster_id;         //{ +0x0004    } | .OldClusterId
        _m04 uint32_t old_cluster_mask;       //{ +0x0008    } | .OldClusterMask
        _m05 uint8_t  line_state_determined;  //{ +0x000c    } | .LineStateDetermined
                                            
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_LINE_INTERNAL_STATE.$", 0x0, false, 0x7fa51088fb3772ee );                      
        SDK_FIXED_SIZE( interrupt_line_internal_state_t, 0x10 );                      
    };                                      
};
#include "magic/interrupt_line_internal_state_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_line_internal_state_t, 0x10 );
