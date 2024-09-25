#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unmap_block_descriptor_t.start.hpp"
namespace nt
{
    // [struct _UNMAP_BLOCK_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct unmap_block_descriptor_t              
    {                                            
        // WDK 10                                
        //                                       
        _m00 sdk::array<uint8_t, 8> starting_lba;  //{ +0x0000    } | .StartingLba
        _m01 sdk::array<uint8_t, 4> lba_count;     //{ +0x0008    } | .LbaCount
                                                 
        SDK_NONVOL_PROPERTIES( "_UNMAP_BLOCK_DESCRIPTOR.$", 0x0, false, 0x1d1a8f30e4be5755 );             
        SDK_FIXED_SIZE( unmap_block_descriptor_t, 0x10 );             
    };                                           
};
#include "magic/unmap_block_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::unmap_block_descriptor_t, 0x10 );
