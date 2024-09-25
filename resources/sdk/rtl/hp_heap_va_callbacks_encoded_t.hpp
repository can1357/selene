#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hp_heap_va_callbacks_encoded_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED]
    // => Windows 11
    //
    struct hp_heap_va_callbacks_encoded_t             
    {                                                 
        // Windows 11                                 
        //                                            
        _m00 uint64_t callback_context;                 //{ +0x0000    } | .CallbackContext
        _m01 uint64_t allocate_virtual_memory_encoded;  //{ +0x0008    } | .AllocateVirtualMemoryEncoded
        _m02 uint64_t free_virtual_memory_encoded;      //{ +0x0010    } | .FreeVirtualMemoryEncoded
        _m03 uint64_t query_virtual_memory_encoded;     //{ +0x0018    } | .QueryVirtualMemoryEncoded
                                                      
        SDK_MAGIC_PROPERTIES( "_RTL_HP_HEAP_VA_CALLBACKS_ENCODED.$", 0x0, false, 0xa9fca2e0005e19ae );                                
        SDK_FIXED_SIZE( hp_heap_va_callbacks_encoded_t, 0x20 );                                
    };                                                
};
#include "magic/hp_heap_va_callbacks_encoded_t.end.hpp"
SDK_VERIFY( struct rtl::hp_heap_va_callbacks_encoded_t, 0x20 );
