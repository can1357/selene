#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataImport]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_import_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IMetaDataImport.$", 0x8, true, 0x7b8f7aba864df561 );
        SDK_FIXED_SIZE( i_meta_data_import_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_meta_data_import_t, 0x8 );
