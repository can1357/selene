#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diagtype_progressions_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAGTYPE_PROGRESSIONS]
    // => WDK 10 (NV)
    //
    struct diagtype_progressions_t          
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint1_t  sync_lock_enable_sync;  //{ +0x0000@0  } | .SyncLockEnableSync
        _m01 uint32_t value;                  //{ +0x0000    } | .Value
                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAGTYPE_PROGRESSIONS.$", 0x0, false, 0x6727f3659f6f1723 );                      
        SDK_FIXED_SIZE( diagtype_progressions_t, 0x4 );                      
    };                                      
};
#include "magic/diagtype_progressions_t.end.hpp"
SDK_VERIFY( struct dxgk::diagtype_progressions_t, 0x4 );
