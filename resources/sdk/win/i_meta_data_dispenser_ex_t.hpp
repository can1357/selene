#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataDispenserEx]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_dispenser_ex_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IMetaDataDispenserEx.$", 0x8, true, 0x47884b5a1f482d7f );
        SDK_FIXED_SIZE( i_meta_data_dispenser_ex_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_meta_data_dispenser_ex_t, 0x8 );
