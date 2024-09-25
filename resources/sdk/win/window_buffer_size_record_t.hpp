#pragma once
#include <sdkgen/support_library.hpp>
#include "coord_t.hpp"

#include "magic/window_buffer_size_record_t.start.hpp"
namespace win
{
    // [struct _WINDOW_BUFFER_SIZE_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct window_buffer_size_record_t   
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                               
        _m00 struct win::coord_t dw_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
                                         
        SDK_MAGIC_PROPERTIES( "_WINDOW_BUFFER_SIZE_RECORD.$", 0x4, true, 0xd1a9d12e8332f9c9 );        
        SDK_FIXED_SIZE( window_buffer_size_record_t, 0x4 );        
    };                                   
};
#include "magic/window_buffer_size_record_t.end.hpp"
SDK_VERIFY( struct win::window_buffer_size_record_t, 0x4 );
