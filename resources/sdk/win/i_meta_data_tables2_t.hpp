#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataTables2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_tables2_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IMetaDataTables2.$", 0x8, true, 0xf0c6cf49b5a47d8d );
        SDK_FIXED_SIZE( i_meta_data_tables2_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_meta_data_tables2_t, 0x8 );
