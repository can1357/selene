#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IGetProcessInfoInternal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_get_process_info_internal_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "IGetProcessInfoInternal.$", 0x8, true, 0xf5e714e5d6ffe10d );
        SDK_FIXED_SIZE( i_get_process_info_internal_t, 0x8 );
    };                                  
};
SDK_VERIFY( struct win::i_get_process_info_internal_t, 0x8 );
