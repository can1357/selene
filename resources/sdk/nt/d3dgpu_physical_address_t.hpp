#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dgpu_physical_address_t.start.hpp"
namespace nt
{
    // [struct _D3DGPU_PHYSICAL_ADDRESS]
    // => WDK 10 (NV)
    //
    struct d3dgpu_physical_address_t 
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t segment_id;      //{ +0x0000    } | .SegmentId
        _m01 uint64_t segment_offset;  //{ +0x0008    } | .SegmentOffset
                                     
        SDK_NONVOL_PROPERTIES( "_D3DGPU_PHYSICAL_ADDRESS.$", 0x0, false, 0xfdf382a204e026e3 );               
        SDK_FIXED_SIZE( d3dgpu_physical_address_t, 0x10 );               
    };                               
};
#include "magic/d3dgpu_physical_address_t.end.hpp"
SDK_VERIFY( struct nt::d3dgpu_physical_address_t, 0x10 );
