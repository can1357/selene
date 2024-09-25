#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buffer_t.start.hpp"
namespace rtl
{
    // [struct _RTL_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct buffer_t                 
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint8_t* buffer;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
        _m01 uint8_t* static_buffer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StaticBuffer
        _m02 uint64_t size;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m03 uint64_t static_size;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StaticSize
                                    
        SDK_MAGIC_PROPERTIES( "_RTL_BUFFER.$", 0x20, true, 0x1f393a8a27f80999 );              
        SDK_FIXED_SIZE( buffer_t, 0x20 );              
    };                              
};
#include "magic/buffer_t.end.hpp"
SDK_VERIFY( struct rtl::buffer_t, 0x20 );
