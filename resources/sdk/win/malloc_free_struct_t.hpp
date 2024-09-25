#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/malloc_free_struct_t.start.hpp"
namespace win
{
    // [struct _MALLOC_FREE_STRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct malloc_free_struct_t                           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                
        _m00 sdk::function<void*(uint64_t)>* pfn_allocate;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnAllocate
        _m01 sdk::function<void(void*)>*     pfn_free;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnFree
                                                          
        SDK_MAGIC_PROPERTIES( "_MALLOC_FREE_STRUCT.$", 0x10, true, 0x355ca3a9e318373a );             
        SDK_FIXED_SIZE( malloc_free_struct_t, 0x10 );             
    };                                                    
};
#include "magic/malloc_free_struct_t.end.hpp"
SDK_VERIFY( struct win::malloc_free_struct_t, 0x10 );
