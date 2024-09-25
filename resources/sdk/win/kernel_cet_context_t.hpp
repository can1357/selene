#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kernel_cet_context_t.start.hpp"
namespace win
{
    // [struct _KERNEL_CET_CONTEXT]
    // => Windows 11
    //
    struct kernel_cet_context_t            
    {                                      
        // Windows 11                      
        //                                 
        _m00 uint64_t ssp;                   //{ +0x0000    } | .Ssp
        _m01 uint64_t rip;                   //{ +0x0008    } | .Rip
        _m02 uint16_t seg_cs;                //{ +0x0010    } | .SegCs
        _m03 uint16_t all_flags;             //{ +0x0012    } | .AllFlags
        _m04 uint1_t  use_wrss;              //{ +0x0012@0  } | .UseWrss
        _m05 uint1_t  pop_shadow_stack_one;  //{ +0x0012@1  } | .PopShadowStackOne
                                           
        SDK_MAGIC_PROPERTIES( "_KERNEL_CET_CONTEXT.$", 0x0, false, 0x25db48377cc4a60f );                     
        SDK_FIXED_SIZE( kernel_cet_context_t, 0x18 );                     
    };                                     
};
#include "magic/kernel_cet_context_t.end.hpp"
SDK_VERIFY( struct win::kernel_cet_context_t, 0x18 );
