#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_basic_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct memory_basic_information_t    
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 void*    base_address;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 void*    allocation_base;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationBase
        _m02 uint32_t allocation_protect;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocationProtect
        _m03 uint64_t region_size;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .RegionSize
        _m04 uint32_t state;               //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .State
        _m05 uint32_t protect;             //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .Protect
        _m06 uint32_t type;                //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Type
                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m07 uint16_t partition_id;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .PartitionId
                                         
        SDK_NONVOL_PROPERTIES( "_MEMORY_BASIC_INFORMATION.$", 0x30, true, 0xffb1ac5defadbede );                   
        SDK_FIXED_SIZE( memory_basic_information_t, 0x30 );                   
    };                                   
};
#include "magic/memory_basic_information_t.end.hpp"
SDK_VERIFY( struct win::memory_basic_information_t, 0x30 );
