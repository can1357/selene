#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComCatalogTreatAsClass]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_catalog_treat_as_class_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "IComCatalogTreatAsClass.$", 0x8, true, 0x3e93e3781d76d13c );
        SDK_FIXED_SIZE( i_com_catalog_treat_as_class_t, 0x8 );
    };                                   
};
SDK_VERIFY( struct win::i_com_catalog_treat_as_class_t, 0x8 );
