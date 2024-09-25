#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/restorememoryforhotupdateflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_RESTOREMEMORYFORHOTUPDATEFLAGS]
    // => WDK 10 (NV)
    //
    struct restorememoryforhotupdateflags_t
    {                                      
        // WDK 10                      
        //                             
        _m00 uint1_t  restore_complete;      //{ +0x0000@0  } | .RestoreComplete
        _m01 uint32_t value;                 //{ +0x0000    } | .Value
                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_RESTOREMEMORYFORHOTUPDATEFLAGS.$", 0x0, false, 0xe5f87929d552c88a );                 
        SDK_FIXED_SIZE( restorememoryforhotupdateflags_t, 0x4 );                 
    };                                     
};
#include "magic/restorememoryforhotupdateflags_t.end.hpp"
SDK_VERIFY( struct dxgk::restorememoryforhotupdateflags_t, 0x4 );
