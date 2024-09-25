#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_key_prov_param_t.start.hpp"
namespace win
{
    // [struct _CRYPT_KEY_PROV_PARAM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_key_prov_param_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t dw_param;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwParam
        _m01 uint8_t* pb_data;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbData
        _m02 uint32_t cb_data;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbData
        _m03 uint32_t dw_flags;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwFlags
                                 
        SDK_MAGIC_PROPERTIES( "_CRYPT_KEY_PROV_PARAM.$", 0x18, true, 0xc9ac45ee93b5c175 );         
        SDK_FIXED_SIZE( crypt_key_prov_param_t, 0x18 );         
    };                           
};
#include "magic/crypt_key_prov_param_t.end.hpp"
SDK_VERIFY( struct win::crypt_key_prov_param_t, 0x18 );
