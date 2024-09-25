#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_extended_item_pebs_index_t.start.hpp"
namespace win
{
    // [struct _EVENT_EXTENDED_ITEM_PEBS_INDEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_extended_item_pebs_index_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint64_t pebs_index;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PebsIndex
                                           
        SDK_MAGIC_PROPERTIES( "_EVENT_EXTENDED_ITEM_PEBS_INDEX.$", 0x8, true, 0xcd70793b353de9f0 );           
        SDK_FIXED_SIZE( event_extended_item_pebs_index_t, 0x8 );           
    };                                     
};
#include "magic/event_extended_item_pebs_index_t.end.hpp"
SDK_VERIFY( struct win::event_extended_item_pebs_index_t, 0x8 );
