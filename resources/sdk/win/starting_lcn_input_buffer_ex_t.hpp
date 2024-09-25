#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/starting_lcn_input_buffer_ex_t.start.hpp"
namespace win
{
    // [struct STARTING_LCN_INPUT_BUFFER_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct starting_lcn_input_buffer_ex_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 int64_t  starting_lcn;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingLcn
        _m01 uint32_t flags;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                         
        SDK_MAGIC_PROPERTIES( "STARTING_LCN_INPUT_BUFFER_EX.$", 0x10, true, 0xfd0e6817d3f8609d );             
        SDK_FIXED_SIZE( starting_lcn_input_buffer_ex_t, 0x10 );             
    };                                   
};
#include "magic/starting_lcn_input_buffer_ex_t.end.hpp"
SDK_VERIFY( struct win::starting_lcn_input_buffer_ex_t, 0x10 );
