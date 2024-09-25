#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComCatalogSCM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_catalog_scm_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IComCatalogSCM.$", 0x8, true, 0x39e625a511701e5a );
        SDK_FIXED_SIZE( i_com_catalog_scm_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_com_catalog_scm_t, 0x8 );
