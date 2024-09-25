#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSCRIPTFLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class scriptflags_t : int32_t      
    {                                       
        cacheinfo =                0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        shortcuts =                0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        machineassign =            0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        regdata_cnfginfo =         0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        validate_transforms_list = 0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        regdata_classinfo =        0x80,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        regdata_extensioninfo =    0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        regdata_appinfo =          0x180,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        regdata =                  0x1a0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
