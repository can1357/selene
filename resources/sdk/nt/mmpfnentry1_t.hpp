#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmpfnentry1_t.start.hpp"
namespace nt
{
    // [struct _MMPFNENTRY1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpfnentry1_t               
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 uint3_t page_location;      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PageLocation
        _m01 uint1_t write_in_progress;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .WriteInProgress
        _m02 uint1_t modified;           //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .Modified
        _m03 uint1_t read_in_progress;   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ReadInProgress
        _m04 uint2_t cache_attribute;    //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .CacheAttribute
                                       
        SDK_MAGIC_PROPERTIES( "_MMPFNENTRY1.$", 0x1, true, 0x8566256ab86f2f36 );                  
        SDK_FIXED_SIZE( mmpfnentry1_t, 0x1 );                  
    };                                 
};
#include "magic/mmpfnentry1_t.end.hpp"
SDK_VERIFY( struct nt::mmpfnentry1_t, 0x1 );
