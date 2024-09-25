#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/express_correctable_error_status_t.start.hpp"
namespace pci
{
    // [union _PCI_EXPRESS_CORRECTABLE_ERROR_STATUS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union express_correctable_error_status_t   
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint1_t  receiver_error;            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ReceiverError
        _m01 uint1_t  bad_tlp;                   //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .BadTLP
        _m02 uint1_t  bad_dllp;                  //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .BadDLLP
        _m03 uint1_t  replay_num_rollover;       //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .ReplayNumRollover
        _m04 uint1_t  replay_timer_timeout;      //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .ReplayTimerTimeout
        _m05 uint1_t  advisory_non_fatal_error;  //{ +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 +0x0000@13 } | .AdvisoryNonFatalError
        _m06 uint1_t  corrected_internal_error;  //{ +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 +0x0000@14 } | .CorrectedInternalError
        _m07 uint1_t  header_log_overflow;       //{ +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 +0x0000@15 } | .HeaderLogOverflow
        _m08 uint32_t as_ulong;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                               
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_CORRECTABLE_ERROR_STATUS.$", 0x4, true, 0x516f586b9b80d057 );                         
        SDK_FIXED_SIZE( express_correctable_error_status_t, 0x4 );                         
    };                                         
};
#include "magic/express_correctable_error_status_t.end.hpp"
SDK_VERIFY( union pci::express_correctable_error_status_t, 0x4 );
