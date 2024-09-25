#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ILocalMachineNames]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_local_machine_names_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "ILocalMachineNames.$", 0x8, true, 0x3de82c0d4cdf9696 );
        SDK_FIXED_SIZE( i_local_machine_names_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_local_machine_names_t, 0x8 );
