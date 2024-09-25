#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_user_stream_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_USER_STREAM]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_user_stream_t 
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t type;         //{ +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint32_t buffer_size;  //{ +0x0004    +0x0004    +0x0004    } | .BufferSize
        _m02 void*    buffer;       //{ +0x0008    +0x0008    +0x0008    } | .Buffer
                                  
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_USER_STREAM.$", 0x10, true, 0x369d3ff73d7b17e0 );            
        SDK_FIXED_SIZE( minidump_user_stream_t, 0x10 );            
    };                            
};
#include "magic/minidump_user_stream_t.end.hpp"
SDK_VERIFY( struct win::minidump_user_stream_t, 0x10 );
