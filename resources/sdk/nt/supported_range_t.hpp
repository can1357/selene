#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/supported_range_t.start.hpp"
namespace nt
{
    struct supported_range_t;

    // [struct _SUPPORTED_RANGE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct supported_range_t                                    
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                      
        _m00 struct nt::supported_range_t* next;                  //{ +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint32_t                      system_address_space;  //{ +0x0008    +0x0008    +0x0008    } | .SystemAddressSpace
        _m02 int64_t                       system_base;           //{ +0x0010    +0x0010    +0x0010    } | .SystemBase
        _m03 int64_t                       base;                  //{ +0x0018    +0x0018    +0x0018    } | .Base
        _m04 int64_t                       limit;                 //{ +0x0020    +0x0020    +0x0020    } | .Limit
                                                                
        SDK_MAGIC_PROPERTIES( "_SUPPORTED_RANGE.$", 0x28, true, 0x857348478b25fae6 );                     
        SDK_FIXED_SIZE( supported_range_t, 0x28 );                     
    };                                                          
};
#include "magic/supported_range_t.end.hpp"
SDK_VERIFY( struct nt::supported_range_t, 0x28 );
