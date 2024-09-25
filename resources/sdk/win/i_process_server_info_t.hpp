#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IProcessServerInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_process_server_info_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "IProcessServerInfo.$", 0x8, true, 0x8e50101dea21b213 );
        SDK_FIXED_SIZE( i_process_server_info_t, 0x8 );
    };                            
};
SDK_VERIFY( struct win::i_process_server_info_t, 0x8 );
