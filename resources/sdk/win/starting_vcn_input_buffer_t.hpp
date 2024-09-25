#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/starting_vcn_input_buffer_t.start.hpp"
namespace win
{
    // [struct STARTING_VCN_INPUT_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct starting_vcn_input_buffer_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 int64_t starting_vcn;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingVcn
                                      
        SDK_MAGIC_PROPERTIES( "STARTING_VCN_INPUT_BUFFER.$", 0x8, true, 0x783faf40af63f951 );             
        SDK_FIXED_SIZE( starting_vcn_input_buffer_t, 0x8 );             
    };                                
};
#include "magic/starting_vcn_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::starting_vcn_input_buffer_t, 0x8 );
