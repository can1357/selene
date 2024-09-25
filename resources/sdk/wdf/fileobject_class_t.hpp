#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_FILEOBJECT_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class fileobject_class_t : int32_t        
    {                                              
        invalid =                    0x0,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_required =               0x1,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_can_use_fs_context =     0x2,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_can_use_fs_context2 =    0x3,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wdf_cannot_use_fs_contexts = 0x4,            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        can_be_optional =            0x80000000,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
