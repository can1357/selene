#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/processor_group_info_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_GROUP_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct processor_group_info_t             
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint8_t  maximum_processor_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumProcessorCount
        _m01 uint8_t  active_processor_count;   //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .ActiveProcessorCount
        _m02 uint64_t active_processor_mask;    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ActiveProcessorMask
                                              
        SDK_NONVOL_PROPERTIES( "_PROCESSOR_GROUP_INFO.$", 0x30, true, 0xdfffa461b6d0ca93 );                        
        SDK_FIXED_SIZE( processor_group_info_t, 0x30 );                        
    };                                        
};
#include "magic/processor_group_info_t.end.hpp"
SDK_VERIFY( struct nt::processor_group_info_t, 0x30 );
