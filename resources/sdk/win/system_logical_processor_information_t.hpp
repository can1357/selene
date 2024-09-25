#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/cache_descriptor_t.hpp"
#include "../nt/logical_processor_relationship_t.hpp"

#include "magic/system_logical_processor_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct system_logical_processor_information_t                     
    {                                                                 
        struct u0_processor_core_t                                    
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
            //                                                        
            _m02 uint8_t flags;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                                                      
            SDK_NONVOL_PROPERTIES( "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.ProcessorCore.$", 0x1, true, 0x5ee99a290064c3f9 );                     
            SDK_FIXED_SIZE( u0_processor_core_t, 0x1 );                     
        };                                                            
                                                                      
        struct u5_numa_node_t                                         
        {                                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                        
            _m04 uint32_t node_number;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeNumber
                                                                      
            SDK_NONVOL_PROPERTIES( "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.NumaNode.$", 0x4, true, 0xe5967d9a766a63a1 );                           
            SDK_FIXED_SIZE( u5_numa_node_t, 0x4 );                           
        };                                                            
                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                            
        _m00 uint64_t                                  processor_mask;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessorMask
        _m01 enum nt::logical_processor_relationship_t relationship;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Relationship
        _m03 u0_processor_core_t                       processor_core;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessorCore
        _m05 u5_numa_node_t                            numa_node;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumaNode
        _m06 struct nt::cache_descriptor_t             cache;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Cache
                                                                      
        SDK_NONVOL_PROPERTIES( "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.$", 0x20, true, 0xa56b1a8ea7f5d6a4 );               
        SDK_FIXED_SIZE( system_logical_processor_information_t, 0x20 );               
    };                                                                
};
#include "magic/system_logical_processor_information_t.end.hpp"
SDK_VERIFY( struct win::system_logical_processor_information_t::u0_processor_core_t, 0x1 );
SDK_VERIFY( struct win::system_logical_processor_information_t::u5_numa_node_t, 0x4 );
SDK_VERIFY( struct win::system_logical_processor_information_t, 0x20 );
