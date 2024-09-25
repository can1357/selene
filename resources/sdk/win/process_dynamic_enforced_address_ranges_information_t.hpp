#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_dynamic_enforced_address_ranges_information_t.start.hpp"
namespace win
{
    struct process_dynamic_enforced_address_range_t;

    // [struct _PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGES_INFORMATION]
    // => Windows 11, Windows 10 v20H2
    //
    struct process_dynamic_enforced_address_ranges_information_t         
    {                                                                    
        using pprocess_dynamic_enforced_address_range_t = struct win::process_dynamic_enforced_address_range_t*;                 
                                                                         
        // Windows 11, Windows 10 v20H2                                  
        //                                                               
        _m00 uint16_t                                   number_of_ranges;  //{ +0x0000    +0x0000    } | .NumberOfRanges
        _m01 pprocess_dynamic_enforced_address_range_t  ranges;            //{ +0x0008    +0x0008    } | .Ranges
                                                                         
        SDK_MAGIC_PROPERTIES( "_PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGES_INFORMATION.$", 0x10, true, 0xf20349ea7c592979 );                 
        SDK_FIXED_SIZE( process_dynamic_enforced_address_ranges_information_t, 0x10 );                 
    };                                                                   
};
#include "magic/process_dynamic_enforced_address_ranges_information_t.end.hpp"
SDK_VERIFY( struct win::process_dynamic_enforced_address_ranges_information_t, 0x10 );
