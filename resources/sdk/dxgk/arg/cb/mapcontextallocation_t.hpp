#pragma once
#include <sdkgen/support_library.hpp>
#include "../../../nt/d3dddigpuvirtualaddress_protection_type_t.hpp"

#include "magic/mapcontextallocation_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_MAPCONTEXTALLOCATION]
    // => WDK 10 (NV)
    //
    struct mapcontextallocation_t            
    {                                        
        using protection_t = struct nt::d3dddigpuvirtualaddress_protection_type_t;                  
                                             
        // WDK 10                            
        //                                   
        _m00 uint64_t      base_address;       //{ +0x0000    } | .BaseAddress
        _m01 uint64_t      minimum_address;    //{ +0x0008    } | .MinimumAddress
        _m02 uint64_t      maximum_address;    //{ +0x0010    } | .MaximumAddress
        _m03 void*         h_allocation;       //{ +0x0018    } | .hAllocation
        _m04 uint64_t      offset_in_pages;    //{ +0x0020    } | .OffsetInPages
        _m05 uint64_t      size_in_pages;      //{ +0x0028    } | .SizeInPages
        _m06 protection_t  protection;         //{ +0x0030    } | .Protection
        _m07 uint64_t      driver_protection;  //{ +0x0038    } | .DriverProtection
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_MAPCONTEXTALLOCATION.$", 0x0, false, 0x37a55629c9fdc3ca );                  
        SDK_FIXED_SIZE( mapcontextallocation_t, 0x40 );                  
    };                                       
};
#include "magic/mapcontextallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::mapcontextallocation_t, 0x40 );
