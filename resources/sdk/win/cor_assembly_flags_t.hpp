#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorAssemblyFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_assembly_flags_t : int32_t     
    {                                             
        content_type_default =          0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_none =                       0x0,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        public_key =                    0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_shift =                      0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_msil =                       0x10,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_x86 =                        0x20,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_ia64 =                       0x30,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_amd64 =                      0x40,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_arm =                        0x50,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_mask =                       0x70,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_no_platform =                0x70,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_specified =                  0x80,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pa_full_mask =                  0xf0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retargetable =                  0x100,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        content_type_windows_runtime =  0x200,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        content_type_mask =             0xe00,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        disable_ji_tcompile_optimizer = 0x4000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable_ji_tcompile_tracking =   0x8000,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
