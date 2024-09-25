#pragma once
#include <sdkgen/support_library.hpp>
#include "entry_t.hpp"

#include "magic/entry_list_t.start.hpp"
namespace boot
{
    // [struct _BOOT_ENTRY_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entry_list_t                             
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                          
        _m00 uint32_t             next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 struct boot::entry_t boot_entry;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BootEntry
                                                    
        SDK_MAGIC_PROPERTIES( "_BOOT_ENTRY_LIST.$", 0x24, true, 0x5380e607ea5a5119 );                  
        SDK_FIXED_SIZE( entry_list_t, 0x24 );                  
    };                                              
};
#include "magic/entry_list_t.end.hpp"
SDK_VERIFY( struct boot::entry_list_t, 0x24 );
