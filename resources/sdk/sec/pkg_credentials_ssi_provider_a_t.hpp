#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_credentials_ssi_provider_a_t.start.hpp"
namespace sec
{
    // [struct _SecPkgCredentials_SSIProviderA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_credentials_ssi_provider_a_t
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 char*    s_provider_name;       //{ +0x0000    +0x0000    +0x0000    } | .sProviderName
        _m01 uint32_t provider_info_length;  //{ +0x0008    +0x0008    +0x0008    } | .ProviderInfoLength
        _m02 char*    provider_info;         //{ +0x0010    +0x0010    +0x0010    } | .ProviderInfo
                                           
        SDK_MAGIC_PROPERTIES( "_SecPkgCredentials_SSIProviderA.$", 0x18, true, 0xbbfd44b3257547b4 );                     
        SDK_FIXED_SIZE( pkg_credentials_ssi_provider_a_t, 0x18 );                     
    };                                     
};
#include "magic/pkg_credentials_ssi_provider_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_credentials_ssi_provider_a_t, 0x18 );
