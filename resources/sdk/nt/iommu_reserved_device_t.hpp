#pragma once
#include <sdkgen/support_library.hpp>
#include "../ext/iommu_reserved_memory_region_t.hpp"

namespace ext { struct iommu_device_id_t; }

#include "magic/iommu_reserved_device_t.start.hpp"
namespace nt
{
    // [struct _IOMMU_RESERVED_DEVICE]
    // => Windows 11
    //
    struct iommu_reserved_device_t                              
    {                                                           
        using regions_t = sdk::array<struct ext::iommu_reserved_memory_region_t, 1>;                    
                                                                
        // Windows 11                                           
        //                                                      
        _m00 struct ext::iommu_device_id_t* device_id;            //{ +0x0000    } | .DeviceId
        _m01 void*                          page_table;           //{ +0x0008    } | .PageTable
        _m02 int64_t                        page_table_physical;  //{ +0x0010    } | .PageTablePhysical
        _m03 uint32_t                       region_count;         //{ +0x0018    } | .RegionCount
        _m04 regions_t                      regions;              //{ +0x0020    } | .Regions
                                                                
        SDK_MAGIC_PROPERTIES( "_IOMMU_RESERVED_DEVICE.$", 0x0, false, 0xc0d40f43a53856b1 );                    
        SDK_FIXED_SIZE( iommu_reserved_device_t, 0x38 );                    
    };                                                          
};
#include "magic/iommu_reserved_device_t.end.hpp"
SDK_VERIFY( struct nt::iommu_reserved_device_t, 0x38 );
