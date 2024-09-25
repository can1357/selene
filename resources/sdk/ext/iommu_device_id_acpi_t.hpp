#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_device_id_acpi_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_DEVICE_ID_ACPI]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iommu_device_id_acpi_t    
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                           
        _m00 const char* object_name;  //{ +0x0000    +0x0000    +0x0000    } | .ObjectName
                                     
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DEVICE_ID_ACPI.$", 0x8, true, 0x28c6e057e80b368e );            
        SDK_FIXED_SIZE( iommu_device_id_acpi_t, 0x8 );            
    };                               
};
#include "magic/iommu_device_id_acpi_t.end.hpp"
SDK_VERIFY( struct ext::iommu_device_id_acpi_t, 0x8 );
