#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_call_info_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "ICallInfo.$", 0x8, true, 0xa63efd806cf34fbc );
        SDK_FIXED_SIZE( i_call_info_t, 0x8 );
    };                  
};
SDK_VERIFY( struct win::i_call_info_t, 0x8 );
