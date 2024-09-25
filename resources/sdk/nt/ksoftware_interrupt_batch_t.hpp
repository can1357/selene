#pragma once
#include <sdkgen/support_library.hpp>
#include "kaffinity_ex_t.hpp"

#include "magic/ksoftware_interrupt_batch_t.start.hpp"
namespace nt
{
    // [struct _KSOFTWARE_INTERRUPT_BATCH]
    // => Windows 11
    //
    struct ksoftware_interrupt_batch_t                            
    {                                                             
        // Windows 11                                             
        //                                                        
        _m00 uint8_t                   level;                       //{ +0x0000    } | .Level
        _m01 uint8_t                   target_type;                 //{ +0x0001    } | .TargetType
        _m02 uint8_t                   reserved_batch_in_progress;  //{ +0x0002    } | .ReservedBatchInProgress
        _m03 uint32_t                  single_target_index;         //{ +0x0004    } | .SingleTargetIndex
        _m04 struct nt::kaffinity_ex_t multiple_target_affinity;    //{ +0x0008    } | .MultipleTargetAffinity
                                                                  
        SDK_MAGIC_PROPERTIES( "_KSOFTWARE_INTERRUPT_BATCH.$", 0x0, false, 0x41660e92b44868b1 );                           
        SDK_FIXED_SIZE( ksoftware_interrupt_batch_t, 0x110 );                           
    };                                                            
};
#include "magic/ksoftware_interrupt_batch_t.end.hpp"
SDK_VERIFY( struct nt::ksoftware_interrupt_batch_t, 0x110 );
