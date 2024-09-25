#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _ACTIVATION_CONTEXT_INFO_CLASS]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class activation_context_info_class_t : int32_t                        
    {                                                                           
        activation_context_basic_information =                           0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activation_context_detailed_information =                        0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assembly_detailed_information_in_activation_context =            0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        assembly_detailed_information_in_activation_contxt =             0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_information_in_assembly_of_assembly_in_activation_context = 0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        file_information_in_assembly_of_assembly_in_activation_contxt =  0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        runlevel_information_in_activation_context =                     0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        compatibility_information_in_activation_context =                0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        activation_context_manifest_resource_name =                      0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_activation_context_info_class =                              0x8,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                          
};
