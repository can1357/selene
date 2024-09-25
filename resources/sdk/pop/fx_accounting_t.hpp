#pragma once
#include <sdkgen/support_library.hpp>
#include "fx_accounting_mode_t.hpp"
#include "fx_active_time_accounting_t.hpp"

#include "magic/fx_accounting_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_accounting_t                                                              
    {                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                              
        _m00 uint64_t                                lock;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 uint8_t                                 active;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Active
        _m02 uint32_t                                drips_required_state;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DripsRequiredState
        _m03 int64_t                                 active_stamp;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ActiveStamp
                                                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                              
        _m04 struct pop::fx_active_time_accounting_t cs_active_time_accounting;           //{ +0x0020    +0x0020    +0x0020    } | .CsActiveTimeAccounting
        _m05 struct pop::fx_active_time_accounting_t cs_critical_active_time_accounting;  //{ +0x0080    +0x0080    +0x0080    } | .CsCriticalActiveTimeAccounting
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                   
        //                                                                              
        _m06 int32_t                                 level;                               //{ +0x0010    +0x0010    +0x0010    } | .Level
                                                                                        
        // Windows 10 v1607                                                             
        //                                                                              
        _m07 uint64_t                                cs_active_time;                      //{ +0x0020    } | .CsActiveTime
        _m08 int64_t                                 critical_active_time;                //{ +0x0028    } | .CriticalActiveTime
                                                                                        
        // Windows 11                                                                   
        //                                                                              
        _m09 enum pop::fx_accounting_mode_t          accounting_mode;                     //{ +0x0010    } | .AccountingMode
                                                                                        
        SDK_MAGIC_PROPERTIES( "_POP_FX_ACCOUNTING.$", 0xe0, true, 0xb51c2985174538d9 );                                   
        SDK_DYNAMIC_SIZE( fx_accounting_t );                                            
    };                                                                                  
};
#include "magic/fx_accounting_t.end.hpp"
