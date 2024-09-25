#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/slist_entry_t.hpp"

#include "magic/queue_tag_entry_t.start.hpp"
namespace stor::port
{
    // [struct _QUEUE_TAG_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct queue_tag_entry_t                
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                  
        _m00 struct nt::slist_entry_t entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Entry
        _m01 void*                    dummy;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Dummy
        _m02 uint32_t                 tag;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
                                            
        SDK_MAGIC_PROPERTIES( "_QUEUE_TAG_ENTRY.$", 0x10, true, 0x765f42d2bfc3c10c );      
        SDK_FIXED_SIZE( queue_tag_entry_t, 0x10 );      
    };                                      
};
#include "magic/queue_tag_entry_t.end.hpp"
SDK_VERIFY( struct stor::port::queue_tag_entry_t, 0x10 );
