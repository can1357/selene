#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/function_entry64_t.start.hpp"
namespace image
{
    // [struct _IMAGE_FUNCTION_ENTRY64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct function_entry64_t             
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint64_t starting_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingAddress
        _m01 uint64_t ending_address;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EndingAddress
        _m02 uint64_t end_of_prologue;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EndOfPrologue
        _m03 uint64_t unwind_info_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UnwindInfoAddress
                                          
        SDK_MAGIC_PROPERTIES( "_IMAGE_FUNCTION_ENTRY64.$", 0x18, true, 0x261bdc18c14a442d );                    
        SDK_FIXED_SIZE( function_entry64_t, 0x18 );                    
    };                                    
};
#include "magic/function_entry64_t.end.hpp"
SDK_VERIFY( struct image::function_entry64_t, 0x18 );
