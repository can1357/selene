#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataImport2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_import2_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IMetaDataImport2.$", 0x8, true, 0xd080eb1c12c2bf19 );
        SDK_FIXED_SIZE( i_meta_data_import2_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_meta_data_import2_t, 0x8 );
