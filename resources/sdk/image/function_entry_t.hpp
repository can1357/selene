#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/function_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_FUNCTION_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct function_entry_t            
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t starting_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingAddress
        _m01 uint32_t ending_address;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EndingAddress
        _m02 uint32_t end_of_prologue;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EndOfPrologue
                                       
        SDK_MAGIC_PROPERTIES( "_IMAGE_FUNCTION_ENTRY.$", 0xc, true, 0x3235cc1158d5d887 );                 
        SDK_FIXED_SIZE( function_entry_t, 0xc );                 
    };                                 
};
#include "magic/function_entry_t.end.hpp"
SDK_VERIFY( struct image::function_entry_t, 0xc );
