#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE]
    //  Windows 11
    //
    enum class iommu_map_physical_address_type_t : int32_t
    {                                                     
        mdl =              0x0,                             // Windows 11
        contiguous_range = 0x1,                             // Windows 11
        pfn =              0x2,                             // Windows 11
        max =              0x3,                             // Windows 11
    };                                                    
};
