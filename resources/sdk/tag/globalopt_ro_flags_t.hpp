#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagGLOBALOPT_RO_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class globalopt_ro_flags_t : int32_t                             
    {                                                                     
        sta_modalloop_remove_touch_messages =                    0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sta_modalloop_shared_queue_remove_input_messages =       0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sta_modalloop_shared_queue_donot_remove_input_messages = 0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fast_rundown =                                           0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved1 =                                              0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved2 =                                              0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved3 =                                              0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sta_modalloop_shared_queue_reorder_pointer_messages =    0x80,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved4 =                                              0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved5 =                                              0x200,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved6 =                                              0x400,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                    
};
