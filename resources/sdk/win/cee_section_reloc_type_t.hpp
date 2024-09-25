#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CeeSectionRelocType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cee_section_reloc_type_t : int32_t
    {                                            
        reloc_absolute =        0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_high_low =        0x3,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_high_adj =        0x4,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_map_token =       0x5,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_relative =        0x6,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_file_pos =        0x7,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_code_relative =   0x8,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_ia64_imm64 =      0x9,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_dir64 =           0xa,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_ia64_pc_rel25 =   0xb,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_ia64_pc_rel64 =   0xc,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_absolute_tagged = 0xd,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_sentinel =        0xe,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_base_reloc =         0x4000,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_absolute_ptr =    0x8000,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_ptr =             0x8000,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_high_low_ptr =    0x8003,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_relative_ptr =    0x8006,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_ia64_imm64_ptr =  0x8009,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reloc_dir64_ptr =       0x800a,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
