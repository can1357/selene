#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/formatted_capacity_descriptor_t.start.hpp"
namespace nt
{
    // [struct _FORMATTED_CAPACITY_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct formatted_capacity_descriptor_t           
    {                                                
        // WDK 10                                    
        //                                           
        _m00 sdk::array<uint8_t, 4> number_of_blocks;  //{ +0x0000    } | .NumberOfBlocks
        _m01 uint1_t                maximum;           //{ +0x0004@0  } | .Maximum
        _m02 uint1_t                valid;             //{ +0x0004@1  } | .Valid
        _m03 uint6_t                format_type;       //{ +0x0004@2  } | .FormatType
        _m04 sdk::array<uint8_t, 3> block_length;      //{ +0x0005    } | .BlockLength
                                                     
        SDK_NONVOL_PROPERTIES( "_FORMATTED_CAPACITY_DESCRIPTOR.$", 0x0, false, 0x16df616bf4552831 );                 
        SDK_FIXED_SIZE( formatted_capacity_descriptor_t, 0x8 );                 
    };                                               
};
#include "magic/formatted_capacity_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::formatted_capacity_descriptor_t, 0x8 );
