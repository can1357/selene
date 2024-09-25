#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queue_tag_list_t.start.hpp"
namespace stor::port
{
    struct queue_tag_entry_t;
    struct queue_tag_list_header_t;

    // [struct _QUEUE_TAG_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct queue_tag_list_t                                            
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                             
        _m00 struct stor::port::queue_tag_list_header_t* header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct stor::port::queue_tag_entry_t*       buffer;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Buffer
        _m02 uint32_t                                    tags_per_node;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .TagsPerNode
                                                                       
        SDK_MAGIC_PROPERTIES( "_QUEUE_TAG_LIST.$", 0x80, true, 0xb7e87429e6d2b93f );              
        SDK_FIXED_SIZE( queue_tag_list_t, 0x80 );                      
    };                                                                 
};
#include "magic/queue_tag_list_t.end.hpp"
SDK_VERIFY( struct stor::port::queue_tag_list_t, 0x80 );
