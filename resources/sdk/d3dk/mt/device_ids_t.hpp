#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_ids_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DEVICE_IDS]
    // => WDK 10 (NV)
    //
    struct device_ids_t             
    {                               
        // WDK 10                   
        //                          
        _m00 uint32_t vendor_id;      //{ +0x0000    } | .VendorID
        _m01 uint32_t device_id;      //{ +0x0004    } | .DeviceID
        _m02 uint32_t sub_vendor_id;  //{ +0x0008    } | .SubVendorID
        _m03 uint32_t sub_system_id;  //{ +0x000c    } | .SubSystemID
        _m04 uint32_t revision_id;    //{ +0x0010    } | .RevisionID
        _m05 uint32_t bus_type;       //{ +0x0014    } | .BusType
                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DEVICE_IDS.$", 0x0, false, 0xeea9362aab522b22 );              
        SDK_FIXED_SIZE( device_ids_t, 0x18 );              
    };                              
};
#include "magic/device_ids_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::device_ids_t, 0x18 );
