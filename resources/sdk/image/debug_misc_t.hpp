#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_misc_t.start.hpp"
namespace image
{
    // [struct _IMAGE_DEBUG_MISC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debug_misc_t                       
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 uint32_t               data_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataType
        _m01 uint32_t               length;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint8_t                unicode;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Unicode
        _m03 sdk::array<uint8_t, 1> data;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Data
                                              
        SDK_MAGIC_PROPERTIES( "_IMAGE_DEBUG_MISC.$", 0x10, true, 0xfe69cb5942f4bb96 );          
        SDK_FIXED_SIZE( debug_misc_t, 0x10 );          
    };                                        
};
#include "magic/debug_misc_t.end.hpp"
SDK_VERIFY( struct image::debug_misc_t, 0x10 );
