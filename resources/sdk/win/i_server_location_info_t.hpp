#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IServerLocationInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_server_location_info_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "IServerLocationInfo.$", 0x8, true, 0xcaa319733aedbc4f );
        SDK_FIXED_SIZE( i_server_location_info_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_server_location_info_t, 0x8 );
