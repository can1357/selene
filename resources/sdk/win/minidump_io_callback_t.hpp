#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/minidump_io_callback_t.start.hpp"
namespace win
{
    // [struct _MINIDUMP_IO_CALLBACK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct minidump_io_callback_t  
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 void*    handle;        //{ +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 uint64_t offset;        //{ +0x0008    +0x0008    +0x0008    } | .Offset
        _m02 void*    buffer;        //{ +0x0010    +0x0010    +0x0010    } | .Buffer
        _m03 uint32_t buffer_bytes;  //{ +0x0018    +0x0018    +0x0018    } | .BufferBytes
                                   
        SDK_MAGIC_PROPERTIES( "_MINIDUMP_IO_CALLBACK.$", 0x1c, true, 0x3b0976e0954b2ce0 );             
        SDK_FIXED_SIZE( minidump_io_callback_t, 0x1c );             
    };                             
};
#include "magic/minidump_io_callback_t.end.hpp"
SDK_VERIFY( struct win::minidump_io_callback_t, 0x1c );
