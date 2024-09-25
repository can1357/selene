#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/rb_tree_t.hpp"
#include "dma_translation_type_t.hpp"
#include "../ext/iommu_translation_type_t.hpp"

namespace nt { struct adapter_object_t;   }
namespace nt { struct iommu_dma_domain_t; }

#include "magic/dma_domain_object_t.start.hpp"
namespace halp
{
    // [struct _HALP_DMA_DOMAIN_OBJECT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_domain_object_t                                           
    {                                                                    
        using iommu_domain_pointer_t = sdk::variant<void*, struct nt::iommu_dma_domain_t*>;                               
                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                               
        _m00 nt::list_entry_t             list_entry;                      //{ +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 int64_t                      maximum_physical_address;        //{ +0x0010    +0x0010    +0x0010    } | .MaximumPhysicalAddress
        _m02 int64_t                      boundary_address_multiple;       //{ +0x0018    +0x0018    +0x0018    } | .BoundaryAddressMultiple
        _m03 uint8_t                      cache_coherent;                  //{ +0x0020    +0x0020    +0x0020    } | .CacheCoherent
        _m04 uint8_t                      firmware_reserved;               //{ +0x0021    +0x0021    +0x0021    } | .FirmwareReserved
        _m05 iommu_domain_pointer_t       iommu_domain_pointer;            //{ +0x0028    +0x0028    +0x0028    } | .IommuDomainPointer
        _m06 int32_t                      translation_type;                //{ +0x0040    +0x0030    +0x0040    } | .TranslationType
        _m07 struct nt::adapter_object_t* owning_adapter;                  //{ +0x0048    +0x0038    +0x0048    } | .OwningAdapter
        _m08 struct rtl::rb_tree_t        common_buffer_root;              //{ +0x0050    +0x0040    +0x0050    } | .CommonBufferRoot
        _m09 uint64_t                     common_buffer_tree_lock;         //{ +0x0060    +0x0050    +0x0060    } | .CommonBufferTreeLock
        _m10 nt::list_entry_t             vector_common_buffer_list_head;  //{ +0x0068    +0x0058    +0x0068    } | .VectorCommonBufferListHead
        _m11 uint64_t                     vector_common_buffer_lock;       //{ +0x0078    +0x0068    +0x0078    } | .VectorCommonBufferLock
        _m12 uint32_t                     domain_ref_count;                //{ +0x0080    +0x0070    +0x0080    } | .DomainRefCount
                                                                         
        // Windows 10 v2004, Windows 10 v20H2                               
        //                                                               
        _m13 void*                        la_state;                        //{ +0x0030    +0x0030    } | .LaState
        _m14 uint64_t                     la_state_lock;                   //{ +0x0038    +0x0038    } | .LaStateLock
                                                                         
        SDK_MAGIC_PROPERTIES( "_HALP_DMA_DOMAIN_OBJECT.$", 0x88, true, 0x87dbf3f561e68c6b );                               
        SDK_DYNAMIC_SIZE( dma_domain_object_t );                               
    };                                                                   
};
#include "magic/dma_domain_object_t.end.hpp"
