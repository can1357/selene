#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kcore_control_block_t.start.hpp"
namespace nt
{
    struct kprcb_t;

    // [struct _KCORE_CONTROL_BLOCK]
    // => Windows 11
    //
    struct kcore_control_block_t                                 
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 uint8_t                            processor_count;   //{ +0x0000    } | .ProcessorCount
        _m01 uint8_t                            scan_start_index;  //{ +0x0001    } | .ScanStartIndex
        _m02 sdk::array<struct nt::kprcb_t*, 8> prcbs;             //{ +0x0008    } | .Prcbs
                                                                 
        SDK_MAGIC_PROPERTIES( "_KCORE_CONTROL_BLOCK.$", 0x0, false, 0xfde8b3b19ca14d59 );                 
        SDK_FIXED_SIZE( kcore_control_block_t, 0x48 );                 
    };                                                           
};
#include "magic/kcore_control_block_t.end.hpp"
SDK_VERIFY( struct nt::kcore_control_block_t, 0x48 );
