#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createprotectedsession_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEPROTECTEDSESSION]
    // => WDK 10 (NV)
    //
    struct createprotectedsession_t                
    {                                              
        // WDK 10                                  
        //                                         
        _m00 uint32_t    h_device;                   //{ +0x0000    } | .hDevice
        _m01 uint32_t    h_sync_object;              //{ +0x0004    } | .hSyncObject
        _m02 const void* p_private_driver_data;      //{ +0x0008    } | .pPrivateDriverData
        _m03 uint32_t    private_driver_data_size;   //{ +0x0010    } | .PrivateDriverDataSize
        _m04 const void* p_private_runtime_data;     //{ +0x0018    } | .pPrivateRuntimeData
        _m05 uint32_t    private_runtime_data_size;  //{ +0x0020    } | .PrivateRuntimeDataSize
        _m06 uint32_t    h_handle;                   //{ +0x0024    } | .hHandle
                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEPROTECTEDSESSION.$", 0x0, false, 0x432e7f72ba239855 );                          
        SDK_FIXED_SIZE( createprotectedsession_t, 0x28 );                          
    };                                             
};
#include "magic/createprotectedsession_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createprotectedsession_t, 0x28 );
