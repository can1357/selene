#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_credentials_ssi_provider_w_t.start.hpp"
namespace sec
{
    // [struct _SecPkgCredentials_SSIProviderW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_credentials_ssi_provider_w_t
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 wchar_t* s_provider_name;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .sProviderName
        _m01 uint32_t provider_info_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProviderInfoLength
        _m02 char*    provider_info;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProviderInfo
                                           
        SDK_NONVOL_PROPERTIES( "_SecPkgCredentials_SSIProviderW.$", 0x18, true, 0x20b2725a42202a8d );                     
        SDK_FIXED_SIZE( pkg_credentials_ssi_provider_w_t, 0x18 );                     
    };                                     
};
#include "magic/pkg_credentials_ssi_provider_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_credentials_ssi_provider_w_t, 0x18 );
