#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysptes_header_t.start.hpp"
namespace nt
{
    // [struct _SYSPTES_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysptes_header_t                                          
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                           
        _m00 sdk::array<nt::list_entry_t, 16> list_head;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 uint64_t                         count;                   //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .Count
        _m02 uint64_t                         number_of_entries;       //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .NumberOfEntries
        _m03 uint64_t                         number_of_entries_peak;  //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .NumberOfEntriesPeak
                                                                     
        SDK_MAGIC_PROPERTIES( "_SYSPTES_HEADER.$", 0x118, true, 0xd8d547d334202b49 );                       
        SDK_FIXED_SIZE( sysptes_header_t, 0x118 );                       
    };                                                               
};
#include "magic/sysptes_header_t.end.hpp"
SDK_VERIFY( struct nt::sysptes_header_t, 0x118 );
