#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/output_debug_string_info_t.start.hpp"
namespace win
{
    // [struct _OUTPUT_DEBUG_STRING_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct output_debug_string_info_t       
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 char*    lp_debug_string_data;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .lpDebugStringData
        _m01 uint16_t f_unicode;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .fUnicode
        _m02 uint16_t n_debug_string_length;  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .nDebugStringLength
                                            
        SDK_NONVOL_PROPERTIES( "_OUTPUT_DEBUG_STRING_INFO.$", 0x10, true, 0x4058a26d2f632493 );                      
        SDK_FIXED_SIZE( output_debug_string_info_t, 0x10 );                      
    };                                      
};
#include "magic/output_debug_string_info_t.end.hpp"
SDK_VERIFY( struct win::output_debug_string_info_t, 0x10 );
