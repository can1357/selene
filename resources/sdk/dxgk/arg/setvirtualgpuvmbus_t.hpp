#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setvirtualgpuvmbus_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIRTUALGPUVMBUS]
    // => WDK 10 (NV)
    //
    struct setvirtualgpuvmbus_t         
    {                                   
        // WDK 10                       
        //                              
        _m00 uint32_t virtual_gpu_index;  //{ +0x0000    } | .VirtualGpuIndex
        _m01 void*    vm_bus_handle;      //{ +0x0008    } | .VmBusHandle
                                        
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIRTUALGPUVMBUS.$", 0x0, false, 0x7497f82a2a619e47 );                  
        SDK_FIXED_SIZE( setvirtualgpuvmbus_t, 0x10 );                  
    };                                  
};
#include "magic/setvirtualgpuvmbus_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvirtualgpuvmbus_t, 0x10 );
