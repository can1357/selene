#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_exported_isolated_key_header_t.start.hpp"
namespace win
{
    // [struct _NCRYPT_EXPORTED_ISOLATED_KEY_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_exported_isolated_key_header_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t version;                    //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t key_usage;                  //{ +0x0004    +0x0004    +0x0004    } | .KeyUsage
        _m02 uint1_t  per_boot_key;               //{ +0x0008@0  +0x0008@0  +0x0008@0  } | .PerBootKey
        _m03 uint32_t cb_alg_name;                //{ +0x000c    +0x000c    +0x000c    } | .cbAlgName
        _m04 uint32_t cb_nonce;                   //{ +0x0010    +0x0010    +0x0010    } | .cbNonce
        _m05 uint32_t cb_auth_tag;                //{ +0x0014    +0x0014    +0x0014    } | .cbAuthTag
        _m06 uint32_t cb_wrapping_key;            //{ +0x0018    +0x0018    +0x0018    } | .cbWrappingKey
        _m07 uint32_t cb_isolated_key;            //{ +0x001c    +0x001c    +0x001c    } | .cbIsolatedKey
                                                
        SDK_MAGIC_PROPERTIES( "_NCRYPT_EXPORTED_ISOLATED_KEY_HEADER.$", 0x20, true, 0xce204f2e4c043ebf );                
        SDK_FIXED_SIZE( ncrypt_exported_isolated_key_header_t, 0x20 );                
    };                                          
};
#include "magic/ncrypt_exported_isolated_key_header_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_exported_isolated_key_header_t, 0x20 );
