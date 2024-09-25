#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FILE_INFO_BY_HANDLE_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_info_by_handle_class_t : int32_t  
    {                                                 
        file_basic_info =                     0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_standard_info =                  0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_name_info =                      0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_rename_info =                    0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_disposition_info =               0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_allocation_info =                0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_end_of_file_info =               0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_stream_info =                    0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_compression_info =               0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_attribute_tag_info =             0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_id_both_directory_info =         0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_id_both_directory_restart_info = 0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_io_priority_hint_info =          0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_remote_protocol_info =           0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_full_directory_info =            0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_full_directory_restart_info =    0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_storage_info =                   0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_alignment_info =                 0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_id_info =                        0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_id_extd_directory_info =         0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_id_extd_directory_restart_info = 0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_disposition_info_ex =            0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_rename_info_ex =                 0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_case_sensitive_info =            0x17,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //maximum_file_info_by_handle_class = 0x17,     // Windows 10 v1607
        file_normalized_name_info =           0x18,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_file_info_by_handle_class =   0x19,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
