#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInterfaceInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_interface_info_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IInterfaceInfo.$", 0x8, true, 0xeade776ceaa65a4c );
        SDK_FIXED_SIZE( i_interface_info_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::i_interface_info_t, 0x8 );
