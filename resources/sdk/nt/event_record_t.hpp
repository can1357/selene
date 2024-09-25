#pragma once
#include <sdkgen/support_library.hpp>
#include "event_header_t.hpp"
#include "../etw/buffer_context_t.hpp"

#include "magic/event_record_t.start.hpp"
namespace nt
{
    struct event_header_extended_data_item_t;

    // [struct _EVENT_RECORD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_record_t                                                      
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                     
        _m00 struct nt::event_header_t                     event_header;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventHeader
        _m01 struct etw::buffer_context_t                  buffer_context;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .BufferContext
        _m02 uint16_t                                      extended_data_count;  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ExtendedDataCount
        _m03 uint16_t                                      user_data_length;     //{ +0x0056    +0x0056    +0x0056    +0x0056    } | .UserDataLength
        _m04 struct nt::event_header_extended_data_item_t* extended_data;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ExtendedData
        _m05 void*                                         user_data;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .UserData
        _m06 void*                                         user_context;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .UserContext
                                                                               
        SDK_MAGIC_PROPERTIES( "_EVENT_RECORD.$", 0x70, true, 0xe002257a2bb61b55 );                    
        SDK_FIXED_SIZE( event_record_t, 0x70 );                                
    };                                                                         
};
#include "magic/event_record_t.end.hpp"
SDK_VERIFY( struct nt::event_record_t, 0x70 );
