#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_dsm_lost_query_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_LOST_QUERY_OUTPUT]
    // => WDK 10 (NV)
    //
    struct device_dsm_lost_query_output_t           
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t                version;         //{ +0x0000    } | .Version
        _m01 uint32_t                size;            //{ +0x0004    } | .Size
        _m02 uint64_t                alignment;       //{ +0x0008    } | .Alignment
        _m03 uint32_t                number_of_bits;  //{ +0x0010    } | .NumberOfBits
        _m04 sdk::array<uint32_t, 1> bit_map;         //{ +0x0014    } | .BitMap
                                                    
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_LOST_QUERY_OUTPUT.$", 0x0, false, 0xf161a5f378b88735 );               
        SDK_FIXED_SIZE( device_dsm_lost_query_output_t, 0x18 );               
    };                                              
};
#include "magic/device_dsm_lost_query_output_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_lost_query_output_t, 0x18 );
