#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/slist_header_t.hpp"

#include "magic/queue_tag_list_header_t.start.hpp"
namespace stor::port
{
    // [struct _QUEUE_TAG_LIST_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct queue_tag_list_header_t                
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 union nt::slist_header_t list_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListHeader
                                                  
        SDK_MAGIC_PROPERTIES( "_QUEUE_TAG_LIST_HEADER.$", 0x40, true, 0x5038b8e1f917ccf9 );            
        SDK_FIXED_SIZE( queue_tag_list_header_t, 0x40 );            
    };                                            
};
#include "magic/queue_tag_list_header_t.end.hpp"
SDK_VERIFY( struct stor::port::queue_tag_list_header_t, 0x40 );
