#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_vpd_b0_data_t.start.hpp"
namespace nt
{
    // [struct _CLASS_VPD_B0_DATA]
    // => WDK 10 (NV)
    //
    struct class_vpd_b0_data_t                            
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 int32_t  command_status;                       //{ +0x0000    } | .CommandStatus
        _m01 uint32_t max_unmap_lba_count;                  //{ +0x0004    } | .MaxUnmapLbaCount
        _m02 uint32_t max_unmap_block_descr_count;          //{ +0x0008    } | .MaxUnmapBlockDescrCount
        _m03 uint32_t optimal_unmap_granularity;            //{ +0x000c    } | .OptimalUnmapGranularity
        _m04 uint32_t unmap_granularity_alignment;          //{ +0x0010    } | .UnmapGranularityAlignment
        _m05 uint8_t  ugavalid;                             //{ +0x0014    } | .UGAVALID
        _m06 uint16_t optimal_transfer_length_granularity;  //{ +0x0016    } | .OptimalTransferLengthGranularity
        _m07 uint32_t maximum_transfer_length;              //{ +0x0018    } | .MaximumTransferLength
        _m08 uint32_t optimal_transfer_length;              //{ +0x001c    } | .OptimalTransferLength
                                                          
        SDK_NONVOL_PROPERTIES( "_CLASS_VPD_B0_DATA.$", 0x0, false, 0x4985e79534731294 );                                    
        SDK_FIXED_SIZE( class_vpd_b0_data_t, 0x20 );                                    
    };                                                    
};
#include "magic/class_vpd_b0_data_t.end.hpp"
SDK_VERIFY( struct nt::class_vpd_b0_data_t, 0x20 );
