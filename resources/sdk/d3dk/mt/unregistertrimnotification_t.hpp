#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unregistertrimnotification_t.start.hpp"
namespace d3dk::mt
{
    struct trimnotification_t;

    // [struct _D3DKMT_UNREGISTERTRIMNOTIFICATION]
    // => WDK 10 (NV)
    //
    struct unregistertrimnotification_t                     
    {                                                       
        using pfnd3dkmt_trimnotificationcallback_t = sdk::function<void(struct d3dk::mt::trimnotification_t*)>*;         
                                                            
        // WDK 10                                           
        //                                                  
        _m00 void*                                 handle;    //{ +0x0000    } | .Handle
        _m01 pfnd3dkmt_trimnotificationcallback_t  callback;  //{ +0x0008    } | .Callback
                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_UNREGISTERTRIMNOTIFICATION.$", 0x0, false, 0x795d788e7f606377 );         
        SDK_FIXED_SIZE( unregistertrimnotification_t, 0x10 );         
    };                                                      
};
#include "magic/unregistertrimnotification_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::unregistertrimnotification_t, 0x10 );
