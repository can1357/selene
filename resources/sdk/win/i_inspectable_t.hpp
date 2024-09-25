#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IInspectable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_inspectable_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IInspectable.$", 0x8, true, 0xd51714028e8497d );
        SDK_FIXED_SIZE( i_inspectable_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_inspectable_t, 0x8 );
