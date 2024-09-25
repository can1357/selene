#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_rot_hint_table_t.start.hpp"
namespace win
{
    // [class CRotHintTable]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_rot_hint_table_t        
    {                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint8_t* pb_hint_array;  //{ +0x0000    +0x0000    +0x0000    } | ._pbHintArray
                                    
        SDK_MAGIC_PROPERTIES( "CRotHintTable.$", 0x8, true, 0xa35f4fab095627f9 );              
        SDK_FIXED_SIZE( c_rot_hint_table_t, 0x8 );              
    };                              
};
#include "magic/c_rot_hint_table_t.end.hpp"
SDK_VERIFY( class win::c_rot_hint_table_t, 0x8 );
