#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_descriptor_t.start.hpp"
namespace nt
{
    // [struct _EVENT_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_descriptor_t 
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint16_t id;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 uint8_t  version;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 uint8_t  channel;  //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .Channel
        _m03 uint8_t  level;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Level
        _m04 uint8_t  opcode;   //{ +0x0005    +0x0005    +0x0005    +0x0005    +0x0005    } | .Opcode
        _m05 uint16_t task;     //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .Task
        _m06 uint64_t keyword;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Keyword
                              
        SDK_NONVOL_PROPERTIES( "_EVENT_DESCRIPTOR.$", 0x10, true, 0xd51ed7e4232007c6 );        
        SDK_FIXED_SIZE( event_descriptor_t, 0x10 );        
    };                        
};
#include "magic/event_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::event_descriptor_t, 0x10 );
