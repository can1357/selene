#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_block_limits_t.start.hpp"
namespace nt
{
    // [struct _READ_BLOCK_LIMITS]
    // => WDK 10 (NV)
    //
    struct read_block_limits_t                         
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 sdk::array<uint8_t, 3> block_maximum_size;  //{ +0x0001    } | .BlockMaximumSize
        _m01 sdk::array<uint8_t, 2> block_minimum_size;  //{ +0x0004    } | .BlockMinimumSize
                                                       
        SDK_NONVOL_PROPERTIES( "_READ_BLOCK_LIMITS.$", 0x0, false, 0xfde54f8e0e86508e );                   
        SDK_FIXED_SIZE( read_block_limits_t, 0x6 );                   
    };                                                 
};
#include "magic/read_block_limits_t.end.hpp"
SDK_VERIFY( struct nt::read_block_limits_t, 0x6 );
