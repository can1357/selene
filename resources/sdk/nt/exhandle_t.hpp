#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/exhandle_t.start.hpp"
namespace nt
{
    // [struct _EXHANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct exhandle_t                        
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint2_t  tag_bits;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .TagBits
        _m01 uint30_t index;                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Index
        _m02 void*    generic_handle_overlay;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GenericHandleOverlay
        _m03 uint64_t value;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                             
        SDK_MAGIC_PROPERTIES( "_EXHANDLE.$", 0x8, true, 0x1c914e09d3a13935 );                       
        SDK_FIXED_SIZE( exhandle_t, 0x8 );                       
    };                                       
};
#include "magic/exhandle_t.end.hpp"
SDK_VERIFY( struct nt::exhandle_t, 0x8 );
