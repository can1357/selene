#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_device_creation_configuration_acpi_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI]
    // => Windows 11
    //
    struct iommu_device_creation_configuration_acpi_t
    {                                                
        // Windows 11                    
        //                               
        _m00 uint32_t input_mapping_base;              //{ +0x0000    } | .InputMappingBase
        _m01 uint32_t mappings_count;                  //{ +0x0004    } | .MappingsCount
                                                     
        SDK_MAGIC_PROPERTIES( "_IOMMU_DEVICE_CREATION_CONFIGURATION_ACPI.$", 0x0, false, 0xf7ef5ac286ba0d4a );                   
        SDK_FIXED_SIZE( iommu_device_creation_configuration_acpi_t, 0x8 );                   
    };                                               
};
#include "magic/iommu_device_creation_configuration_acpi_t.end.hpp"
SDK_VERIFY( struct nt::iommu_device_creation_configuration_acpi_t, 0x8 );
