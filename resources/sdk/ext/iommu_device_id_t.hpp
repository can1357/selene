#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_device_type_t.hpp"
#include "iommu_device_id_gic_t.hpp"
#include "iommu_device_id_pci_t.hpp"
#include "iommu_device_id_acpi_t.hpp"
#include "iommu_device_id_test_t.hpp"
#include "iommu_device_id_flags_t.hpp"

#include "magic/iommu_device_id_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_DEVICE_ID]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iommu_device_id_t                                
    {                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                  
        _m00 enum ext::iommu_device_type_t      device_type;  //{ +0x0000    +0x0000    +0x0000    } | .DeviceType
        _m01 struct ext::iommu_device_id_pci_t  pci;          //{ +0x0008    +0x0008    +0x0008    } | .Pci
        _m02 struct ext::iommu_device_id_acpi_t acpi;         //{ +0x0008    +0x0008    +0x0008    } | .Acpi
        _m03 uint8_t                            io_apic_id;   //{ +0x0008    +0x0008    +0x0008    } | .IoApicId
        _m04 uint64_t                           logical_id;   //{ +0x0008    +0x0008    +0x0008    } | .LogicalId
        _m05 struct ext::iommu_device_id_test_t test;         //{ +0x0008    +0x0008    +0x0008    } | .Test
        _m06 struct ext::iommu_device_id_gic_t  gic;          //{ +0x0008    +0x0008    +0x0008    } | .Gic
                                                            
        // Windows 11                                       
        //                                                  
        _m07 union ext::iommu_device_id_flags_t flags;        //{ +0x0004    } | .Flags
                                                            
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DEVICE_ID.$", 0x18, true, 0x767a07af656b0d07 );            
        SDK_FIXED_SIZE( iommu_device_id_t, 0x18 );            
    };                                                      
};
#include "magic/iommu_device_id_t.end.hpp"
SDK_VERIFY( struct ext::iommu_device_id_t, 0x18 );
