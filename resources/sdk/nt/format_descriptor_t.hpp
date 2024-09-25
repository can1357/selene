#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/format_descriptor_t.start.hpp"
namespace nt
{
    // [struct _FORMAT_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct format_descriptor_t                       
    {                                                
        // WDK 10                                    
        //                                           
        _m00 sdk::array<uint8_t, 4> number_of_blocks;  //{ +0x0000    } | .NumberOfBlocks
        _m01 uint2_t                format_sub_type;   //{ +0x0004@0  } | .FormatSubType
        _m02 uint6_t                format_type;       //{ +0x0004@2  } | .FormatType
        _m03 sdk::array<uint8_t, 3> block_length;      //{ +0x0005    } | .BlockLength
                                                     
        SDK_NONVOL_PROPERTIES( "_FORMAT_DESCRIPTOR.$", 0x0, false, 0x1160e1d31d3d37e3 );                 
        SDK_FIXED_SIZE( format_descriptor_t, 0x8 );                 
    };                                               
};
#include "magic/format_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::format_descriptor_t, 0x8 );
