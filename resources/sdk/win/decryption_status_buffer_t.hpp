#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/decryption_status_buffer_t.start.hpp"
namespace win
{
    // [struct _DECRYPTION_STATUS_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct decryption_status_buffer_t     
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                
        _m00 uint8_t no_encrypted_streams;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NoEncryptedStreams
                                          
        SDK_NONVOL_PROPERTIES( "_DECRYPTION_STATUS_BUFFER.$", 0x1, true, 0xf354afb354dde95a );                     
        SDK_FIXED_SIZE( decryption_status_buffer_t, 0x1 );                     
    };                                    
};
#include "magic/decryption_status_buffer_t.end.hpp"
SDK_VERIFY( struct win::decryption_status_buffer_t, 0x1 );
