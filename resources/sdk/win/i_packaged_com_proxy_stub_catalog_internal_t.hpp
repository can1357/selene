#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IPackagedComProxyStubCatalogInternal]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_packaged_com_proxy_stub_catalog_internal_t
    {                                                  
                                                       
        SDK_MAGIC_PROPERTIES( "IPackagedComProxyStubCatalogInternal.$", 0x8, true, 0xb95a3f5f7a5ea647 );
        SDK_FIXED_SIZE( i_packaged_com_proxy_stub_catalog_internal_t, 0x8 );
    };                                                 
};
SDK_VERIFY( struct win::i_packaged_com_proxy_stub_catalog_internal_t, 0x8 );
