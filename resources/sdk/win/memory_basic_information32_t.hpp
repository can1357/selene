#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_basic_information32_t.start.hpp"
namespace win
{
    // [struct _MEMORY_BASIC_INFORMATION32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_basic_information32_t  
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t base_address;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint32_t allocation_base;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AllocationBase
        _m02 uint32_t allocation_protect;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationProtect
        _m03 uint32_t region_size;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RegionSize
        _m04 uint32_t state;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .State
        _m05 uint32_t protect;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Protect
        _m06 uint32_t type;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Type
                                         
        SDK_MAGIC_PROPERTIES( "_MEMORY_BASIC_INFORMATION32.$", 0x1c, true, 0x6cdb22de4d931d51 );                   
        SDK_FIXED_SIZE( memory_basic_information32_t, 0x1c );                   
    };                                   
};
#include "magic/memory_basic_information32_t.end.hpp"
SDK_VERIFY( struct win::memory_basic_information32_t, 0x1c );
