#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gs_handler_data_t.start.hpp"
namespace win
{
    // [struct _GS_HANDLER_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gs_handler_data_t                               
    {                                                      
        struct u0_bits_t                                   
        {                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                             
            _m00 uint1_t e_handler;                          //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .EHandler
            _m01 uint1_t u_handler;                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .UHandler
            _m02 uint1_t has_alignment;                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .HasAlignment
                                                           
            SDK_MAGIC_PROPERTIES( "_GS_HANDLER_DATA.Bits.$", 0x4, true, 0x93eca040f37fde57 );                                  
            SDK_FIXED_SIZE( u0_bits_t, 0x4 );                                  
        };                                                 
                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                 
        _m03 u0_bits_t                 bits;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bits
        _m04 int32_t                   cookie_offset;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CookieOffset
        _m05 int32_t                   aligned_base_offset;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AlignedBaseOffset
        _m06 int32_t                   alignment;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Alignment
                                                           
        SDK_MAGIC_PROPERTIES( "_GS_HANDLER_DATA.$", 0xc, true, 0x113717c81396fb3c );                    
        SDK_FIXED_SIZE( gs_handler_data_t, 0xc );                    
    };                                                     
};
#include "magic/gs_handler_data_t.end.hpp"
SDK_VERIFY( struct win::gs_handler_data_t::u0_bits_t, 0x4 );
SDK_VERIFY( struct win::gs_handler_data_t, 0xc );
