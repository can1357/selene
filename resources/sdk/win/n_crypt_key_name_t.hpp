#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/n_crypt_key_name_t.start.hpp"
namespace win
{
    // [struct NCryptKeyName]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct n_crypt_key_name_t            
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 wchar_t* psz_name;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszName
        _m01 wchar_t* psz_algid;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszAlgid
        _m02 uint32_t dw_legacy_key_spec;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwLegacyKeySpec
        _m03 uint32_t dw_flags;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwFlags
                                         
        SDK_MAGIC_PROPERTIES( "NCryptKeyName.$", 0x18, true, 0xa941498fb44861fd );                   
        SDK_FIXED_SIZE( n_crypt_key_name_t, 0x18 );                   
    };                                   
};
#include "magic/n_crypt_key_name_t.end.hpp"
SDK_VERIFY( struct win::n_crypt_key_name_t, 0x18 );
