#pragma once
#include <sdkgen/support_library.hpp>
#include "system_pool_entry_t.hpp"

#include "magic/system_pool_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POOL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_pool_information_t                                          
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                    
        _m00 uint64_t                                       total_size;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalSize
        _m01 void*                                          first_entry;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FirstEntry
        _m02 uint16_t                                       entry_overhead;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .EntryOverhead
        _m03 uint8_t                                        pool_tag_present;   //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .PoolTagPresent
        _m04 uint32_t                                       number_of_entries;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumberOfEntries
        _m05 sdk::array<struct win::system_pool_entry_t, 1> entries;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Entries
                                                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POOL_INFORMATION.$", 0x28, true, 0xf6f5d3b001954975 );                  
        SDK_FIXED_SIZE( system_pool_information_t, 0x28 );                    
    };                                                                        
};
#include "magic/system_pool_information_t.end.hpp"
SDK_VERIFY( struct win::system_pool_information_t, 0x28 );
