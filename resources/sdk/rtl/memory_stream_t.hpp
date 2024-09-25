#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_stream_t.hpp"

#include "magic/memory_stream_t.start.hpp"
namespace rtl
{
    // [class RtlMemoryStream]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class memory_stream_t                       
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                      
        _m00 struct rtl::memory_stream_t stream;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Stream
                                                
        SDK_MAGIC_PROPERTIES( "RtlMemoryStream.$", 0x30, true, 0x5293fb8c800a72ed );       
        SDK_FIXED_SIZE( memory_stream_t, 0x30 );       
    };                                          
};
#include "magic/memory_stream_t.end.hpp"
SDK_VERIFY( class rtl::memory_stream_t, 0x30 );
