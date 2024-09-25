#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reassign_blocks_ex_t.start.hpp"
namespace nt
{
    // [struct _REASSIGN_BLOCKS_EX]
    // => WDK 10 (NV)
    //
    struct reassign_blocks_ex_t                  
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint16_t               count;         //{ +0x0002    } | .Count
        _m01 sdk::array<int64_t, 1> block_number;  //{ +0x0004    } | .BlockNumber
                                                 
        SDK_NONVOL_PROPERTIES( "_REASSIGN_BLOCKS_EX.$", 0x0, false, 0xefecc63d305dabc6 );             
        SDK_FIXED_SIZE( reassign_blocks_ex_t, 0xc );             
    };                                           
};
#include "magic/reassign_blocks_ex_t.end.hpp"
SDK_VERIFY( struct nt::reassign_blocks_ex_t, 0xc );
