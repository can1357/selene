#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_data_set_scrub_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DATA_SET_SCRUB_OUTPUT]
    // => WDK 10 (NV)
    //
    struct device_data_set_scrub_output_t
    {                                    
        // WDK 10                     
        //                            
        _m00 uint64_t bytes_processed;     //{ +0x0000    } | .BytesProcessed
        _m01 uint64_t bytes_repaired;      //{ +0x0008    } | .BytesRepaired
        _m02 uint64_t bytes_failed;        //{ +0x0010    } | .BytesFailed
                                         
        SDK_NONVOL_PROPERTIES( "_DEVICE_DATA_SET_SCRUB_OUTPUT.$", 0x0, false, 0x9d7afef82da88e6a );                
        SDK_FIXED_SIZE( device_data_set_scrub_output_t, 0x18 );                
    };                                   
};
#include "magic/device_data_set_scrub_output_t.end.hpp"
SDK_VERIFY( struct nt::device_data_set_scrub_output_t, 0x18 );
