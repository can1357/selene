#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/slist_entry_t.hpp"

#include "magic/raid_deferred_header_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_DEFERRED_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_deferred_header_t          
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                 
        _m00 struct nt::slist_entry_t link;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 int32_t                  pool;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Pool
                                           
        SDK_MAGIC_PROPERTIES( "_RAID_DEFERRED_HEADER.$", 0x20, true, 0x96692d6ca5ed1b7 );     
        SDK_FIXED_SIZE( raid_deferred_header_t, 0x20 );     
    };                                     
};
#include "magic/raid_deferred_header_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_deferred_header_t, 0x20 );
