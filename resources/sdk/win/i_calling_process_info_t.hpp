#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallingProcessInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_calling_process_info_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "ICallingProcessInfo.$", 0x8, true, 0xeed4a5deb4e89bf2 );
        SDK_FIXED_SIZE( i_calling_process_info_t, 0x8 );
    };                             
};
SDK_VERIFY( struct win::i_calling_process_info_t, 0x8 );
