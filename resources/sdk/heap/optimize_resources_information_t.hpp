#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/optimize_resources_information_t.start.hpp"
namespace heap
{
    // [struct _HEAP_OPTIMIZE_RESOURCES_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct optimize_resources_information_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t flags;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                           
        SDK_MAGIC_PROPERTIES( "_HEAP_OPTIMIZE_RESOURCES_INFORMATION.$", 0x8, true, 0x89688d8c700a9715 );        
        SDK_FIXED_SIZE( optimize_resources_information_t, 0x8 );        
    };                                     
};
#include "magic/optimize_resources_information_t.end.hpp"
SDK_VERIFY( struct heap::optimize_resources_information_t, 0x8 );
