#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataFilter]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_filter_t
    {                          
                               
        SDK_MAGIC_PROPERTIES( "IMetaDataFilter.$", 0x8, true, 0x28c25202b052bc62 );
        SDK_FIXED_SIZE( i_meta_data_filter_t, 0x8 );
    };                         
};
SDK_VERIFY( struct win::i_meta_data_filter_t, 0x8 );
