#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_virtual_alloc_xpartition_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_VIRTUAL_ALLOC_XPARTITION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_virtual_alloc_xpartition_t
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 void*    captured_base;            //{ +0x0000    +0x0000    +0x0000    } | .CapturedBase
        _m01 uint16_t target_partition;         //{ +0x0008    +0x0008    +0x0008    } | .TargetPartition
                                              
        SDK_MAGIC_PROPERTIES( "_PERFINFO_VIRTUAL_ALLOC_XPARTITION.$", 0x10, true, 0x705d7eb827673c38 );                 
        SDK_FIXED_SIZE( perfinfo_virtual_alloc_xpartition_t, 0x10 );                 
    };                                        
};
#include "magic/perfinfo_virtual_alloc_xpartition_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_virtual_alloc_xpartition_t, 0x10 );
