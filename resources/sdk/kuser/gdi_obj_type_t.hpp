#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum GDIObjType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gdi_obj_type_t : int32_t
    {                                  
        type_def_type =       0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_dc_type =        0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused2_type =   0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused3_type =   0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_rgn_type =       0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_surf_type =      0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_clientobj_type = 0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_path_type =      0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_pal_type =       0x8,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_icmlcs_type =    0x9,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_lfont_type =     0xa,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_rfont_type =     0xb,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused12_type =  0xc,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused13_type =  0xd,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_icmcxf_type =    0xe,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_sprite_type =    0xf,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_brush_type =     0x10,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_umpd_type =      0x11,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_hlsurf_type =    0x12,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused19_type =  0x13,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused20_type =  0x14,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_meta_type =      0x15,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused22_type =  0x16,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused23_type =  0x17,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused24_type =  0x18,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused25_type =  0x19,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused26_type =  0x1a,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused27_type =  0x1b,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_drvobj_type =    0x1c,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused29_type =  0x1d,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_max_type =       0x1e,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_unused30_type =  0x1e,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        type_total =          0x1f,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
