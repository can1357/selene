#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_key_prov_info_t.start.hpp"
namespace win
{
    struct crypt_key_prov_param_t;

    // [struct _CRYPT_KEY_PROV_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_key_prov_info_t                                     
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                           
        _m00 wchar_t*                            pwsz_container_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pwszContainerName
        _m01 wchar_t*                            pwsz_prov_name;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszProvName
        _m02 uint32_t                            dw_prov_type;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwProvType
        _m03 uint32_t                            dw_flags;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwFlags
        _m04 uint32_t                            c_prov_param;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cProvParam
        _m05 struct win::crypt_key_prov_param_t* rg_prov_param;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .rgProvParam
        _m06 uint32_t                            dw_key_spec;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwKeySpec
                                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_KEY_PROV_INFO.$", 0x30, true, 0xf13775f60f8de708 );                    
        SDK_FIXED_SIZE( crypt_key_prov_info_t, 0x30 );                    
    };                                                               
};
#include "magic/crypt_key_prov_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_key_prov_info_t, 0x30 );
