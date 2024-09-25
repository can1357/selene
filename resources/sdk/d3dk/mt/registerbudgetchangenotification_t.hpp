#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/registerbudgetchangenotification_t.start.hpp"
namespace d3dk::mt
{
    struct budgetchangenotification_t;

    // [struct _D3DKMT_REGISTERBUDGETCHANGENOTIFICATION]
    // => WDK 10 (NV)
    //
    struct registerbudgetchangenotification_t                       
    {                                                               
        using pfnd3dkmt_budgetchangenotificationcallback_t = sdk::function<void(struct d3dk::mt::budgetchangenotification_t*)>*;         
                                                                    
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                                      h_device;  //{ +0x0000    } | .hDevice
        _m01 pfnd3dkmt_budgetchangenotificationcallback_t  callback;  //{ +0x0008    } | .Callback
        _m02 void*                                         context;   //{ +0x0010    } | .Context
        _m03 void*                                         handle;    //{ +0x0018    } | .Handle
                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_REGISTERBUDGETCHANGENOTIFICATION.$", 0x0, false, 0x5020c8f4213207a7 );         
        SDK_FIXED_SIZE( registerbudgetchangenotification_t, 0x20 );         
    };                                                              
};
#include "magic/registerbudgetchangenotification_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::registerbudgetchangenotification_t, 0x20 );
