#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct ICompanionLibrary]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_companion_library_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ICompanionLibrary.$", 0x8, true, 0xb493970c55ff0bb5 );
        SDK_FIXED_SIZE( i_companion_library_t, 0x8 );
    };                          
};
SDK_VERIFY( struct wdf::i_companion_library_t, 0x8 );
