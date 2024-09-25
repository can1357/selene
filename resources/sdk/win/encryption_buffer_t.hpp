#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/encryption_buffer_t.start.hpp"
namespace win
{
    // [struct _ENCRYPTION_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct encryption_buffer_t                           
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 uint32_t               encryption_operation;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EncryptionOperation
        _m01 sdk::array<uint8_t, 1> _private;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Private
                                                         
        SDK_NONVOL_PROPERTIES( "_ENCRYPTION_BUFFER.$", 0x8, true, 0xb68ece7a6c89898d );                     
        SDK_FIXED_SIZE( encryption_buffer_t, 0x8 );                     
    };                                                   
};
#include "magic/encryption_buffer_t.end.hpp"
SDK_VERIFY( struct win::encryption_buffer_t, 0x8 );
