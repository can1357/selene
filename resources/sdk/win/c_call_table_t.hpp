#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [class CCallTable]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_call_table_t
    {                   
                        
        SDK_MAGIC_PROPERTIES( "CCallTable.$", 0x1, true, 0x8f1b99686d2401f4 );
        SDK_FIXED_SIZE( c_call_table_t, 0x1 );
    };                  
};
SDK_VERIFY( class win::c_call_table_t, 0x1 );
