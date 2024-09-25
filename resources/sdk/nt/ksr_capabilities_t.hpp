#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksr_capabilities_t.start.hpp"
namespace nt
{
    // [union _KSR_CAPABILITIES]
    // => Windows 11
    //
    union ksr_capabilities_t             
    {                                    
        // Windows 11                    
        //                               
        _m00 uint1_t  perennial_database;  //{ +0x0000@0  } | .PerennialDatabase
        _m01 uint1_t  skip_sub_allocator;  //{ +0x0000@1  } | .SkipSubAllocator
        _m02 uint32_t as_u_long;           //{ +0x0000    } | .AsULong
                                         
        SDK_MAGIC_PROPERTIES( "_KSR_CAPABILITIES.$", 0x0, false, 0x1f5878661eac9da2 );                   
        SDK_FIXED_SIZE( ksr_capabilities_t, 0x4 );                   
    };                                   
};
#include "magic/ksr_capabilities_t.end.hpp"
SDK_VERIFY( union nt::ksr_capabilities_t, 0x4 );
