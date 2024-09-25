#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ntpss_memory_bulk_information_t.start.hpp"
namespace win
{
    // [struct _NTPSS_MEMORY_BULK_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ntpss_memory_bulk_information_t
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t query_flags;          //{ +0x0000    +0x0000    +0x0000    } | .QueryFlags
        _m01 uint32_t number_of_entries;    //{ +0x0004    +0x0004    +0x0004    } | .NumberOfEntries
        _m02 void*    next_valid_address;   //{ +0x0008    +0x0008    +0x0008    } | .NextValidAddress
                                          
        SDK_MAGIC_PROPERTIES( "_NTPSS_MEMORY_BULK_INFORMATION.$", 0x10, true, 0xbcf1879bb1e669ca );                   
        SDK_FIXED_SIZE( ntpss_memory_bulk_information_t, 0x10 );                   
    };                                    
};
#include "magic/ntpss_memory_bulk_information_t.end.hpp"
SDK_VERIFY( struct win::ntpss_memory_bulk_information_t, 0x10 );
