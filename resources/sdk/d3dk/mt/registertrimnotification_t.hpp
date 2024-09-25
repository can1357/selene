#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"

#include "magic/registertrimnotification_t.start.hpp"
namespace d3dk::mt
{
    struct trimnotification_t;

    // [struct _D3DKMT_REGISTERTRIMNOTIFICATION]
    // => WDK 10 (NV)
    //
    struct registertrimnotification_t                           
    {                                                           
        using pfnd3dkmt_trimnotificationcallback_t = sdk::function<void(struct d3dk::mt::trimnotification_t*)>*;             
                                                                
        // WDK 10                                               
        //                                                      
        _m00 struct nt::luid_t                     adapter_luid;  //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t                              h_device;      //{ +0x0008    } | .hDevice
        _m02 pfnd3dkmt_trimnotificationcallback_t  callback;      //{ +0x0010    } | .Callback
        _m03 void*                                 context;       //{ +0x0018    } | .Context
        _m04 void*                                 handle;        //{ +0x0020    } | .Handle
                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_REGISTERTRIMNOTIFICATION.$", 0x0, false, 0xfe2fee1af9ca4d5f );             
        SDK_FIXED_SIZE( registertrimnotification_t, 0x28 );             
    };                                                          
};
#include "magic/registertrimnotification_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::registertrimnotification_t, 0x28 );
