#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cross_partition_charges_t.start.hpp"
namespace mi
{
    // [struct _MI_CROSS_PARTITION_CHARGES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cross_partition_charges_t  
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t current_charges;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentCharges
        _m01 uint64_t charge_failures;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ChargeFailures
        _m02 uint64_t charge_peak;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ChargePeak
                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                
        //                            
        _m03 uint64_t charge_minimum;   //{ +0x0018    +0x0018    +0x0018    } | .ChargeMinimum
                                      
        // Windows 10 v1607                
        //                            
        _m04 uint64_t charge_maximum;   //{ +0x0020    } | .ChargeMaximum
                                      
        // Windows 11                 
        //                            
        _m05 uint64_t maximum_allowed;  //{ +0x0018    } | .MaximumAllowed
                                      
        SDK_MAGIC_PROPERTIES( "_MI_CROSS_PARTITION_CHARGES.$", 0x20, true, 0x8a7e568a1e91a57 );                
        SDK_DYNAMIC_SIZE( cross_partition_charges_t );                
    };                                
};
#include "magic/cross_partition_charges_t.end.hpp"
