#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_read_capacity16_data_t.start.hpp"
namespace nt
{
    // [struct _CLASS_READ_CAPACITY16_DATA]
    // => WDK 10 (NV)
    //
    struct class_read_capacity16_data_t                 
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 int32_t  command_status;                     //{ +0x0000    } | .CommandStatus
        _m01 uint32_t bytes_per_logical_sector;           //{ +0x0004    } | .BytesPerLogicalSector
        _m02 uint32_t bytes_per_physical_sector;          //{ +0x0008    } | .BytesPerPhysicalSector
        _m03 uint32_t bytes_offset_for_sector_alignment;  //{ +0x000c    } | .BytesOffsetForSectorAlignment
        _m04 uint8_t  lb_provisioning_enabled;            //{ +0x0010    } | .LBProvisioningEnabled
        _m05 uint8_t  lb_provisioning_read_zeros;         //{ +0x0011    } | .LBProvisioningReadZeros
                                                        
        SDK_NONVOL_PROPERTIES( "_CLASS_READ_CAPACITY16_DATA.$", 0x0, false, 0xeb36d6d7c3130739 );                                  
        SDK_FIXED_SIZE( class_read_capacity16_data_t, 0x18 );                                  
    };                                                  
};
#include "magic/class_read_capacity16_data_t.end.hpp"
SDK_VERIFY( struct nt::class_read_capacity16_data_t, 0x18 );
