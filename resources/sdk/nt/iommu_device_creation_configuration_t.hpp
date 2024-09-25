#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_device_creation_configuration_acpi_t.hpp"
#include "iommu_device_creation_configuration_type_t.hpp"

#include "magic/iommu_device_creation_configuration_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_DEVICE_CREATION_CONFIGURATION]
    // => Windows 11
    //
    struct iommu_device_creation_configuration_t 
    {                                            
        using config_type_t = enum nt::iommu_device_creation_configuration_type_t;                   
        using acpi_t =        struct nt::iommu_device_creation_configuration_acpi_t;                   
                                                 
        // Windows 11                            
        //                                       
        _m00 nt::list_entry_t next_configuration;  //{ +0x0000    } | .NextConfiguration
        _m01 config_type_t    config_type;         //{ +0x0010    } | .ConfigType
        _m02 acpi_t           acpi;                //{ +0x0018    } | .Acpi
        _m03 void*            device_id;           //{ +0x0018    } | .DeviceId
                                                 
        SDK_MAGIC_PROPERTIES( "_IOMMU_DEVICE_CREATION_CONFIGURATION.$", 0x0, false, 0x1ced1460a1ffc3b );                   
        SDK_FIXED_SIZE( iommu_device_creation_configuration_t, 0x20 );                   
    };                                           
};
#include "magic/iommu_device_creation_configuration_t.end.hpp"
SDK_VERIFY( struct nt::iommu_device_creation_configuration_t, 0x20 );
