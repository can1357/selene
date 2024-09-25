#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_buffer_t.start.hpp"
namespace win
{
    // [struct CBuffer]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_buffer_t                 
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint8_t* cursor;           //{ +0x0000    +0x0000    +0x0000    } | .Cursor
        _m01 uint64_t bytes_remaining;  //{ +0x0008    +0x0008    +0x0008    } | .BytesRemaining
                                      
        SDK_MAGIC_PROPERTIES( "CBuffer.$", 0x10, true, 0x1ef910aad1006981 );                
        SDK_FIXED_SIZE( c_buffer_t, 0x10 );                
    };                                
};
#include "magic/c_buffer_t.end.hpp"
SDK_VERIFY( struct win::c_buffer_t, 0x10 );
