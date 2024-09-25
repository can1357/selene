#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_partition_charge_sharing_attributes_t.hpp"

#include "magic/memory_partition_charge_sharing_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_PARTITION_CHARGE_SHARING_INFORMATION]
    // => Windows 11
    //
    struct memory_partition_charge_sharing_information_t          
    {                                                             
        using partition_charge_sharing_t = sdk::array<struct win::memory_partition_charge_sharing_attributes_t, 1>;                         
                                                                  
        // Windows 11                                             
        //                                                        
        _m00 uint32_t                    flags;                     //{ +0x0000    } | .Flags
        _m01 uint32_t                    number_of_types;           //{ +0x0004    } | .NumberOfTypes
        _m02 partition_charge_sharing_t  partition_charge_sharing;  //{ +0x0008    } | .PartitionChargeSharing
                                                                  
        SDK_MAGIC_PROPERTIES( "_MEMORY_PARTITION_CHARGE_SHARING_INFORMATION.$", 0x0, false, 0xb671343f84c474a0 );                         
        SDK_FIXED_SIZE( memory_partition_charge_sharing_information_t, 0x30 );                         
    };                                                            
};
#include "magic/memory_partition_charge_sharing_information_t.end.hpp"
SDK_VERIFY( struct win::memory_partition_charge_sharing_information_t, 0x30 );
