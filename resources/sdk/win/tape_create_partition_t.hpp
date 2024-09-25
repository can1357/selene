#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tape_create_partition_t.start.hpp"
namespace win
{
    // [struct _TAPE_CREATE_PARTITION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct tape_create_partition_t
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t method;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Method
        _m01 uint32_t count;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m02 uint32_t size;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                                  
        SDK_NONVOL_PROPERTIES( "_TAPE_CREATE_PARTITION.$", 0xc, true, 0x24f64b11f3a676bd );       
        SDK_FIXED_SIZE( tape_create_partition_t, 0xc );       
    };                            
};
#include "magic/tape_create_partition_t.end.hpp"
SDK_VERIFY( struct win::tape_create_partition_t, 0xc );
