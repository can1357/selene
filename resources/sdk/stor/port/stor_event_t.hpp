#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_dispatcher_header_t.hpp"

#include "magic/stor_event_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_EVENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_event_t                                         
    {                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                      
        _m00 struct stor::port::stor_dispatcher_header_t header;  //{ +0x0000    +0x0000    +0x0000    } | .Header
                                                                
        SDK_MAGIC_PROPERTIES( "_STOR_EVENT.$", 0x18, true, 0x888d0a571549235c );       
        SDK_FIXED_SIZE( stor_event_t, 0x18 );                   
    };                                                          
};
#include "magic/stor_event_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_event_t, 0x18 );
