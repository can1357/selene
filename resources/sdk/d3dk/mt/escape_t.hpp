#pragma once
#include <sdkgen/support_library.hpp>
#include "escapetype_t.hpp"
#include "../../d3d/ddi/escapeflags_t.hpp"

#include "magic/escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ESCAPE]
    // => WDK 10 (NV)
    //
    struct escape_t                                                  
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                       adapter_handle;            //{ +0x0000    } | .AdapterHandle
        _m01 uint32_t                       device_handle;             //{ +0x0004    } | .DeviceHandle
        _m02 enum d3dk::mt::escapetype_t    type;                      //{ +0x0008    } | .Type
        _m03 struct d3d::ddi::escapeflags_t flags;                     //{ +0x000c    } | .Flags
        _m04 void*                          private_driver_data;       //{ +0x0010    } | .PrivateDriverData
        _m05 uint32_t                       private_driver_data_size;  //{ +0x0018    } | .PrivateDriverDataSize
        _m06 uint32_t                       context_handle;            //{ +0x001c    } | .ContextHandle
                                                                     
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ESCAPE.$", 0x0, false, 0x6a0c7e9ffb25e487 );                         
        SDK_FIXED_SIZE( escape_t, 0x20 );                            
    };                                                               
};
#include "magic/escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::escape_t, 0x20 );
