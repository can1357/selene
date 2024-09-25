#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/debug_iommu_efi_data_t.start.hpp"
namespace nt
{
    // [struct _DEBUG_IOMMU_EFI_DATA]
    // => Windows 11
    //
    struct debug_iommu_efi_data_t         
    {                                     
        // Windows 11                       
        //                                
        _m00 void* pci_io_protocol_handle;  //{ +0x0000    } | .PciIoProtocolHandle
        _m01 void* mapping;                 //{ +0x0008    } | .Mapping
                                          
        SDK_MAGIC_PROPERTIES( "_DEBUG_IOMMU_EFI_DATA.$", 0x0, false, 0x7bcdbe099de453ab );                       
        SDK_FIXED_SIZE( debug_iommu_efi_data_t, 0x10 );                       
    };                                    
};
#include "magic/debug_iommu_efi_data_t.end.hpp"
SDK_VERIFY( struct nt::debug_iommu_efi_data_t, 0x10 );
