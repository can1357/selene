#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataEmit2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_emit2_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "IMetaDataEmit2.$", 0x8, true, 0xe272a2d66ee6c882 );
        SDK_FIXED_SIZE( i_meta_data_emit2_t, 0x8 );
    };                        
};
SDK_VERIFY( struct win::i_meta_data_emit2_t, 0x8 );
