#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_virtual_alloc_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_VIRTUAL_ALLOC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_virtual_alloc_t        
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 void*    captured_base;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CapturedBase
        _m01 uint64_t captured_region_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CapturedRegionSize
        _m02 uint32_t process_id;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessId
        _m03 uint32_t flags;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_VIRTUAL_ALLOC.$", 0x18, true, 0xff2f2cfe5b0d7ce4 );                     
        SDK_FIXED_SIZE( perfinfo_virtual_alloc_t, 0x18 );                     
    };                                     
};
#include "magic/perfinfo_virtual_alloc_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_virtual_alloc_t, 0x18 );
