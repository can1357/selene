#pragma once
#include <sdkgen/support_library.hpp>
#include "diagnostic_header_t.hpp"

#include "magic/diagnostic_synclock_enablesync_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC]
    // => WDK 10 (NV)
    //
    struct diagnostic_synclock_enablesync_t                         
    {                                                               
        struct u0_sync_lock_enable_sync_t                           
        {                                                           
            // WDK 10                                               
            //                                                      
            _m01 uint1_t during_set_timing;                           //{ +0x0000@0  } | .DuringSetTiming
            _m02 uint1_t enable_sync_start;                           //{ +0x0000@1  } | .EnableSyncStart
            _m03 uint1_t enable_sync_end;                             //{ +0x0000@2  } | .EnableSyncEnd
                                                                    
            SDK_NONVOL_PROPERTIES( "_DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC.SyncLockEnableSync.$", 0x0, false, 0xc280d409cfb0bd1a );                                        
            SDK_FIXED_SIZE( u0_sync_lock_enable_sync_t, 0x4 );                                        
        };                                                          
                                                                    
        // WDK 10                                                   
        //                                                          
        _m00 struct dxgk::diagnostic_header_t header;                 //{ +0x0000    } | .Header
        _m04 u0_sync_lock_enable_sync_t       sync_lock_enable_sync;  //{ +0x0014    } | .SyncLockEnableSync
        _m05 uint32_t                         value;                  //{ +0x0014    } | .Value
                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAGNOSTIC_SYNCLOCK_ENABLESYNC.$", 0x0, false, 0x96b5d14442bc8154 );                      
        SDK_FIXED_SIZE( diagnostic_synclock_enablesync_t, 0x18 );                      
    };                                                              
};
#include "magic/diagnostic_synclock_enablesync_t.end.hpp"
SDK_VERIFY( struct dxgk::diagnostic_synclock_enablesync_t::u0_sync_lock_enable_sync_t, 0x4 );
SDK_VERIFY( struct dxgk::diagnostic_synclock_enablesync_t, 0x18 );
