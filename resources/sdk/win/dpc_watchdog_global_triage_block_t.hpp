#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dpc_watchdog_global_triage_block_t.start.hpp"
namespace win
{
    // [struct _DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dpc_watchdog_global_triage_block_t     
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t signature;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t revision;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Revision
        _m02 uint16_t size;                         //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Size
        _m03 uint16_t dpc_watchdog_profile_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcWatchdogProfileOffset
        _m04 uint32_t dpc_watchdog_profile_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DpcWatchdogProfileLength
                                                  
        SDK_NONVOL_PROPERTIES( "_DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK.$", 0x10, true, 0xce6d135b90964a35 );                            
        SDK_FIXED_SIZE( dpc_watchdog_global_triage_block_t, 0x10 );                            
    };                                            
};
#include "magic/dpc_watchdog_global_triage_block_t.end.hpp"
SDK_VERIFY( struct win::dpc_watchdog_global_triage_block_t, 0x10 );
