#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_po_calibrated_perfcounter_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PO_CALIBRATED_PERFCOUNTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_po_calibrated_perfcounter_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                               
        _m00 int64_t performance_counter;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PerformanceCounter
                                               
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PO_CALIBRATED_PERFCOUNTER.$", 0x8, true, 0x68474f18ca2c37e2 );                    
        SDK_FIXED_SIZE( perfinfo_po_calibrated_perfcounter_t, 0x8 );                    
    };                                         
};
#include "magic/perfinfo_po_calibrated_perfcounter_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_po_calibrated_perfcounter_t, 0x8 );
