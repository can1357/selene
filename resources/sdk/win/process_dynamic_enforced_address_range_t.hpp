#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_dynamic_enforced_address_range_t.start.hpp"
namespace win
{
    // [struct _PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE]
    // => Windows 11, Windows 10 v20H2
    //
    struct process_dynamic_enforced_address_range_t
    {                                              
        // Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t base_address;                  //{ +0x0000    +0x0000    } | .BaseAddress
        _m01 uint64_t size;                          //{ +0x0008    +0x0008    } | .Size
        _m02 uint32_t flags;                         //{ +0x0010    +0x0010    } | .Flags
                                                   
        SDK_MAGIC_PROPERTIES( "_PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGE.$", 0x18, true, 0xd5817663327f0537 );             
        SDK_FIXED_SIZE( process_dynamic_enforced_address_range_t, 0x18 );             
    };                                             
};
#include "magic/process_dynamic_enforced_address_range_t.end.hpp"
SDK_VERIFY( struct win::process_dynamic_enforced_address_range_t, 0x18 );
