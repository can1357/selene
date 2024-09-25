#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class IComCatalogInternalImpl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_com_catalog_internal_impl_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "IComCatalogInternalImpl.$", 0x8, true, 0xfeb510ccd3faad5c );
        SDK_FIXED_SIZE( i_com_catalog_internal_impl_t, 0x8 );
    };                                 
};
SDK_VERIFY( class win::i_com_catalog_internal_impl_t, 0x8 );
