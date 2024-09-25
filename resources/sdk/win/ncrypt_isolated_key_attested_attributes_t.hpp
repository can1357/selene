#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_isolated_key_attested_attributes_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_ISOLATED_KEY_ATTESTED_ATTRIBUTES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_isolated_key_attested_attributes_t
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t version;                        //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t flags;                          //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t cb_public_key_blob;             //{ +0x0008    +0x0008    +0x0008    } | .cbPublicKeyBlob
                                                    
        SDK_MAGIC_PROPERTIES( "_NCRYPT_ISOLATED_KEY_ATTESTED_ATTRIBUTES.$", 0xc, true, 0x5332ae29cfd25d55 );                   
        SDK_FIXED_SIZE( ncrypt_isolated_key_attested_attributes_t, 0xc );                   
    };                                              
};
#include "magic/ncrypt_isolated_key_attested_attributes_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_isolated_key_attested_attributes_t, 0xc );
