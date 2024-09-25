#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum GDILoObjType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gdi_lo_obj_type_t : int32_t
    {                                     
        dc_type =         0x10000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        region_type =     0x40000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bitmap_type =     0x50000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        clientobj_type =  0x60000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        palette_type =    0x80000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        icmlcs_type =     0x90000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        font_type =       0xa0000,          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        brush_type =      0x100000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        altdc_type =      0x210000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dibsection_type = 0x250000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        metafile16_type = 0x260000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pen_type =        0x300000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        metafile_type =   0x460000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        extpen_type =     0x500000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        metadc16_type =   0x660000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
