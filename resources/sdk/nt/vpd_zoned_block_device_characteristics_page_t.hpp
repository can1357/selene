#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpd_zoned_block_device_characteristics_page_t.start.hpp"
namespace nt
{
    // [struct _VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE]
    // => WDK 10 (NV)
    //
    struct vpd_zoned_block_device_characteristics_page_t                                                       
    {                                                                                                          
        // WDK 10                                                                                              
        //                                                                                                     
        _m00 uint5_t                device_type;                                                                 //{ +0x0000@0  } | .DeviceType
        _m01 uint3_t                device_type_qualifier;                                                       //{ +0x0000@5  } | .DeviceTypeQualifier
        _m02 uint8_t                page_code;                                                                   //{ +0x0001    } | .PageCode
        _m03 sdk::array<uint8_t, 2> page_length;                                                                 //{ +0x0002    } | .PageLength
        _m04 uint1_t                urswrz;                                                                      //{ +0x0004@0  } | .URSWRZ
        _m05 sdk::array<uint8_t, 4> optimal_number_of_open_sequential_write_preferred_zone;                      //{ +0x0008    } | .OptimalNumberOfOpenSequentialWritePreferredZone
        _m06 sdk::array<uint8_t, 4> optimal_number_of_non_sequentially_written_sequential_write_preferred_zone;  //{ +0x000c    } | .OptimalNumberOfNonSequentiallyWrittenSequentialWritePreferredZone
        _m07 sdk::array<uint8_t, 4> max_number_of_open_sequential_write_required_zone;                           //{ +0x0010    } | .MaxNumberOfOpenSequentialWriteRequiredZone
                                                                                                               
        SDK_NONVOL_PROPERTIES( "_VPD_ZONED_BLOCK_DEVICE_CHARACTERISTICS_PAGE.$", 0x0, false, 0x4a6f6c773e4011a5 );                                                                           
        SDK_FIXED_SIZE( vpd_zoned_block_device_characteristics_page_t, 0x40 );                                                                           
    };                                                                                                         
};
#include "magic/vpd_zoned_block_device_characteristics_page_t.end.hpp"
SDK_VERIFY( struct nt::vpd_zoned_block_device_characteristics_page_t, 0x40 );
