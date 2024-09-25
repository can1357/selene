#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/patchlocationlist_t.start.hpp"
namespace d3d::ddi
{
    // [struct _D3DDDI_PATCHLOCATIONLIST]
    // => WDK 10 (NV)
    //
    struct patchlocationlist_t          
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t allocation_index;   //{ +0x0000    } | .AllocationIndex
        _m01 uint24_t slot_id;            //{ +0x0004@0  } | .SlotId
        _m02 uint32_t value;              //{ +0x0004    } | .Value
        _m03 uint32_t driver_id;          //{ +0x0008    } | .DriverId
        _m04 uint32_t allocation_offset;  //{ +0x000c    } | .AllocationOffset
        _m05 uint32_t patch_offset;       //{ +0x0010    } | .PatchOffset
        _m06 uint32_t split_offset;       //{ +0x0014    } | .SplitOffset
                                        
        SDK_NONVOL_PROPERTIES( "_D3DDDI_PATCHLOCATIONLIST.$", 0x0, false, 0xb423df93b68ffd28 );                  
        SDK_FIXED_SIZE( patchlocationlist_t, 0x18 );                  
    };                                  
};
#include "magic/patchlocationlist_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::patchlocationlist_t, 0x18 );
