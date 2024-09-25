#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _FILE_OBJECT_EXTENSION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_object_extension_type_t : int32_t
    {                                                
        fo_ext_type_transaction_params =    0x0,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fo_ext_type_internal =              0x1,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fo_ext_type_iosb_range =            0x2,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fo_ext_type_generic =               0x3,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fo_ext_type_sfio =                  0x4,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fo_ext_type_symlink =               0x5,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fo_ext_type_oplock_key =            0x6,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fo_ext_type_silo =                  0x7,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fo_ext_type_memory_partition_info = 0x8,       // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max_fo_ext_types =                0x8,       // Windows 10 v1607
        fo_ext_type_shadow_file =           0x9,       // Windows 11
        max_fo_ext_types =                  0x9,       // Windows 10 v2004, Windows 10 v20H2
        //max_fo_ext_types =                0xa,       // Windows 11
    };                                               
};
