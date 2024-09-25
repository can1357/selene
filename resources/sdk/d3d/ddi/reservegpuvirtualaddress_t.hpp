#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dddigpuvirtualaddress_reservation_type_t.hpp"

#include "magic/reservegpuvirtualaddress_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_RESERVEGPUVIRTUALADDRESS]
    // => WDK 10 (NV)
    //
    struct reservegpuvirtualaddress_t                                       
    {                                                                       
        using d3dddigpuvirtualaddress_reservation_type_t = enum nt::d3dddigpuvirtualaddress_reservation_type_t;                   
                                                                            
        // WDK 10                                                           
        //                                                                  
        _m00 uint32_t                                    h_paging_queue;      //{ +0x0000    } | .hPagingQueue
        _m01 uint32_t                                    h_adapter;           //{ +0x0000    } | .hAdapter
        _m02 uint64_t                                    base_address;        //{ +0x0008    } | .BaseAddress
        _m03 uint64_t                                    minimum_address;     //{ +0x0010    } | .MinimumAddress
        _m04 uint64_t                                    maximum_address;     //{ +0x0018    } | .MaximumAddress
        _m05 uint64_t                                    size;                //{ +0x0020    } | .Size
        _m06 d3dddigpuvirtualaddress_reservation_type_t  reservation_type;    //{ +0x0028    } | .ReservationType
        _m07 uint64_t                                    driver_protection;   //{ +0x0030    } | .DriverProtection
        _m08 uint64_t                                    virtual_address;     //{ +0x0038    } | .VirtualAddress
        _m09 uint64_t                                    paging_fence_value;  //{ +0x0040    } | .PagingFenceValue
                                                                            
        SDK_NONVOL_PROPERTIES( "D3DDDI_RESERVEGPUVIRTUALADDRESS.$", 0x0, false, 0x4198f322ba8babd2 );                   
        SDK_FIXED_SIZE( reservegpuvirtualaddress_t, 0x48 );                   
    };                                                                      
};
#include "magic/reservegpuvirtualaddress_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::reservegpuvirtualaddress_t, 0x48 );
