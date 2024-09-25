#pragma once
#include <sdkgen/support_library.hpp>

namespace asl
{
    // [enum ASL_ATTRIBUTE_INDEX]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class attribute_index_t : int32_t      
    {                                           
        attribute_size =                0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_size_of_image =       0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_checksum =            0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_bin_file_version =    0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_bin_product_version = 0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_product_version =     0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_file_description =    0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_company_name =        0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_product_name =        0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_file_version =        0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_original_filename =   0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_internal_name =       0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_legal_copyright =     0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_verdatehi =           0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_verdatelo =           0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_verfileos =           0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_verfiletype =         0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_module_type =         0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_pe_checksum =         0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_linker_version =      0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_16bit_description =   0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_16bit_module_name =   0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_link_date =           0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_export_name =         0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_ver_language =        0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_exe_wrapper =         0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_crc_checksum =        0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_clr_version =         0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_file_kind_detail =    0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_pe_machine =          0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_pe_subsystem =        0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_pe_opt_hdr_magic =    0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_filesize =            0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        attribute_max =                 0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        attribute_pe_characteristics =  0x21,     // Windows 11
        //attribute_max =               0x22,     // Windows 11
    };                                          
};
