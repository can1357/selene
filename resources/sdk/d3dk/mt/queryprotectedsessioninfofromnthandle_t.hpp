#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryprotectedsessioninfofromnthandle_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE]
    // => WDK 10 (NV)
    //
    struct queryprotectedsessioninfofromnthandle_t 
    {                                              
        // WDK 10                                  
        //                                         
        _m00 void*       h_nt_handle;                //{ +0x0000    } | .hNtHandle
        _m01 const void* p_private_driver_data;      //{ +0x0008    } | .pPrivateDriverData
        _m02 uint32_t    private_driver_data_size;   //{ +0x0010    } | .PrivateDriverDataSize
        _m03 const void* p_private_runtime_data;     //{ +0x0018    } | .pPrivateRuntimeData
        _m04 uint32_t    private_runtime_data_size;  //{ +0x0020    } | .PrivateRuntimeDataSize
                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE.$", 0x0, false, 0xa9b8e58998a57984 );                          
        SDK_FIXED_SIZE( queryprotectedsessioninfofromnthandle_t, 0x28 );                          
    };                                             
};
#include "magic/queryprotectedsessioninfofromnthandle_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryprotectedsessioninfofromnthandle_t, 0x28 );
