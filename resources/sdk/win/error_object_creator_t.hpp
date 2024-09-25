#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class ErrorObjectCreator]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class error_object_creator_t
    {                           
                                
        SDK_MAGIC_PROPERTIES( "ErrorObjectCreator.$", 0x8, true, 0x438853be018e2f3 );
        SDK_FIXED_SIZE( error_object_creator_t, 0x8 );
    };                          
};
SDK_VERIFY( class win::error_object_creator_t, 0x8 );
