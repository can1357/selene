#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gic_redistributor_t.start.hpp"
namespace nt
{
    // [struct _GIC_REDISTRIBUTOR]
    // => Windows 11
    //
    struct gic_redistributor_t                     
    {                                              
        // Windows 11                              
        //                                         
        _m00 uint8_t  type;                          //{ +0x0000    } | .Type
        _m01 uint8_t  length;                        //{ +0x0001    } | .Length
        _m02 uint64_t discovery_range_base_address;  //{ +0x0004    } | .DiscoveryRangeBaseAddress
        _m03 uint32_t discovery_range_length;        //{ +0x000c    } | .DiscoveryRangeLength
                                                   
        SDK_MAGIC_PROPERTIES( "_GIC_REDISTRIBUTOR.$", 0x0, false, 0x523aee6f57cf88a8 );                             
        SDK_FIXED_SIZE( gic_redistributor_t, 0x10 );                             
    };                                             
};
#include "magic/gic_redistributor_t.end.hpp"
SDK_VERIFY( struct nt::gic_redistributor_t, 0x10 );
