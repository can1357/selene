#pragma once
#include <sdkgen/support_library.hpp>
#include "_802_11_authentication_encryption_t.hpp"

#include "magic/_802_11_capability_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_802_11_CAPABILITY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct _802_11_capability_t                                                         
    {                                                                                   
        using authentication_encryption_supported_t = sdk::array<struct ndis::_802_11_authentication_encryption_t, 1>;                                    
                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                              
        _m00 uint32_t                               length;                               //{ +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t                               version;                              //{ +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t                               no_of_pmki_ds;                        //{ +0x0008    +0x0008    +0x0008    } | .NoOfPMKIDs
        _m03 uint32_t                               no_of_auth_encrypt_pairs_supported;   //{ +0x000c    +0x000c    +0x000c    } | .NoOfAuthEncryptPairsSupported
        _m04 authentication_encryption_supported_t  authentication_encryption_supported;  //{ +0x0010    +0x0010    +0x0010    } | .AuthenticationEncryptionSupported
                                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_802_11_CAPABILITY.$", 0x18, true, 0xbea0425cd9cd9242 );                                    
        SDK_FIXED_SIZE( _802_11_capability_t, 0x18 );                                    
    };                                                                                  
};
#include "magic/_802_11_capability_t.end.hpp"
SDK_VERIFY( struct ndis::_802_11_capability_t, 0x18 );
