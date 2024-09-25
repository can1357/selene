#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IMachineGlobalObjectTableLegacy]
    // => Windows 11
    //
    struct i_machine_global_object_table_legacy_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "IMachineGlobalObjectTableLegacy.$", 0x0, false, 0xbbe1d4c1f7f1ffe5 );
        SDK_FIXED_SIZE( i_machine_global_object_table_legacy_t, 0x8 );
    };                                           
};
SDK_VERIFY( struct win::i_machine_global_object_table_legacy_t, 0x8 );
