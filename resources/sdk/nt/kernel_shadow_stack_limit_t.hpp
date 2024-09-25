#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kernel_shadow_stack_limit_t.start.hpp"
namespace nt
{
    // [union _KERNEL_SHADOW_STACK_LIMIT]
    // => Windows 11
    //
    union kernel_shadow_stack_limit_t        
    {                                        
        // Windows 11                        
        //                                   
        _m00 uint64_t all_fields;              //{ +0x0000    } | .AllFields
        _m01 uint3_t  shadow_stack_type;       //{ +0x0000@0  } | .ShadowStackType
        _m02 uint52_t shadow_stack_limit_pfn;  //{ +0x0000@12 } | .ShadowStackLimitPfn
                                             
        SDK_MAGIC_PROPERTIES( "_KERNEL_SHADOW_STACK_LIMIT.$", 0x0, false, 0x9d38c8ac6e7f31e9 );                       
        SDK_FIXED_SIZE( kernel_shadow_stack_limit_t, 0x8 );                       
    };                                       
};
#include "magic/kernel_shadow_stack_limit_t.end.hpp"
SDK_VERIFY( union nt::kernel_shadow_stack_limit_t, 0x8 );
