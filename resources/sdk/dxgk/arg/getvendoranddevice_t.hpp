#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getvendoranddevice_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETVENDORANDDEVICE]
    // => WDK 10 (NV)
    //
    struct getvendoranddevice_t              
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t virtual_function_index;  //{ +0x0000    } | .VirtualFunctionIndex
        _m01 uint16_t vendor_id;               //{ +0x0004    } | .VendorId
        _m02 uint16_t device_id;               //{ +0x0006    } | .DeviceId
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETVENDORANDDEVICE.$", 0x0, false, 0x8bce3151dcf86854 );                       
        SDK_FIXED_SIZE( getvendoranddevice_t, 0x8 );                       
    };                                       
};
#include "magic/getvendoranddevice_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getvendoranddevice_t, 0x8 );
