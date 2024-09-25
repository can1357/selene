#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_target_type_t.hpp"

#include "magic/interrupt_target_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_TARGET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_target_t                                     
    {                                                             
        struct u0_hypervisor_target_t                             
        {                                                         
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                    
            _m06 uint32_t low32;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Low32
            _m07 uint32_t high32;                                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .High32
            _m08 uint64_t interrupt_data;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InterruptData
                                                                  
            SDK_MAGIC_PROPERTIES( "_INTERRUPT_TARGET.HypervisorTarget.$", 0x10, true, 0x787b32af9cda0c1f );                                   
            SDK_FIXED_SIZE( u0_hypervisor_target_t, 0x10 );                                   
        };                                                        
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                        
        _m00 enum nt::interrupt_target_type_t target;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Target
        _m01 uint32_t                         physical_target;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PhysicalTarget
        _m02 uint32_t                         logical_flat_target;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LogicalFlatTarget
        _m03 uint32_t                         remap_index;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RemapIndex
        _m04 uint32_t                         cluster_id;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ClusterId
        _m05 uint32_t                         cluster_mask;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ClusterMask
        _m09 u0_hypervisor_target_t           hypervisor_target;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HypervisorTarget
                                                                  
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_TARGET.$", 0x18, true, 0xc06fd1ab5d424015 );                    
        SDK_FIXED_SIZE( interrupt_target_t, 0x18 );                    
    };                                                            
};
#include "magic/interrupt_target_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_target_t::u0_hypervisor_target_t, 0x10 );
SDK_VERIFY( struct nt::interrupt_target_t, 0x18 );
