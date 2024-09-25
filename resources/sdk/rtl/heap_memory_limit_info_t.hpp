#pragma once
#include <sdkgen/support_library.hpp>
#include "heap_memory_limit_data_t.hpp"

#include "magic/heap_memory_limit_info_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HEAP_MEMORY_LIMIT_INFO]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct heap_memory_limit_info_t                       
    {                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                
        _m00 uint32_t                             version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct rtl::heap_memory_limit_data_t data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                                          
        SDK_NONVOL_PROPERTIES( "_RTL_HEAP_MEMORY_LIMIT_INFO.$", 0x28, true, 0x65a82fa8b349a44e );        
        SDK_FIXED_SIZE( heap_memory_limit_info_t, 0x28 );        
    };                                                    
};
#include "magic/heap_memory_limit_info_t.end.hpp"
SDK_VERIFY( struct rtl::heap_memory_limit_info_t, 0x28 );
