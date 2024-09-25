#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ICallLocalityInfo]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_call_locality_info_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "ICallLocalityInfo.$", 0x8, true, 0x9dfae0c649a3a945 );
        SDK_FIXED_SIZE( i_call_locality_info_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::i_call_locality_info_t, 0x8 );
