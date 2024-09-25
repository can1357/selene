#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapteraddress_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADAPTERADDRESS]
    // => WDK 10 (NV)
    //
    struct adapteraddress_t           
    {                                 
        // WDK 10                     
        //                            
        _m00 uint32_t bus_number;       //{ +0x0000    } | .BusNumber
        _m01 uint32_t device_number;    //{ +0x0004    } | .DeviceNumber
        _m02 uint32_t function_number;  //{ +0x0008    } | .FunctionNumber
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTERADDRESS.$", 0x0, false, 0x12ce928381e7dd5f );                
        SDK_FIXED_SIZE( adapteraddress_t, 0xc );                
    };                                
};
#include "magic/adapteraddress_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adapteraddress_t, 0xc );
