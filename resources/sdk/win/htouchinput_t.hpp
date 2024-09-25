#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct HTOUCHINPUT__]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct htouchinput_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "HTOUCHINPUT__.$", 0x4, true, 0xba2477e7e0a9b324 );
        SDK_FIXED_SIZE( htouchinput_t, 0x4 );
    };                  
};
SDK_VERIFY( struct win::htouchinput_t, 0x4 );
