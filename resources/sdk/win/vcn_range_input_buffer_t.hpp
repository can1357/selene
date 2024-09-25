#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vcn_range_input_buffer_t.start.hpp"
namespace win
{
    // [struct _VCN_RANGE_INPUT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vcn_range_input_buffer_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 int64_t starting_vcn;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingVcn
        _m01 int64_t cluster_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ClusterCount
                                   
        SDK_NONVOL_PROPERTIES( "_VCN_RANGE_INPUT_BUFFER.$", 0x10, true, 0x2be1d482cc0dd949 );              
        SDK_FIXED_SIZE( vcn_range_input_buffer_t, 0x10 );              
    };                             
};
#include "magic/vcn_range_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::vcn_range_input_buffer_t, 0x10 );
