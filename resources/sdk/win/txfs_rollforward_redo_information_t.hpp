#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_rollforward_redo_information_t.start.hpp"
namespace win
{
    // [struct _TXFS_ROLLFORWARD_REDO_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_rollforward_redo_information_t
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 int64_t  last_virtual_clock;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LastVirtualClock
        _m01 uint64_t last_redo_lsn;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .LastRedoLsn
        _m02 uint64_t highest_recovery_lsn;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .HighestRecoveryLsn
        _m03 uint32_t flags;                    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                              
        SDK_NONVOL_PROPERTIES( "_TXFS_ROLLFORWARD_REDO_INFORMATION.$", 0x20, true, 0x16b2cc6ca080c2ba );                     
        SDK_FIXED_SIZE( txfs_rollforward_redo_information_t, 0x20 );                     
    };                                        
};
#include "magic/txfs_rollforward_redo_information_t.end.hpp"
SDK_VERIFY( struct win::txfs_rollforward_redo_information_t, 0x20 );
