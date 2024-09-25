#pragma once
#include <sdkgen/support_library.hpp>
#include "iommu_dma_domain_type_t.hpp"
#include "../ext/iommu_translation_type_t.hpp"

namespace dmar { struct page_table_state_t;  }
namespace halp { struct dma_domain_object_t; }

#include "magic/iommu_dma_domain_t.start.hpp"
namespace nt
{
    struct iommu_dma_logical_allocator_t;

    // [struct _IOMMU_DMA_DOMAIN]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iommu_dma_domain_t                                                    
    {                                                                            
        // Windows 11                                                            
        //                                                                       
        _m00 struct halp::dma_domain_object_t*         dma_domain_owner;           //{ +0x0000    } | .DmaDomainOwner
        _m01 enum nt::iommu_dma_domain_type_t          domain_type;                //{ +0x0008    } | .DomainType
        _m02 enum ext::iommu_translation_type_t        translation_type;           //{ +0x000c    } | .TranslationType
        _m03 nt::list_entry_t                          hardware_domain_list_head;  //{ +0x0010    } | .HardwareDomainListHead
        _m04 uint64_t                                  hardware_domain_list_lock;  //{ +0x0020    } | .HardwareDomainListLock
        _m05 struct dmar::page_table_state_t*          dmarpt_state;               //{ +0x0028    } | .DmarptState
        _m06 uint32_t                                  domain_id;                  //{ +0x0030    } | .DomainId
        _m07 uint8_t                                   is_stage1;                  //{ +0x0034    } | .IsStage1
        _m08 uint16_t                                  asid;                       //{ +0x0036    } | .Asid
        _m09 struct nt::iommu_dma_logical_allocator_t* logical_allocator;          //{ +0x0038    } | .LogicalAllocator
                                                                                 
        SDK_MAGIC_PROPERTIES( "_IOMMU_DMA_DOMAIN.$", 0x0, true, 0x4c445600bca81451 );                          
        SDK_DYNAMIC_SIZE( iommu_dma_domain_t );                                  
    };                                                                           
};
#include "magic/iommu_dma_domain_t.end.hpp"
