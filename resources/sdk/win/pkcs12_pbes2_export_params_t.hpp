#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkcs12_pbes2_export_params_t.start.hpp"
namespace win
{
    // [struct _PKCS12_PBES2_EXPORT_PARAMS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkcs12_pbes2_export_params_t   
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t dw_size;              //{ +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 void*    h_ncrypt_descriptor;  //{ +0x0008    +0x0008    +0x0008    } | .hNcryptDescriptor
        _m02 wchar_t* pwsz_pbes2_alg;       //{ +0x0010    +0x0010    +0x0010    } | .pwszPbes2Alg
                                          
        SDK_MAGIC_PROPERTIES( "_PKCS12_PBES2_EXPORT_PARAMS.$", 0x18, true, 0xa134c7cc302dd295 );                    
        SDK_FIXED_SIZE( pkcs12_pbes2_export_params_t, 0x18 );                    
    };                                    
};
#include "magic/pkcs12_pbes2_export_params_t.end.hpp"
SDK_VERIFY( struct win::pkcs12_pbes2_export_params_t, 0x18 );
