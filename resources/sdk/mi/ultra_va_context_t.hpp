#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_ex_t.hpp"

#include "magic/ultra_va_context_t.start.hpp"
namespace mi
{
    // [struct _MI_ULTRA_VA_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ultra_va_context_t                                           
    {                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                              
        _m00 uint64_t                               lock;                 //{ +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 void*                                  zero_mapping;         //{ +0x0008    +0x0008    +0x0008    } | .ZeroMapping
        _m02 uint64_t                               allocation_hint_bit;  //{ +0x0010    +0x0010    +0x0010    } | .AllocationHintBit
        _m03 sdk::array<struct rtl::bitmap_ex_t, 2> bitmap;               //{ +0x0018    +0x0018    +0x0018    } | .Bitmap
        _m04 volatile int32_t                       concurrency_maximum;  //{ +0x0038    +0x0038    +0x0038    } | .ConcurrencyMaximum
        _m05 volatile int32_t                       concurrency_count;    //{ +0x003c    +0x003c    +0x003c    } | .ConcurrencyCount
                                                                        
        SDK_MAGIC_PROPERTIES( "_MI_ULTRA_VA_CONTEXT.$", 0x40, true, 0x66f69a27936063f7 );                    
        SDK_FIXED_SIZE( ultra_va_context_t, 0x40 );                     
    };                                                                  
};
#include "magic/ultra_va_context_t.end.hpp"
SDK_VERIFY( struct mi::ultra_va_context_t, 0x40 );
