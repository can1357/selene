#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_metadata_t.start.hpp"
namespace tlg
{
    // [struct _tlgEventMetadata_t]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_metadata_t          
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint8_t  type;            //{ +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  channel;         //{ +0x0001    +0x0001    +0x0001    } | .Channel
        _m02 uint8_t  level;           //{ +0x0002    +0x0002    +0x0002    } | .Level
        _m03 uint8_t  opcode;          //{ +0x0003    +0x0003    +0x0003    } | .Opcode
        _m04 uint64_t keyword;         //{ +0x0004    +0x0004    +0x0004    } | .Keyword
        _m05 uint16_t remaining_size;  //{ +0x000c    +0x000c    +0x000c    } | .RemainingSize
                                     
        SDK_MAGIC_PROPERTIES( "_tlgEventMetadata_t.$", 0xe, true, 0x7954259f164ac085 );               
        SDK_FIXED_SIZE( event_metadata_t, 0xe );               
    };                               
};
#include "magic/event_metadata_t.end.hpp"
SDK_VERIFY( struct tlg::event_metadata_t, 0xe );
