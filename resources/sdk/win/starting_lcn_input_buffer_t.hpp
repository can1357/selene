#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/starting_lcn_input_buffer_t.start.hpp"
namespace win
{
    // [struct STARTING_LCN_INPUT_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct starting_lcn_input_buffer_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 int64_t starting_lcn;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingLcn
                                      
        SDK_MAGIC_PROPERTIES( "STARTING_LCN_INPUT_BUFFER.$", 0x8, true, 0x5b13b7a5f26a8e3d );             
        SDK_FIXED_SIZE( starting_lcn_input_buffer_t, 0x8 );             
    };                                
};
#include "magic/starting_lcn_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::starting_lcn_input_buffer_t, 0x8 );
