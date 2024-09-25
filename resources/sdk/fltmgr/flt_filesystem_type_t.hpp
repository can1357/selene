#pragma once
#include <sdkgen/support_library.hpp>

namespace fltmgr
{
    // [enum _FLT_FILESYSTEM_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class flt_filesystem_type_t : int32_t
    {                                         
        unknown =    0x0,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        raw =        0x1,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ntfs =       0x2,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fat =        0x3,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cdfs =       0x4,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        udfs =       0x5,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lanman =     0x6,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        webdav =     0x7,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rdpdr =      0x8,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nfs =        0x9,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ms_netware = 0xa,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        netware =    0xb,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsudf =      0xc,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        mup =        0xd,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rsfx =       0xe,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        roxio_udf1 = 0xf,                       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        roxio_udf2 = 0x10,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        roxio_udf3 = 0x11,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        tacit =      0x12,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fs_rec =     0x13,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        incd =       0x14,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        incd_fat =   0x15,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        exfat =      0x16,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        psfs =       0x17,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        gpfs =       0x18,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        npfs =       0x19,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        msfs =       0x1a,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        csvfs =      0x1b,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        refs =       0x1c,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        openafs =    0x1d,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cimfs =      0x1e,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
