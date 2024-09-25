#pragma once
#include <sdkgen/support_library.hpp>
#include "buffer_t.hpp"

#include "magic/unicode_string_buffer_t.start.hpp"
namespace rtl
{
    // [struct _RTL_UNICODE_STRING_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct unicode_string_buffer_t                                         
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                 
        _m00 nt::unicode_view       string;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .String
        _m01 struct rtl::buffer_t   byte_buffer;                             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ByteBuffer
        _m02 sdk::array<uint8_t, 2> minimum_static_buffer_for_terminal_nul;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MinimumStaticBufferForTerminalNul
                                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_UNICODE_STRING_BUFFER.$", 0x38, true, 0x8c3f7568ed7a93e0 );                                       
        SDK_FIXED_SIZE( unicode_string_buffer_t, 0x38 );                                       
    };                                                                     
};
#include "magic/unicode_string_buffer_t.end.hpp"
SDK_VERIFY( struct rtl::unicode_string_buffer_t, 0x38 );
