#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_manage_data_set_attributes_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_manage_data_set_attributes_output_t
    {                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t size;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t action;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Action
        _m02 uint32_t flags;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t operation_status;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .OperationStatus
        _m04 uint32_t extended_error;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ExtendedError
        _m05 uint32_t target_detailed_error;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TargetDetailedError
        _m06 uint32_t reserved_status;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReservedStatus
        _m07 uint32_t output_block_offset;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .OutputBlockOffset
        _m08 uint32_t output_block_length;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OutputBlockLength
                                                     
        SDK_NONVOL_PROPERTIES( "_DEVICE_MANAGE_DATA_SET_ATTRIBUTES_OUTPUT.$", 0x24, true, 0x661a82a189be912e );                      
        SDK_FIXED_SIZE( device_manage_data_set_attributes_output_t, 0x24 );                      
    };                                               
};
#include "magic/device_manage_data_set_attributes_output_t.end.hpp"
SDK_VERIFY( struct nt::device_manage_data_set_attributes_output_t, 0x24 );
