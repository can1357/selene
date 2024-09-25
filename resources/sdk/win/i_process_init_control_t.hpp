#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IProcessInitControl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_process_init_control_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IProcessInitControl.$", 0x8, true, 0x3d6d790f5f62263e );
        SDK_FIXED_SIZE( i_process_init_control_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_process_init_control_t, 0x8 );
