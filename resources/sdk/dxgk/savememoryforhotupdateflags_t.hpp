#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/savememoryforhotupdateflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SAVEMEMORYFORHOTUPDATEFLAGS]
    // => WDK 10 (NV)
    //
    struct savememoryforhotupdateflags_t
    {                                   
        // WDK 10                       
        //                              
        _m00 uint1_t  cancel_hot_update;  //{ +0x0000@0  } | .CancelHotUpdate
        _m01 uint32_t value;              //{ +0x0000    } | .Value
                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_SAVEMEMORYFORHOTUPDATEFLAGS.$", 0x0, false, 0x3b0980ed05d04e6d );                  
        SDK_FIXED_SIZE( savememoryforhotupdateflags_t, 0x4 );                  
    };                                  
};
#include "magic/savememoryforhotupdateflags_t.end.hpp"
SDK_VERIFY( struct dxgk::savememoryforhotupdateflags_t, 0x4 );
