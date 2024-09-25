#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_INSTANCE_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_instance_flags_t : int32_t
    {                                        
        can_be_detached =           0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        deleting =                  0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initing =                   0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        volume_attributes_queried = 0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supports_named_streams =    0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_stream_list_ctrl =       0x20,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_file_list_ctrl =         0x40,      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
