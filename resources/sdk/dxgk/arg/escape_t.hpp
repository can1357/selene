#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/escapeflags_t.hpp"

#include "magic/escape_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_ESCAPE]
    // => WDK 10 (NV)
    //
    struct escape_t                                                  
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 void*                          h_device;                  //{ +0x0000    } | .hDevice
        _m01 struct d3d::ddi::escapeflags_t flags;                     //{ +0x0008    } | .Flags
        _m02 void*                          p_private_driver_data;     //{ +0x0010    } | .pPrivateDriverData
        _m03 uint32_t                       private_driver_data_size;  //{ +0x0018    } | .PrivateDriverDataSize
        _m04 void*                          h_context;                 //{ +0x0020    } | .hContext
        _m05 void*                          h_kmd_process_handle;      //{ +0x0028    } | .hKmdProcessHandle
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_ESCAPE.$", 0x0, false, 0x8a649ce139bea0e8 );                         
        SDK_FIXED_SIZE( escape_t, 0x30 );                            
    };                                                               
};
#include "magic/escape_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::escape_t, 0x30 );
