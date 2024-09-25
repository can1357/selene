#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reassign_blocks_t.start.hpp"
namespace nt
{
    // [struct _REASSIGN_BLOCKS]
    // => WDK 10 (NV)
    //
    struct reassign_blocks_t                      
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint16_t                count;         //{ +0x0002    } | .Count
        _m01 sdk::array<uint32_t, 1> block_number;  //{ +0x0004    } | .BlockNumber
                                                  
        SDK_NONVOL_PROPERTIES( "_REASSIGN_BLOCKS.$", 0x0, false, 0x82c9ac3042520aa7 );             
        SDK_FIXED_SIZE( reassign_blocks_t, 0x8 );             
    };                                            
};
#include "magic/reassign_blocks_t.end.hpp"
SDK_VERIFY( struct nt::reassign_blocks_t, 0x8 );
