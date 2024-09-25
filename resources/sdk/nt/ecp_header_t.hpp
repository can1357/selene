#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _ECP_HEADER]
    // => WDK 10
    //
    struct ecp_header_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "_ECP_HEADER.$", 0x0, false, 0x75c8e9b8119561cf );
        SDK_FIXED_SIZE( ecp_header_t, 0x0 );
    };                 
};
SDK_VERIFY( struct nt::ecp_header_t, 0x0 );
