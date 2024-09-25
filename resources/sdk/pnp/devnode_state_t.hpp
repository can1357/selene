#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_DEVNODE_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class devnode_state_t : int32_t                  
    {                                                     
        device_node_unspecified =                0x300,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_node_uninitialized =              0x301,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        device_node_initialized =                0x302,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        device_node_uninitialized_pending =      0x302,     // Windows 11
        device_node_drivers_added =              0x303,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        device_node_initialized_pending =        0x303,     // Windows 11
        //device_node_initialized =              0x304,     // Windows 11
        device_node_resources_assigned =         0x304,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_drivers_added =            0x305,     // Windows 11
        device_node_start_pending =              0x305,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_resources_assigned =       0x306,     // Windows 11
        device_node_start_completion =           0x306,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_start_pending =            0x307,     // Windows 11
        device_node_start_post_work =            0x307,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_start_completion =         0x308,     // Windows 11
        device_node_started =                    0x308,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        device_node_query_stopped =              0x309,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_start_post_work =          0x309,     // Windows 11
        //device_node_started =                  0x30a,     // Windows 11
        device_node_stopped =                    0x30a,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_query_stopped =            0x30b,     // Windows 11
        device_node_restart_completion =         0x30b,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        device_node_enumerate_pending =          0x30c,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_stopped =                  0x30c,     // Windows 11
        device_node_enumerate_completion =       0x30d,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_restart_completion =       0x30d,     // Windows 11
        device_node_awaiting_queued_deletion =   0x30e,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_enumerate_pending =        0x30e,     // Windows 11
        device_node_awaiting_queued_removal =    0x30f,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_enumerate_completion =     0x30f,     // Windows 11
        //device_node_awaiting_queued_deletion = 0x310,     // Windows 11
        device_node_query_removed =              0x310,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_awaiting_queued_removal =  0x311,     // Windows 11
        device_node_remove_pending_closes =      0x311,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_query_removed =            0x312,     // Windows 11
        device_node_removed =                    0x312,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        device_node_delete_pending_closes =      0x313,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_remove_pending_closes =    0x313,     // Windows 11
        device_node_deleted =                    0x314,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_removed =                  0x314,     // Windows 11
        //device_node_delete_pending_closes =    0x315,     // Windows 11
        max_device_node_state =                  0x315,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        //device_node_deleted =                  0x316,     // Windows 11
        //max_device_node_state =                0x317,     // Windows 11
    };                                                    
};
