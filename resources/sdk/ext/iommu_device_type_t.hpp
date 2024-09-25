#pragma once
#include <sdkgen/support_library.hpp>

namespace ext
{
    // [enum _EXT_IOMMU_DEVICE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class iommu_device_type_t : int32_t
    {                                       
        invalid = 0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pci =     0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        acpi =    0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ioapic =  0x3,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        logical = 0x4,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        gic =     0x5,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        test =    0x6,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =     0x7,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
