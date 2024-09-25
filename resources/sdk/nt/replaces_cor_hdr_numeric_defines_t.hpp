#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum ReplacesCorHdrNumericDefines]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class replaces_cor_hdr_numeric_defines_t : int32_t     
    {                                                           
        comimage_flags_ilonly =                      0x1,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_vtable_32bit =                           0x1,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_cor_mih_methodrva =                    0x1,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        native_type_max_cb =                         0x1,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comimage_flags_32bitrequired =               0x2,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_version_major =                          0x2,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_version_major_v2 =                       0x2,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_vtable_64bit =                           0x2,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_cor_mih_ehrva =                        0x2,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comimage_flags_il_library =                  0x4,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_vtable_from_unmanaged =                  0x4,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_version_minor =                          0x5,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comimage_flags_strongnamesigned =            0x8,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_deleted_name_length =                    0x8,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_vtablegap_name_length =                  0x8,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_vtable_from_unmanaged_retain_appdomain = 0x8,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_cor_mih_basicblock =                   0x8,         // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comimage_flags_native_entrypoint =           0x10,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_vtable_call_most_derived =               0x10,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        image_cor_eatj_thunk_size =                  0x20,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cor_ilmethod_sect_small_max_datasize =       0xff,        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_class_name =                             0x400,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_package_name =                           0x400,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comimage_flags_trackdebugdata =              0x10000,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comimage_flags_32bitpreferred =              0x20000,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
