#pragma once
#include <sdkgen/support_library.hpp>
#include "event_log_entry_id_t.hpp"
#include "event_log_entry_type_t.hpp"
#include "event_log_entry_flags_t.hpp"

#include "magic/event_log_entry_header_t.start.hpp"
namespace whea
{
    // [struct _WHEA_EVENT_LOG_ENTRY_HEADER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct event_log_entry_header_t                             
    {                                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                      
        _m00 uint32_t                            signature;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                            version;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t                            length;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m03 enum whea::event_log_entry_type_t   type;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Type
        _m04 uint32_t                            owner_tag;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OwnerTag
        _m05 enum whea::event_log_entry_id_t     id;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Id
        _m06 union whea::event_log_entry_flags_t flags;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m07 uint32_t                            payload_length;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PayloadLength
                                                                
        SDK_NONVOL_PROPERTIES( "_WHEA_EVENT_LOG_ENTRY_HEADER.$", 0x20, true, 0xb6982a177851549c );               
        SDK_FIXED_SIZE( event_log_entry_header_t, 0x20 );               
    };                                                          
};
#include "magic/event_log_entry_header_t.end.hpp"
SDK_VERIFY( struct whea::event_log_entry_header_t, 0x20 );
