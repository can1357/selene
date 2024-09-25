#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_stream_on_buffer_t.start.hpp"
namespace win
{
    // [class CStreamOnBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_stream_on_buffer_t         
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 int32_t  ref_count;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefCount
        _m01 uint8_t* p_buffer;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pBuffer
        _m02 uint32_t cb_buffer_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cbBufferLength
        _m03 uint32_t position;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .position
                                       
        SDK_MAGIC_PROPERTIES( "CStreamOnBuffer.$", 0x20, true, 0xc70513d77ddcd0ca );                 
        SDK_FIXED_SIZE( c_stream_on_buffer_t, 0x20 );                 
    };                                 
};
#include "magic/c_stream_on_buffer_t.end.hpp"
SDK_VERIFY( class win::c_stream_on_buffer_t, 0x20 );
