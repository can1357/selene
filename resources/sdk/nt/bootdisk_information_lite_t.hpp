#pragma once
#include <sdkgen/support_library.hpp>
#include "loader_partition_information_ex_t.hpp"

#include "magic/bootdisk_information_lite_t.start.hpp"
namespace nt
{
    // [struct _BOOTDISK_INFORMATION_LITE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bootdisk_information_lite_t 
    {                                  
        using entries_t = sdk::array<struct nt::loader_partition_information_ex_t, 1>;               
                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                             
        _m00 uint32_t   number_entries;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberEntries
        _m01 entries_t  entries;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Entries
                                       
        SDK_NONVOL_PROPERTIES( "_BOOTDISK_INFORMATION_LITE.$", 0x20, true, 0x382619c6c6cb5bb0 );               
        SDK_FIXED_SIZE( bootdisk_information_lite_t, 0x20 );               
    };                                 
};
#include "magic/bootdisk_information_lite_t.end.hpp"
SDK_VERIFY( struct nt::bootdisk_information_lite_t, 0x20 );
