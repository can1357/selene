#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _STATIC_IRP_CTRL_OPERATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class static_irp_ctrl_operation_type_t : int32_t
    {                                                    
        page_file_read =           0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        page_file_write =          0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paging_read =              0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        paging_write =             0x3,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acquire_for_section_sync = 0x4,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        release_for_section_sync = 0x5,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acquire_for_mod_write =    0x6,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        release_for_mod_write =    0x7,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        acquire_for_cc_flush =     0x8,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        release_for_cc_flush =     0x9,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operation_count =          0xa,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        operation_none =           0xff,                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                   
};
