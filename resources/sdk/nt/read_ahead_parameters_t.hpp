#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_ahead_parameters_t.start.hpp"
namespace nt
{
    // [struct _READ_AHEAD_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct read_ahead_parameters_t                 
    {                                              
        // WDK 10                                  
        //                                         
        _m00 int16_t  node_byte_size;                //{ +0x0000    } | .NodeByteSize
        _m01 uint32_t granularity;                   //{ +0x0004    } | .Granularity
        _m02 uint32_t pipelined_request_size;        //{ +0x0008    } | .PipelinedRequestSize
        _m03 uint32_t read_ahead_growth_percentage;  //{ +0x000c    } | .ReadAheadGrowthPercentage
                                                   
        SDK_NONVOL_PROPERTIES( "_READ_AHEAD_PARAMETERS.$", 0x0, false, 0x31219ee6224e7d3d );                             
        SDK_FIXED_SIZE( read_ahead_parameters_t, 0x10 );                             
    };                                             
};
#include "magic/read_ahead_parameters_t.end.hpp"
SDK_VERIFY( struct nt::read_ahead_parameters_t, 0x10 );
