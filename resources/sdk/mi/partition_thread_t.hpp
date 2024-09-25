#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_PARTITION_THREAD]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class partition_thread_t : int32_t           
    {                                                 
        modified_page_write_slot =             0x0,     // Windows 10 v1607
        zero_page_thread_slot =                0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //dereference_segment_thread_slot =    0x1,     // Windows 10 v1607
        rebuild_large_pages_thread_slot =      0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        partition_working_set_manager_slot =   0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //zero_page_thread_slot =              0x2,     // Windows 10 v1607
        dereference_segment_thread_slot =      0x3,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //partition_working_set_manager_slot = 0x3,     // Windows 10 v1607
        //mapped_page_writer_slot =            0x4,     // Windows 10 v1607
        modified_page_writer_slot =            0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mapped_page_writer_slot =              0x5,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //number_of_partition_threads =        0x5,     // Windows 10 v1607
        number_of_partition_threads =          0x6,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
