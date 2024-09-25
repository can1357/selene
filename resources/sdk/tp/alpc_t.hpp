#pragma once
#include <sdkgen/support_library.hpp>

namespace tp
{
    // [struct _TP_ALPC]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct alpc_t
    {            
                 
        SDK_MAGIC_PROPERTIES( "_TP_ALPC.$", 0x0, true, 0xc11f2fbe8800b522 );
        SDK_FIXED_SIZE( alpc_t, 0x0 );
    };           
};
SDK_VERIFY( struct tp::alpc_t, 0x0 );
