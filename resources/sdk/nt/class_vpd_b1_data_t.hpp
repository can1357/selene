#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_vpd_b1_data_t.start.hpp"
namespace nt
{
    // [struct _CLASS_VPD_B1_DATA]
    // => WDK 10 (NV)
    //
    struct class_vpd_b1_data_t             
    {                                      
        // WDK 10                          
        //                                 
        _m00 int32_t  command_status;        //{ +0x0000    } | .CommandStatus
        _m01 uint16_t medium_rotation_rate;  //{ +0x0004    } | .MediumRotationRate
        _m02 uint8_t  nominal_form_factor;   //{ +0x0006    } | .NominalFormFactor
        _m03 uint8_t  zoned;                 //{ +0x0007    } | .Zoned
        _m04 uint32_t medium_product_type;   //{ +0x0008    } | .MediumProductType
        _m05 uint32_t depopulation_time;     //{ +0x000c    } | .DepopulationTime
                                           
        SDK_NONVOL_PROPERTIES( "_CLASS_VPD_B1_DATA.$", 0x0, false, 0xa1e38e71f31b0758 );                     
        SDK_FIXED_SIZE( class_vpd_b1_data_t, 0x10 );                     
    };                                     
};
#include "magic/class_vpd_b1_data_t.end.hpp"
SDK_VERIFY( struct nt::class_vpd_b1_data_t, 0x10 );
