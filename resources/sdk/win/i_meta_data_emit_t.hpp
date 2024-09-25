#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataEmit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_emit_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IMetaDataEmit.$", 0x8, true, 0xdc914bb49d659eb4 );
        SDK_FIXED_SIZE( i_meta_data_emit_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_meta_data_emit_t, 0x8 );
