#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInternetSecurityMgrSite]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_internet_security_mgr_site_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "IInternetSecurityMgrSite.$", 0x8, true, 0x200ec79d87966836 );
        SDK_FIXED_SIZE( i_internet_security_mgr_site_t, 0x8 );
    };                                   
};
SDK_VERIFY( struct win::i_internet_security_mgr_site_t, 0x8 );
