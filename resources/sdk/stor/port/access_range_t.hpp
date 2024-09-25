#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/access_range_t.start.hpp"
namespace stor::port
{
    // [struct _ACCESS_RANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct access_range_t             
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 int64_t  range_start;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RangeStart
        _m01 uint32_t range_length;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RangeLength
        _m02 uint8_t  range_in_memory;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .RangeInMemory
                                      
        SDK_NONVOL_PROPERTIES( "_ACCESS_RANGE.$", 0x10, true, 0x3757cc3ca5dba2f9 );                
        SDK_FIXED_SIZE( access_range_t, 0x10 );                
    };                                
};
#include "magic/access_range_t.end.hpp"
SDK_VERIFY( struct stor::port::access_range_t, 0x10 );
