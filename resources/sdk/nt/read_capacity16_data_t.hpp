#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_capacity16_data_t.start.hpp"
namespace nt
{
    // [struct _READ_CAPACITY16_DATA]
    // => WDK 10 (NV)
    //
    struct read_capacity16_data_t                   
    {                                               
        // WDK 10                                   
        //                                          
        _m00 int64_t  logical_block_address;          //{ +0x0000    } | .LogicalBlockAddress
        _m01 uint32_t bytes_per_block;                //{ +0x0008    } | .BytesPerBlock
        _m02 uint1_t  protection_enable;              //{ +0x000c@0  } | .ProtectionEnable
        _m03 uint3_t  protection_type;                //{ +0x000c@1  } | .ProtectionType
        _m04 uint2_t  rc_basis;                       //{ +0x000c@4  } | .RcBasis
        _m05 uint4_t  logical_per_physical_exponent;  //{ +0x000d@0  } | .LogicalPerPhysicalExponent
        _m06 uint4_t  protection_info_exponent;       //{ +0x000d@4  } | .ProtectionInfoExponent
        _m07 uint6_t  lowest_aligned_block_msb;       //{ +0x000e@0  } | .LowestAlignedBlock_MSB
        _m08 uint1_t  lbprz;                          //{ +0x000e@6  } | .LBPRZ
        _m09 uint1_t  lbpme;                          //{ +0x000e@7  } | .LBPME
        _m10 uint8_t  lowest_aligned_block_lsb;       //{ +0x000f    } | .LowestAlignedBlock_LSB
                                                    
        SDK_NONVOL_PROPERTIES( "_READ_CAPACITY16_DATA.$", 0x0, false, 0x97aba46c0b734239 );                              
        SDK_FIXED_SIZE( read_capacity16_data_t, 0x20 );                              
    };                                              
};
#include "magic/read_capacity16_data_t.end.hpp"
SDK_VERIFY( struct nt::read_capacity16_data_t, 0x20 );
