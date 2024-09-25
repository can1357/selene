#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_credentials_kdc_proxy_settings_w_t.start.hpp"
namespace sec
{
    // [struct _SecPkgCredentials_KdcProxySettingsW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_credentials_kdc_proxy_settings_w_t
    {                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t version;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t flags;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint16_t proxy_server_offset;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProxyServerOffset
        _m03 uint16_t proxy_server_length;         //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .ProxyServerLength
        _m04 uint16_t client_tls_cred_offset;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ClientTlsCredOffset
        _m05 uint16_t client_tls_cred_length;      //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .ClientTlsCredLength
                                                 
        SDK_NONVOL_PROPERTIES( "_SecPkgCredentials_KdcProxySettingsW.$", 0x10, true, 0x11cabba19ba99e13 );                       
        SDK_FIXED_SIZE( pkg_credentials_kdc_proxy_settings_w_t, 0x10 );                       
    };                                           
};
#include "magic/pkg_credentials_kdc_proxy_settings_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_credentials_kdc_proxy_settings_w_t, 0x10 );
