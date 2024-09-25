#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_vpd_ecop_block_device_rod_limits_t.start.hpp"
namespace nt
{
    // [struct _CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS]
    // => WDK 10 (NV)
    //
    struct class_vpd_ecop_block_device_rod_limits_t
    {                                              
        // WDK 10                                 
        //                                        
        _m00 int32_t  command_status;                //{ +0x0000    } | .CommandStatus
        _m01 uint16_t maximum_range_descriptors;     //{ +0x0004    } | .MaximumRangeDescriptors
        _m02 uint8_t  restricted;                    //{ +0x0006    } | .Restricted
        _m03 uint32_t maximum_inactivity_timer;      //{ +0x0008    } | .MaximumInactivityTimer
        _m04 uint32_t default_inactivity_timer;      //{ +0x000c    } | .DefaultInactivityTimer
        _m05 uint64_t maximum_token_transfer_size;   //{ +0x0010    } | .MaximumTokenTransferSize
        _m06 uint64_t optimal_transfer_count;        //{ +0x0018    } | .OptimalTransferCount
                                                   
        SDK_NONVOL_PROPERTIES( "_CLASS_VPD_ECOP_BLOCK_DEVICE_ROD_LIMITS.$", 0x0, false, 0x73a96a66faca0dd );                            
        SDK_FIXED_SIZE( class_vpd_ecop_block_device_rod_limits_t, 0x20 );                            
    };                                             
};
#include "magic/class_vpd_ecop_block_device_rod_limits_t.end.hpp"
SDK_VERIFY( struct nt::class_vpd_ecop_block_device_rod_limits_t, 0x20 );
