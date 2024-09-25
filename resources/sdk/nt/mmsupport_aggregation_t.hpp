#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmsupport_aggregation_t.start.hpp"
namespace nt
{
    // [struct _MMSUPPORT_AGGREGATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmsupport_aggregation_t          
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t page_fault_count;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageFaultCount
        _m01 uint64_t working_set_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .WorkingSetSize
        _m02 uint64_t working_set_leaf_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WorkingSetLeafSize
        _m03 uint64_t peak_working_set_size;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PeakWorkingSetSize
                                            
        SDK_MAGIC_PROPERTIES( "_MMSUPPORT_AGGREGATION.$", 0x20, true, 0x5e330b190b2da684 );                      
        SDK_FIXED_SIZE( mmsupport_aggregation_t, 0x20 );                      
    };                                      
};
#include "magic/mmsupport_aggregation_t.end.hpp"
SDK_VERIFY( struct nt::mmsupport_aggregation_t, 0x20 );
