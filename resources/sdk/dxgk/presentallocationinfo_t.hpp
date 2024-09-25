#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/presentallocationinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PRESENTALLOCATIONINFO]
    // => WDK 10 (NV)
    //
    struct presentallocationinfo_t                 
    {                                              
        // WDK 10                                  
        //                                         
        _m00 void*    h_device_specific_allocation;  //{ +0x0000    } | .hDeviceSpecificAllocation
        _m01 uint64_t allocation_virtual_address;    //{ +0x0008    } | .AllocationVirtualAddress
        _m02 int64_t  physical_address;              //{ +0x0010    } | .PhysicalAddress
        _m03 uint16_t segment_id;                    //{ +0x0018    } | .SegmentId
        _m04 uint16_t physical_adapter_index;        //{ +0x001a    } | .PhysicalAdapterIndex
                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_PRESENTALLOCATIONINFO.$", 0x0, false, 0xd4433c44f9e0b4a6 );                             
        SDK_FIXED_SIZE( presentallocationinfo_t, 0x20 );                             
    };                                             
};
#include "magic/presentallocationinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::presentallocationinfo_t, 0x20 );
