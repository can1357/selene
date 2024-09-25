#pragma once
#include <sdkgen/support_library.hpp>
#include "kdpc_t.hpp"

#include "magic/kentropy_timing_state_t.start.hpp"
namespace nt
{
    // [struct _KENTROPY_TIMING_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kentropy_timing_state_t                             
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                     
        _m00 uint32_t                 entropy_count;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EntropyCount
        _m01 sdk::array<uint32_t, 64> buffer;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Buffer
        _m02 struct nt::kdpc_t        dpc;                       //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .Dpc
        _m03 uint32_t                 last_delivered_buffer;     //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .LastDeliveredBuffer
                                                               
        // Windows 11                                          
        //                                                     
        _m04 void*                    reserved_raw_data_buffer;  //{ +0x0150    } | .ReservedRawDataBuffer
                                                               
        SDK_MAGIC_PROPERTIES( "_KENTROPY_TIMING_STATE.$", 0x150, true, 0x6199d3b3cbf8b47f );                         
        SDK_DYNAMIC_SIZE( kentropy_timing_state_t );                         
    };                                                         
};
#include "magic/kentropy_timing_state_t.end.hpp"
