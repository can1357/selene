#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prefetch_flags_t.start.hpp"
namespace mm
{
    // [union _MM_PREFETCH_FLAGS]
    // => WDK 10 (NV)
    //
    union prefetch_flags_t                                  
    {                                                       
        struct u0_flags_t                                   
        {                                                   
            // WDK 10                                       
            //                                              
            _m00 uint3_t  priority;                           //{ +0x0000@0  } | .Priority
            _m01 uint3_t  repurpose_priority;                 //{ +0x0000@3  } | .RepurposePriority
            _m02 uint1_t  priority_protection;                //{ +0x0000@6  } | .PriorityProtection
            _m03 uint2_t  must_be_zero;                       //{ +0x0000@7  } | .MustBeZero
            _m04 uint23_t cannot_be_used_as_flags;            //{ +0x0000@9  } | .CannotBeUsedAsFlags
                                                            
            SDK_NONVOL_PROPERTIES( "_MM_PREFETCH_FLAGS.Flags.$", 0x0, false, 0x2953e538f3e066c2 );                                  
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                  
        };                                                  
                                                            
        // WDK 10                                           
        //                                                  
        _m05 u0_flags_t                           flags;      //{ +0x0000    } | .Flags
        _m06 uint32_t                             all_flags;  //{ +0x0000    } | .AllFlags
                                                            
        SDK_NONVOL_PROPERTIES( "_MM_PREFETCH_FLAGS.$", 0x0, false, 0x7a00072da72cc77a );          
        SDK_FIXED_SIZE( prefetch_flags_t, 0x4 );            
    };                                                      
};
#include "magic/prefetch_flags_t.end.hpp"
SDK_VERIFY( struct mm::prefetch_flags_t::u0_flags_t, 0x4 );
SDK_VERIFY( union mm::prefetch_flags_t, 0x4 );
