#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IRunningObjectTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_running_object_table_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IRunningObjectTable.$", 0x8, true, 0x2d8c0cb86a7ea9df );
        SDK_FIXED_SIZE( i_running_object_table_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_running_object_table_t, 0x8 );
