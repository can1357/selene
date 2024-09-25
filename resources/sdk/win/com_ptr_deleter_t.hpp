#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct com_ptr_deleter]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct com_ptr_deleter_t
    {                       
                            
        SDK_MAGIC_PROPERTIES( "com_ptr_deleter.$", 0x1, true, 0xdc288fceafe97ee7 );
        SDK_FIXED_SIZE( com_ptr_deleter_t, 0x1 );
    };                      
};
SDK_VERIFY( struct win::com_ptr_deleter_t, 0x1 );
