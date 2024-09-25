#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_wep_status_t.hpp"
#include "_802_11_authentication_mode_t.hpp"

#include "magic/_802_11_authentication_encryption_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_AUTHENTICATION_ENCRYPTION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_authentication_encryption_t                                 
    {                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                     
        _m00 enum ndis::_802_11_authentication_mode_t auth_mode_supported;       //{ +0x0000    +0x0000    +0x0000    } | .AuthModeSupported
        _m01 enum ndis::_802_11_wep_status_t          encrypt_status_supported;  //{ +0x0004    +0x0004    +0x0004    } | .EncryptStatusSupported
                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_AUTHENTICATION_ENCRYPTION.$", 0x8, true, 0x41e8d68285789dd );                         
        SDK_FIXED_SIZE( _802_11_authentication_encryption_t, 0x8 );                         
    };                                                                         
};
#include "magic/_802_11_authentication_encryption_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_authentication_encryption_t, 0x8 );
