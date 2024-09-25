#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvcache_priority_level_descriptor_t.start.hpp"
namespace nt
{
    // [struct _NVCACHE_PRIORITY_LEVEL_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct nvcache_priority_level_descriptor_t                           
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint8_t  priority_level;                                      //{ +0x0000    } | .PriorityLevel
        _m01 uint32_t consumed_nvm_size_fraction;                          //{ +0x0004    } | .ConsumedNVMSizeFraction
        _m02 uint32_t consumed_mapping_resources_fraction;                 //{ +0x0008    } | .ConsumedMappingResourcesFraction
        _m03 uint32_t consumed_nvm_size_for_dirty_data_fraction;           //{ +0x000c    } | .ConsumedNVMSizeForDirtyDataFraction
        _m04 uint32_t consumed_mapping_resources_for_dirty_data_fraction;  //{ +0x0010    } | .ConsumedMappingResourcesForDirtyDataFraction
                                                                         
        SDK_NONVOL_PROPERTIES( "_NVCACHE_PRIORITY_LEVEL_DESCRIPTOR.$", 0x0, false, 0x41808e88ff556568 );                                                   
        SDK_FIXED_SIZE( nvcache_priority_level_descriptor_t, 0x18 );                                                   
    };                                                                   
};
#include "magic/nvcache_priority_level_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::nvcache_priority_level_descriptor_t, 0x18 );
