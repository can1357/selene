#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_write_marshaling_stream_on_buffer_t.start.hpp"
namespace win
{
    // [class CWriteMarshalingStreamOnBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_write_marshaling_stream_on_buffer_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 volatile uint32_t c_refs;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
        _m01 uint8_t const*    p_buffer;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pBuffer
        _m02 const uint64_t    cb_buffer_max;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._cbBufferMax
        _m03 uint64_t          cb_buffer;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._cbBuffer
        _m04 uint8_t*          p_position;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pPosition
                                               
        SDK_MAGIC_PROPERTIES( "CWriteMarshalingStreamOnBuffer.$", 0x30, true, 0xe6e9351c87fff461 );              
        SDK_FIXED_SIZE( c_write_marshaling_stream_on_buffer_t, 0x30 );              
    };                                         
};
#include "magic/c_write_marshaling_stream_on_buffer_t.end.hpp"
SDK_VERIFY( class win::c_write_marshaling_stream_on_buffer_t, 0x30 );
