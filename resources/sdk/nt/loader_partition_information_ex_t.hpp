#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/loader_partition_information_ex_t.start.hpp"
namespace nt
{
    // [struct _LOADER_PARTITION_INFORMATION_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct loader_partition_information_ex_t    
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m00 uint32_t          partition_style;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PartitionStyle
        _m01 uint32_t          partition_number;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .PartitionNumber
        _m02 uint32_t          signature;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Signature
        _m03 struct nt::guid_t device_id;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceId
        _m04 uint32_t          flags;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                                
        SDK_NONVOL_PROPERTIES( "_LOADER_PARTITION_INFORMATION_EX.$", 0x1c, true, 0x7eede8b998e8bed4 );                 
        SDK_FIXED_SIZE( loader_partition_information_ex_t, 0x1c );                 
    };                                          
};
#include "magic/loader_partition_information_ex_t.end.hpp"
SDK_VERIFY( struct nt::loader_partition_information_ex_t, 0x1c );
