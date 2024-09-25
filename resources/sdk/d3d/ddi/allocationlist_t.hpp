#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/allocationlist_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_ALLOCATIONLIST]
    // => WDK 10 (NV)
    //
    struct allocationlist_t                  
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t h_allocation;            //{ +0x0000    } | .hAllocation
        _m01 uint1_t  write_operation;         //{ +0x0004@0  } | .WriteOperation
        _m02 uint1_t  do_not_retire_instance;  //{ +0x0004@1  } | .DoNotRetireInstance
        _m03 uint3_t  offer_priority;          //{ +0x0004@2  } | .OfferPriority
        _m04 uint32_t value;                   //{ +0x0004    } | .Value
                                             
        SDK_NONVOL_PROPERTIES( "_D3DDDI_ALLOCATIONLIST.$", 0x0, false, 0x248a56a1992c6288 );                       
        SDK_FIXED_SIZE( allocationlist_t, 0x8 );                       
    };                                       
};
#include "magic/allocationlist_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::allocationlist_t, 0x8 );
