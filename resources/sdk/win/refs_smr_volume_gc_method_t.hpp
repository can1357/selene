#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _REFS_SMR_VOLUME_GC_METHOD]
    //  WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class refs_smr_volume_gc_method_t : int32_t
    {                                               
        compaction =  0x1,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compression = 0x2,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rotation =    0x3,                            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
