#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/srtp_master_key_identifier_t.start.hpp"
namespace sec
{
    // [struct _SEC_SRTP_MASTER_KEY_IDENTIFIER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct srtp_master_key_identifier_t                        
    {                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                     
        _m00 uint8_t                master_key_identifier_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MasterKeyIdentifierSize
        _m01 sdk::array<uint8_t, 1> master_key_identifier;       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MasterKeyIdentifier
                                                               
        SDK_NONVOL_PROPERTIES( "_SEC_SRTP_MASTER_KEY_IDENTIFIER.$", 0x2, true, 0x7179073b8bfcffb1 );                           
        SDK_FIXED_SIZE( srtp_master_key_identifier_t, 0x2 );                           
    };                                                         
};
#include "magic/srtp_master_key_identifier_t.end.hpp"
SDK_VERIFY( struct sec::srtp_master_key_identifier_t, 0x2 );
