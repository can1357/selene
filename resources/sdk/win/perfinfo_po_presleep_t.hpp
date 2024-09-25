#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_po_presleep_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PO_PRESLEEP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_po_presleep_t          
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                 
        _m00 int64_t performance_counter;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PerformanceCounter
        _m01 int64_t performance_frequency;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PerformanceFrequency
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PO_PRESLEEP.$", 0x10, true, 0x354df724c23de933 );                      
        SDK_FIXED_SIZE( perfinfo_po_presleep_t, 0x10 );                      
    };                                     
};
#include "magic/perfinfo_po_presleep_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_po_presleep_t, 0x10 );
