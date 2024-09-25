#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_basic_information64_t.start.hpp"
namespace win
{
    // [struct _MEMORY_BASIC_INFORMATION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_basic_information64_t  
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint64_t base_address;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 uint64_t allocation_base;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationBase
        _m02 uint32_t allocation_protect;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AllocationProtect
        _m03 uint32_t alignment1;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .__alignment1
        _m04 uint64_t region_size;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RegionSize
        _m05 uint32_t state;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .State
        _m06 uint32_t protect;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Protect
        _m07 uint32_t type;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Type
        _m08 uint32_t alignment2;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .__alignment2
                                         
        SDK_MAGIC_PROPERTIES( "_MEMORY_BASIC_INFORMATION64.$", 0x30, true, 0x318a801a625441f2 );                   
        SDK_FIXED_SIZE( memory_basic_information64_t, 0x30 );                   
    };                                   
};
#include "magic/memory_basic_information64_t.end.hpp"
SDK_VERIFY( struct win::memory_basic_information64_t, 0x30 );
