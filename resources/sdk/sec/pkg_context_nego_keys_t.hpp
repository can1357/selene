#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_nego_keys_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_NegoKeys]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_nego_keys_t      
    {                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t key_type;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyType
        _m01 uint16_t key_length;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .KeyLength
        _m02 uint8_t* key_value;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyValue
        _m03 uint32_t verify_key_type;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VerifyKeyType
        _m04 uint16_t verify_key_length;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .VerifyKeyLength
        _m05 uint8_t* verify_key_value;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VerifyKeyValue
                                        
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_NegoKeys.$", 0x20, true, 0x1a746f100727007e );                  
        SDK_FIXED_SIZE( pkg_context_nego_keys_t, 0x20 );                  
    };                                  
};
#include "magic/pkg_context_nego_keys_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_nego_keys_t, 0x20 );
