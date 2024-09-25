#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMachineGlobalObjectTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_machine_global_object_table_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "IMachineGlobalObjectTable.$", 0x8, true, 0x3f97ce06431b4616 );
        SDK_FIXED_SIZE( i_machine_global_object_table_t, 0x8 );
    };                                    
};
SDK_VERIFY( struct win::i_machine_global_object_table_t, 0x8 );
