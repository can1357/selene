#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vpci_invalidate_block_output_t.start.hpp"
namespace ndis
{
    // [struct _VPCI_INVALIDATE_BLOCK_OUTPUT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vpci_invalidate_block_output_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t block_mask;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BlockMask
                                         
        SDK_MAGIC_PROPERTIES( "_VPCI_INVALIDATE_BLOCK_OUTPUT.$", 0x8, true, 0x5da23acd2f44e075 );           
        SDK_FIXED_SIZE( vpci_invalidate_block_output_t, 0x8 );           
    };                                   
};
#include "magic/vpci_invalidate_block_output_t.end.hpp"
SDK_VERIFY( struct ndis::vpci_invalidate_block_output_t, 0x8 );
