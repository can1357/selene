#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_WORK_ITEM_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class work_item_type_t : int32_t    
    {                                        
        work_item_request =           0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        work_item_send =              0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        work_item_return_packets =    0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        work_item_reset_requested =   0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        work_item_reset_in_progress = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        work_item_reserved =          0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        work_item_miniport_callback = 0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_work_items =              0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
