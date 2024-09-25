#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _PCW_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pcw_buffer_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "_PCW_BUFFER.$", 0x0, true, 0xc77654ef1d2cce45 );
        SDK_FIXED_SIZE( pcw_buffer_t, 0x0 );
    };                 
};
SDK_VERIFY( struct nt::pcw_buffer_t, 0x0 );
