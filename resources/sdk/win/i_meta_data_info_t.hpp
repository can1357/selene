#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_info_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IMetaDataInfo.$", 0x8, true, 0x2a7bd9f3ba13af47 );
        SDK_FIXED_SIZE( i_meta_data_info_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_meta_data_info_t, 0x8 );
