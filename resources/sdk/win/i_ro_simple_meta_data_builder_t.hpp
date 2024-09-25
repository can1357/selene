#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRoSimpleMetaDataBuilder]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ro_simple_meta_data_builder_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "IRoSimpleMetaDataBuilder.$", 0x8, true, 0xbf343b22f948de3e );
        SDK_FIXED_SIZE( i_ro_simple_meta_data_builder_t, 0x8 );
    };                                    
};
SDK_VERIFY( struct win::i_ro_simple_meta_data_builder_t, 0x8 );
