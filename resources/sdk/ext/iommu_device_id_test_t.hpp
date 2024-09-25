#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_device_id_test_t.start.hpp"
namespace ext
{
    // [struct _EXT_IOMMU_DEVICE_ID_TEST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iommu_device_id_test_t
    {                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint64_t unique_id;   //{ +0x0000    +0x0000    +0x0000    } | .UniqueId
                                 
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DEVICE_ID_TEST.$", 0x8, true, 0x516d114f4b9c594 );          
        SDK_FIXED_SIZE( iommu_device_id_test_t, 0x8 );          
    };                           
};
#include "magic/iommu_device_id_test_t.end.hpp"
SDK_VERIFY( struct ext::iommu_device_id_test_t, 0x8 );
