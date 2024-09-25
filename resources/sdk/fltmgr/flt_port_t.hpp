#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [struct _FLT_PORT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_port_t
    {                
                     
        SDK_MAGIC_PROPERTIES( "_FLT_PORT.$", 0x0, true, 0xf2a33e1aad73d1f );
        SDK_FIXED_SIZE( flt_port_t, 0x0 );
    };               
};
SDK_VERIFY( struct fltmgr::flt_port_t, 0x0 );
