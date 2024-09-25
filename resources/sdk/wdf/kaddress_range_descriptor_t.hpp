#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kaddress_range_descriptor_t.start.hpp"
namespace wdf
{
    struct kaddress_range_t;

    // [struct _KADDRESS_RANGE_DESCRIPTOR]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kaddress_range_descriptor_t                               
    {                                                                
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                           
        _m00 const struct wdf::kaddress_range_t* address_ranges;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AddressRanges
        _m01 uint64_t                            address_range_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddressRangeCount
                                                                     
        SDK_NONVOL_PROPERTIES( "_KADDRESS_RANGE_DESCRIPTOR.$", 0x10, true, 0x6205d3b3d1937ab1 );                    
        SDK_FIXED_SIZE( kaddress_range_descriptor_t, 0x10 );                    
    };                                                               
};
#include "magic/kaddress_range_descriptor_t.end.hpp"
SDK_VERIFY( struct wdf::kaddress_range_descriptor_t, 0x10 );
