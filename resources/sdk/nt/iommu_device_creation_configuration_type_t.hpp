#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _IOMMU_DEVICE_CREATION_CONFIGURATION_TYPE]
    //  Windows 11
    //
    enum class iommu_device_creation_configuration_type_t : int32_t
    {                                                              
        none =      0x0,                                             // Windows 11
        acpi =      0x1,                                             // Windows 11
        device_id = 0x2,                                             // Windows 11
        max =       0x3,                                             // Windows 11
    };                                                             
};
