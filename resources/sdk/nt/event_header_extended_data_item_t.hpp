#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_header_extended_data_item_t.start.hpp"
namespace nt
{
    // [struct _EVENT_HEADER_EXTENDED_DATA_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_header_extended_data_item_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint16_t ext_type;               //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ExtType
        _m01 uint1_t  linkage;                //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Linkage
        _m02 uint16_t data_size;              //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .DataSize
        _m03 uint64_t data_ptr;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataPtr
                                            
        SDK_MAGIC_PROPERTIES( "_EVENT_HEADER_EXTENDED_DATA_ITEM.$", 0x10, true, 0xceffb3fe98f8e109 );          
        SDK_FIXED_SIZE( event_header_extended_data_item_t, 0x10 );          
    };                                      
};
#include "magic/event_header_extended_data_item_t.end.hpp"
SDK_VERIFY( struct nt::event_header_extended_data_item_t, 0x10 );
