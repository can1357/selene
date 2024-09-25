#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_dsm_nvcache_change_priority_parameters_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct device_dsm_nvcache_change_priority_parameters_t
    {                                                     
        // WDK 10                     
        //                            
        _m00 uint32_t size;                                 //{ +0x0000    } | .Size
        _m01 uint8_t  target_priority;                      //{ +0x0004    } | .TargetPriority
                                                          
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_NVCACHE_CHANGE_PRIORITY_PARAMETERS.$", 0x0, false, 0xb771ba0e658eaff );                
        SDK_FIXED_SIZE( device_dsm_nvcache_change_priority_parameters_t, 0x8 );                
    };                                                    
};
#include "magic/device_dsm_nvcache_change_priority_parameters_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_nvcache_change_priority_parameters_t, 0x8 );
