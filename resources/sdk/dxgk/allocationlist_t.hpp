#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/allocationlist_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ALLOCATIONLIST]
    // => WDK 10 (NV)
    //
    struct allocationlist_t                        
    {                                              
        // WDK 10                                  
        //                                         
        _m00 void*    h_device_specific_allocation;  //{ +0x0000    } | .hDeviceSpecificAllocation
        _m01 uint1_t  write_operation;               //{ +0x0008@0  } | .WriteOperation
        _m02 uint5_t  segment_id;                    //{ +0x0008@1  } | .SegmentId
        _m03 int64_t  physical_address;              //{ +0x0010    } | .PhysicalAddress
        _m04 uint64_t virtual_address;               //{ +0x0010    } | .VirtualAddress
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_ALLOCATIONLIST.$", 0x0, false, 0xea954ccb43f2ecbe );                             
        SDK_FIXED_SIZE( allocationlist_t, 0x18 );                             
    };                                             
};
#include "magic/allocationlist_t.end.hpp"
SDK_VERIFY( struct dxgk::allocationlist_t, 0x18 );
