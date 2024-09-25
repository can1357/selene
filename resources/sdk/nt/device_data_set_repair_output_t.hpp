#pragma once
#include <sdkgen/support_library.hpp>
#include "device_data_set_range_t.hpp"

#include "magic/device_data_set_repair_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DATA_SET_REPAIR_OUTPUT]
    // => WDK 10 (NV)
    //
    struct device_data_set_repair_output_t                    
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 struct nt::device_data_set_range_t parity_extent;  //{ +0x0000    } | .ParityExtent
                                                              
        SDK_NONVOL_PROPERTIES( "_DEVICE_DATA_SET_REPAIR_OUTPUT.$", 0x0, false, 0xaa9d37d865ebef6f );              
        SDK_FIXED_SIZE( device_data_set_repair_output_t, 0x10 );              
    };                                                        
};
#include "magic/device_data_set_repair_output_t.end.hpp"
SDK_VERIFY( struct nt::device_data_set_repair_output_t, 0x10 );
