#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_VOLUME_FLAGS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_volume_flags_t : int32_t     
    {                                           
        network_filesystem =           0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pending_mount_setup_notifies = 0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mount_setup_notifies_called =  0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mounting =                     0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        sent_shutdown_irp =            0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_name_caching =          0x20,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter_ever_attached =         0x40,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        standard_link_not_supported =  0x80,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_datascan =              0x100,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        read_only_datascan =           0x200,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        supported_features_known =     0x400,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dax_volume =                   0x800,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
