#pragma once
#include <sdkgen/support_library.hpp>

namespace dbgkp
{
    // [struct _DBGKP_ERROR_PORT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_port_t
    {                  
                       
        SDK_MAGIC_PROPERTIES( "_DBGKP_ERROR_PORT.$", 0x0, true, 0xa089c34af0a4b022 );
        SDK_FIXED_SIZE( error_port_t, 0x0 );
    };                 
};
SDK_VERIFY( struct dbgkp::error_port_t, 0x0 );
