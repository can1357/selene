#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wire_extent_array_t.start.hpp"
namespace win
{
    // [struct WireExtentArray]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wire_extent_array_t                    
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 uint32_t                size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .size
        _m01 uint32_t                unique;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .unique
        _m02 uint32_t                rounded_size;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .rounded_size
        _m03 sdk::array<uint32_t, 2> unique_flag;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .unique_flag
                                                  
        SDK_MAGIC_PROPERTIES( "WireExtentArray.$", 0x10, true, 0x123327bfdf902ac );             
        SDK_DYNAMIC_SIZE( wire_extent_array_t );             
    };                                            
};
#include "magic/wire_extent_array_t.end.hpp"
