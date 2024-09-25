#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMetaDataDispenser]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_meta_data_dispenser_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IMetaDataDispenser.$", 0x8, true, 0x7a582895f6ab04f );
        SDK_FIXED_SIZE( i_meta_data_dispenser_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_meta_data_dispenser_t, 0x8 );
