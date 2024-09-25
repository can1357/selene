#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGlobalInterfaceTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_global_interface_table_t
    {                                
                                     
        SDK_MAGIC_PROPERTIES( "IGlobalInterfaceTable.$", 0x8, true, 0x8f63897206d1d2a2 );
        SDK_FIXED_SIZE( i_global_interface_table_t, 0x8 );
    };                               
};
SDK_VERIFY( struct win::i_global_interface_table_t, 0x8 );
