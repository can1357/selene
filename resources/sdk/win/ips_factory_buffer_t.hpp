#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPSFactoryBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ips_factory_buffer_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IPSFactoryBuffer.$", 0x8, true, 0x6288694688fada26 );
        SDK_FIXED_SIZE( ips_factory_buffer_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::ips_factory_buffer_t, 0x8 );
