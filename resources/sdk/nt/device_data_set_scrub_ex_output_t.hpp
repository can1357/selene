#pragma once
#include <sdkgen/support_library.hpp>
#include "device_data_set_range_t.hpp"

#include "magic/device_data_set_scrub_ex_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DATA_SET_SCRUB_EX_OUTPUT]
    // => WDK 10 (NV)
    //
    struct device_data_set_scrub_ex_output_t                    
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 uint64_t                           bytes_processed;  //{ +0x0000    } | .BytesProcessed
        _m01 uint64_t                           bytes_repaired;   //{ +0x0008    } | .BytesRepaired
        _m02 uint64_t                           bytes_failed;     //{ +0x0010    } | .BytesFailed
        _m03 struct nt::device_data_set_range_t parity_extent;    //{ +0x0018    } | .ParityExtent
                                                                
        SDK_NONVOL_PROPERTIES( "_DEVICE_DATA_SET_SCRUB_EX_OUTPUT.$", 0x0, false, 0xb8a6f0779bb206be );                
        SDK_FIXED_SIZE( device_data_set_scrub_ex_output_t, 0x28 );                
    };                                                          
};
#include "magic/device_data_set_scrub_ex_output_t.end.hpp"
SDK_VERIFY( struct nt::device_data_set_scrub_ex_output_t, 0x28 );
