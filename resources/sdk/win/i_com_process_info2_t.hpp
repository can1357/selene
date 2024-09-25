#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IComProcessInfo2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_com_process_info2_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "IComProcessInfo2.$", 0x8, true, 0x1f92b890c6e67145 );
        SDK_FIXED_SIZE( i_com_process_info2_t, 0x8 );
    };                          
};
SDK_VERIFY( struct win::i_com_process_info2_t, 0x8 );
