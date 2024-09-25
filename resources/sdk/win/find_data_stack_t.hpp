#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class FindDataStack]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class find_data_stack_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "FindDataStack.$", 0x8, true, 0xf14abf29bde7572b );
        SDK_FIXED_SIZE( find_data_stack_t, 0x8 );
    };                     
};
SDK_VERIFY( class win::find_data_stack_t, 0x8 );
