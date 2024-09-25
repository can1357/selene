#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_partition_charge_sharing_type_t.hpp"

#include "magic/memory_partition_charge_sharing_attributes_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES]
    // => Windows 11
    //
    struct memory_partition_charge_sharing_attributes_t                               
    {                                                                                 
        // Windows 11                                                                 
        //                                                                            
        _m00 enum win::memory_partition_charge_sharing_type_t type;                     //{ +0x0000    } | .Type
        _m01 uint64_t                                         current_charge_in_pages;  //{ +0x0008    } | .CurrentChargeInPages
        _m02 uint64_t                                         peak_charge_in_pages;     //{ +0x0010    } | .PeakChargeInPages
        _m03 uint64_t                                         charge_limit_in_pages;    //{ +0x0018    } | .ChargeLimitInPages
        _m04 uint64_t                                         charge_failures;          //{ +0x0020    } | .ChargeFailures
                                                                                      
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_CHARGE_SHARING_ATTRIBUTES.$", 0x0, false, 0x5830552485c108f7 );                        
        SDK_FIXED_SIZE( memory_partition_charge_sharing_attributes_t, 0x28 );                        
    };                                                                                
};
#include "magic/memory_partition_charge_sharing_attributes_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_charge_sharing_attributes_t, 0x28 );
