#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/getprocessdeviceremovalsupport_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT]
    // => WDK 10 (NV)
    //
    struct getprocessdeviceremovalsupport_t 
    {                                       
        // WDK 10                           
        //                                  
        _m00 void*             h_process;     //{ +0x0000    } | .hProcess
        _m01 struct nt::luid_t adapter_luid;  //{ +0x0008    } | .AdapterLuid
        _m02 uint8_t           support;       //{ +0x0010    } | .Support
                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT.$", 0x0, false, 0x3c421122491aca5b );             
        SDK_FIXED_SIZE( getprocessdeviceremovalsupport_t, 0x18 );             
    };                                      
};
#include "magic/getprocessdeviceremovalsupport_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::getprocessdeviceremovalsupport_t, 0x18 );
