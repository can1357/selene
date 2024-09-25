#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IViewObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_view_object_t
    {                     
                          
        SDK_MAGIC_PROPERTIES( "IViewObject.$", 0x8, true, 0x9fd2f2c7f442d546 );
        SDK_FIXED_SIZE( i_view_object_t, 0x8 );
    };                    
};
SDK_VERIFY( struct win::i_view_object_t, 0x8 );
