#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_name_value_t.start.hpp"
namespace win
{
    // [struct _CERT_NAME_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_name_value_t                            
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 uint32_t                     dw_value_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwValueType
        _m01 struct win::cryptoapi_blob_t value;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Value
                                                        
        SDK_MAGIC_PROPERTIES( "_CERT_NAME_VALUE.$", 0x18, true, 0xfef0aa28db0b9cb8 );              
        SDK_FIXED_SIZE( cert_name_value_t, 0x18 );              
    };                                                  
};
#include "magic/cert_name_value_t.end.hpp"
SDK_VERIFY( struct win::cert_name_value_t, 0x18 );
