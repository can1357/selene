#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _VIRTUAL_MEMORY_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class virtual_memory_information_class_t : int32_t 
    {                                                       
        vm_prefetch_information =                    0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_page_priority_information =               0x1,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_cfg_call_target_information =             0x2,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_page_dirty_state_information =            0x3,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_image_hot_patch_information =             0x4,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_physical_contiguity_information =         0x5,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vm_virtual_machine_prepopulate_information = 0x6,     // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_vm_info_class =                          0x7,     // WDK 10
        vm_remove_from_working_set_information =     0x7,     // Windows 11
    };                                                      
};
