#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _OPENCOUNT_REASON]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class opencount_reason_t : int32_t         
    {                                               
        skip_logging =                      0x0,      // Windows 10 v2004, Windows 10 v20H2
        async_read =                        0x1,      // Windows 10 v2004, Windows 10 v20H2
        flush_cache =                       0x2,      // Windows 10 v2004, Windows 10 v20H2
        get_dirty_page =                    0x3,      // Windows 10 v2004, Windows 10 v20H2
        get_flushed_vdl =                   0x4,      // Windows 10 v2004, Windows 10 v20H2
        init_cachemap1 =                    0x5,      // Windows 10 v2004, Windows 10 v20H2
        init_cachemap2 =                    0x6,      // Windows 10 v2004, Windows 10 v20H2
        init_cachemap3 =                    0x7,      // Windows 10 v2004, Windows 10 v20H2
        init_cachemap4 =                    0x8,      // Windows 10 v2004, Windows 10 v20H2
        init_cachemap5 =                    0x9,      // Windows 10 v2004, Windows 10 v20H2
        mdl_write =                         0xa,      // Windows 10 v2004, Windows 10 v20H2
        mdl_write_abort =                   0xb,      // Windows 10 v2004, Windows 10 v20H2
        notify_mapped_write =               0xc,      // Windows 10 v2004, Windows 10 v20H2
        notify_mapped_write_comp_callback = 0xd,      // Windows 10 v2004, Windows 10 v20H2
        purge_cache =                       0xe,      // Windows 10 v2004, Windows 10 v20H2
        purge_cache_active_views =          0xf,      // Windows 10 v2004, Windows 10 v20H2
        read_ahead =                        0x10,     // Windows 10 v2004, Windows 10 v20H2
        set_file_size =                     0x11,     // Windows 10 v2004, Windows 10 v20H2
        set_file_size_section =             0x12,     // Windows 10 v2004, Windows 10 v20H2
        uninit_cachemap_read_ahead =        0x13,     // Windows 10 v2004, Windows 10 v20H2
        uninit_cachemap_reg =               0x14,     // Windows 10 v2004, Windows 10 v20H2
        unmap_inactive_views =              0x15,     // Windows 10 v2004, Windows 10 v20H2
        unmap_inactive_views1 =             0x16,     // Windows 10 v2004, Windows 10 v20H2
        unmap_inactive_views2 =             0x17,     // Windows 10 v2004, Windows 10 v20H2
        unmap_inactive_views3 =             0x18,     // Windows 10 v2004, Windows 10 v20H2
        write_behind =                      0x19,     // Windows 10 v2004, Windows 10 v20H2
        write_behind_complete =             0x1a,     // Windows 10 v2004, Windows 10 v20H2
        write_behind_fail_acquire =         0x1b,     // Windows 10 v2004, Windows 10 v20H2
    };                                              
};
