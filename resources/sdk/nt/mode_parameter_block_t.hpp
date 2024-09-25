#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_parameter_block_t.start.hpp"
namespace nt
{
    // [struct _MODE_PARAMETER_BLOCK]
    // => WDK 10 (NV)
    //
    struct mode_parameter_block_t                    
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint8_t                density_code;      //{ +0x0000    } | .DensityCode
        _m01 sdk::array<uint8_t, 3> number_of_blocks;  //{ +0x0001    } | .NumberOfBlocks
        _m02 sdk::array<uint8_t, 3> block_length;      //{ +0x0005    } | .BlockLength
                                                     
        SDK_NONVOL_PROPERTIES( "_MODE_PARAMETER_BLOCK.$", 0x0, false, 0xecf69e21a3db3e46 );                 
        SDK_FIXED_SIZE( mode_parameter_block_t, 0x8 );                 
    };                                               
};
#include "magic/mode_parameter_block_t.end.hpp"
SDK_VERIFY( struct nt::mode_parameter_block_t, 0x8 );
