#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _DEVICE_NODE_IOMMU_EXTENSION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_node_iommu_extension_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "_DEVICE_NODE_IOMMU_EXTENSION.$", 0x0, true, 0x688f4470e8140385 );
        SDK_FIXED_SIZE( device_node_iommu_extension_t, 0x0 );
    };                                  
};
SDK_VERIFY( struct nt::device_node_iommu_extension_t, 0x0 );
