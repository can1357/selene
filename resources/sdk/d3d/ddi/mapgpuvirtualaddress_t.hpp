#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddigpuvirtualaddress_protection_type_t.hpp"

#include "magic/mapgpuvirtualaddress_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_MAPGPUVIRTUALADDRESS]
    // => WDK 10 (NV)
    //
    struct mapgpuvirtualaddress_t             
    {                                         
        using protection_t = struct nt::d3dddigpuvirtualaddress_protection_type_t;                   
                                              
        // WDK 10                             
        //                                    
        _m00 uint32_t      h_paging_queue;      //{ +0x0000    } | .hPagingQueue
        _m01 uint64_t      base_address;        //{ +0x0008    } | .BaseAddress
        _m02 uint64_t      minimum_address;     //{ +0x0010    } | .MinimumAddress
        _m03 uint64_t      maximum_address;     //{ +0x0018    } | .MaximumAddress
        _m04 uint32_t      h_allocation;        //{ +0x0020    } | .hAllocation
        _m05 uint64_t      offset_in_pages;     //{ +0x0028    } | .OffsetInPages
        _m06 uint64_t      size_in_pages;       //{ +0x0030    } | .SizeInPages
        _m07 protection_t  protection;          //{ +0x0038    } | .Protection
        _m08 uint64_t      driver_protection;   //{ +0x0040    } | .DriverProtection
        _m09 uint64_t      virtual_address;     //{ +0x0058    } | .VirtualAddress
        _m10 uint64_t      paging_fence_value;  //{ +0x0060    } | .PagingFenceValue
                                              
        SDK_NONVOL_PROPERTIES( "D3DDDI_MAPGPUVIRTUALADDRESS.$", 0x0, false, 0x2b071f3bd51a188d );                   
        SDK_FIXED_SIZE( mapgpuvirtualaddress_t, 0x68 );                   
    };                                        
};
#include "magic/mapgpuvirtualaddress_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::mapgpuvirtualaddress_t, 0x68 );
