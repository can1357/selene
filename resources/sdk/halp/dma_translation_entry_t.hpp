#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/iommu_dma_logical_address_token_mapped_segment_t.hpp"

#include "magic/dma_translation_entry_t.start.hpp"
namespace halp
{
    struct dma_translation_entry_t;

    // [struct _HALP_DMA_TRANSLATION_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dma_translation_entry_t                                                 
    {                                                                              
        struct u0_flags_t                                                          
        {                                                                          
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
            //                                                                     
            _m04 uint1_t  bound_to_master;                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .BoundToMaster
            _m05 uint1_t  bound_to_scatter_pool;                                     //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .BoundToScatterPool
            _m06 uint1_t  owned_by_master;                                           //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .OwnedByMaster
            _m07 uint1_t  owned_by_scatter_pool;                                     //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .OwnedByScatterPool
            _m08 uint1_t  temporary_mapping;                                         //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .TemporaryMapping
            _m09 uint1_t  zero_buffer;                                               //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .ZeroBuffer
            _m10 uint58_t address;                                                   //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .Address
                                                                                   
            SDK_MAGIC_PROPERTIES( "_HALP_DMA_TRANSLATION_ENTRY.Flags.$", 0x8, true, 0x6ecf1344b26452c3 );                                                      
            SDK_FIXED_SIZE( u0_flags_t, 0x8 );                                                      
        };                                                                         
                                                                                   
        using remapping_address_t = struct nt::iommu_dma_logical_address_token_mapped_segment_t;                                
                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                         
        _m00 uint64_t                              physical_address;                 //{ +0x0000    +0x0000    +0x0000    } | .PhysicalAddress
        _m01 struct halp::dma_translation_entry_t* next;                             //{ +0x0008    +0x0008    +0x0008    } | .Next
        _m02 uint32_t                              mapped_length;                    //{ +0x0010    +0x0010    +0x0010    } | .MappedLength
        _m03 void*                                 virtual_address;                  //{ +0x0030    +0x0030    +0x0030    } | .VirtualAddress
        _m11 u0_flags_t                            flags;                            //{ +0x0030    +0x0030    +0x0030    } | .Flags
        _m12 struct halp::dma_translation_entry_t* next_mapping;                     //{ +0x0038    +0x0038    +0x0038    } | .NextMapping
        _m13 uint8_t                               logical_bounce_buffer_premapped;  //{ +0x0040    +0x0040    +0x0040    } | .LogicalBounceBufferPremapped
                                                                                   
        // Windows 10 v2004, Windows 10 v20H2                                      
        //                                                                         
        _m14 uint64_t                              logical_address;                  //{ +0x0018    +0x0018    } | .LogicalAddress
        _m15 uint64_t                              logical_mapped_length;            //{ +0x0020    +0x0020    } | .LogicalMappedLength
        _m16 uint64_t                              next_logical_address;             //{ +0x0028    +0x0028    } | .NextLogicalAddress
                                                                                   
        // Windows 11                                                              
        //                                                                         
        _m17 remapping_address_t                   remapping_address;                //{ +0x0018    } | .RemappingAddress
                                                                                   
        SDK_MAGIC_PROPERTIES( "_HALP_DMA_TRANSLATION_ENTRY.$", 0x48, true, 0xcfb28473c2354fe );                                
        SDK_FIXED_SIZE( dma_translation_entry_t, 0x48 );                                
    };                                                                             
};
#include "magic/dma_translation_entry_t.end.hpp"
SDK_VERIFY( struct halp::dma_translation_entry_t::u0_flags_t, 0x8 );
SDK_VERIFY( struct halp::dma_translation_entry_t, 0x48 );
