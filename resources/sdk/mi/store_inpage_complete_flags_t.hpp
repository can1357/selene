#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/store_inpage_complete_flags_t.start.hpp"
namespace mi
{
    // [struct _MI_STORE_INPAGE_COMPLETE_FLAGS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct store_inpage_complete_flags_t   
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t entire_flags;          //{ +0x0000    +0x0000    +0x0000    } | .EntireFlags
        _m01 uint1_t  store_fault;           //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .StoreFault
        _m02 uint1_t  low_resource_failure;  //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .LowResourceFailure
        _m03 uint16_t remaining_page_count;  //{ +0x0000@16 +0x0000@16 +0x0000@16 } | .RemainingPageCount
                                           
        SDK_MAGIC_PROPERTIES( "_MI_STORE_INPAGE_COMPLETE_FLAGS.$", 0x4, true, 0xbf516867d46b4f79 );                     
        SDK_FIXED_SIZE( store_inpage_complete_flags_t, 0x4 );                     
    };                                     
};
#include "magic/store_inpage_complete_flags_t.end.hpp"
SDK_VERIFY( struct mi::store_inpage_complete_flags_t, 0x4 );
