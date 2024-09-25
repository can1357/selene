#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_device_id_pci_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_DEVICE_ID_PCI]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iommu_device_id_pci_t            
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint64_t as_uint64;              //{ +0x0000    +0x0000    +0x0000    } | .AsUINT64
        _m01 uint16_t pci_segment_number;     //{ +0x0000    +0x0000    +0x0000    } | .PciSegmentNumber
        _m02 uint2_t  phantom_function_bits;  //{ +0x0002@0  +0x0002@0  +0x0002@0  } | .PhantomFunctionBits
        _m03 uint8_t  start_bus_number;       //{ +0x0002@8  +0x0002@8  +0x0002@8  } | .StartBusNumber
        _m04 uint16_t bdf;                    //{ +0x0004    +0x0004    +0x0004    } | .Bdf
        _m05 uint16_t device_path_length;     //{ +0x0006    +0x0006    +0x0006    } | .DevicePathLength
        _m06 wchar_t* device_path;            //{ +0x0008    +0x0008    +0x0008    } | .DevicePath
                                            
        // Windows 10 v2004, Windows 10 v20H2                      
        //                                  
        _m07 uint1_t  bus_range;              //{ +0x0002@2  +0x0002@2  } | .BusRange
        _m08 uint8_t  subordinate_bus;        //{ +0x0004    +0x0004    } | .SubordinateBus
        _m09 uint8_t  secondary_bus;          //{ +0x0005    +0x0005    } | .SecondaryBus
                                            
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DEVICE_ID_PCI.$", 0x10, true, 0x149e191d3166739a );                      
        SDK_FIXED_SIZE( iommu_device_id_pci_t, 0x10 );                      
    };                                      
};
#include "magic/iommu_device_id_pci_t.end.hpp"
SDK_VERIFY( struct ext::iommu_device_id_pci_t, 0x10 );
