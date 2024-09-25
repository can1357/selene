#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_reserved_device_list_t.start.hpp"
namespace nt
{
    struct iommu_reserved_device_t;

    // [struct _IOMMU_RESERVED_DEVICE_LIST]
    // => Windows 11
    //
    struct iommu_reserved_device_list_t
    {                                  
        using devices_t = sdk::array<struct nt::iommu_reserved_device_t*, 1>;        
                                       
        // Windows 11           
        //                      
        _m00 uint32_t   count;           //{ +0x0000    } | .Count
        _m01 devices_t  devices;         //{ +0x0008    } | .Devices
                                       
        SDK_MAGIC_PROPERTIES( "_IOMMU_RESERVED_DEVICE_LIST.$", 0x0, false, 0x83a341fdb4065148 );        
        SDK_FIXED_SIZE( iommu_reserved_device_list_t, 0x10 );        
    };                                 
};
#include "magic/iommu_reserved_device_list_t.end.hpp"
SDK_VERIFY( struct nt::iommu_reserved_device_list_t, 0x10 );
