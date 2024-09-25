#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_PD_QUEUE_CONTROL_CODE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pd_queue_control_code_t : int32_t
    {                                           
        pdqctl_unknown =               0x0,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdqctl_queue_depth_threshold = 0x1,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdqctl_moderation_interval =   0x2,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdqctl_moderation_count =      0x3,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdqctl_notification_group_id = 0x4,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdqctl_scheduler_queue_id =    0x5,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pdqctl_max =                   0x6,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
