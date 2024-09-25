#pragma once
#include <sdkgen/support_library.hpp>
#include "device_error_reason_t.hpp"

#include "magic/markdeviceaserror_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_MARKDEVICEASERROR]
    // => WDK 10 (NV)
    //
    struct markdeviceaserror_t                             
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint32_t                             h_device;  //{ +0x0000    } | .hDevice
        _m01 enum d3dk::mt::device_error_reason_t reason;    //{ +0x0004    } | .Reason
                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_MARKDEVICEASERROR.$", 0x0, false, 0xee196ba29a081b21 );         
        SDK_FIXED_SIZE( markdeviceaserror_t, 0x8 );         
    };                                                     
};
#include "magic/markdeviceaserror_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::markdeviceaserror_t, 0x8 );
