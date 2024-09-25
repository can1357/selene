#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_data_set_repair_parameters_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DATA_SET_REPAIR_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct device_data_set_repair_parameters_t               
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t                number_of_repair_copies;  //{ +0x0000    } | .NumberOfRepairCopies
        _m01 uint32_t                source_copy;              //{ +0x0004    } | .SourceCopy
        _m02 sdk::array<uint32_t, 1> repair_copies;            //{ +0x0008    } | .RepairCopies
                                                             
        SDK_NONVOL_PROPERTIES( "_DEVICE_DATA_SET_REPAIR_PARAMETERS.$", 0x0, false, 0xc2f6ffddf23e8474 );                        
        SDK_FIXED_SIZE( device_data_set_repair_parameters_t, 0xc );                        
    };                                                       
};
#include "magic/device_data_set_repair_parameters_t.end.hpp"
SDK_VERIFY( struct nt::device_data_set_repair_parameters_t, 0xc );
