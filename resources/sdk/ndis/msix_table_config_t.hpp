#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_MSIX_TABLE_CONFIG]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class msix_table_config_t : int32_t
    {                                       
        set_table_entry =    0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mask_table_entry =   0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmask_table_entry = 0x2,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                0x3,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
