#pragma once
#include <sdkgen/support_library.hpp>

namespace sdb
{
    // [enum _SDB_UX_BLOCKTYPE_OVERRIDE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class ux_blocktype_override_t : int32_t
    {                                           
        none =                        0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_block =                    0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reinstall_block =             0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        soft_block =                  0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hard_block =                  0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        upgrade_block =               0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mig_fixed =                   0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mig_reinstall =               0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mig_removed =                 0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mig_ask_wer =                 0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        upgrade_can_reinstall_block = 0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        upgrade_until_update_block =  0xb,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reinstall_info_block =        0xc,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reinstall_warn_block =        0xd,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                         0xe,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
