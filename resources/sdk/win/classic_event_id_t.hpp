#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/classic_event_id_t.start.hpp"
namespace win
{
    // [struct _CLASSIC_EVENT_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct classic_event_id_t             
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                
        _m00 struct nt::guid_t event_guid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventGuid
        _m01 uint8_t           type;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Type
                                          
        SDK_MAGIC_PROPERTIES( "_CLASSIC_EVENT_ID.$", 0x18, true, 0x28a016e44d63fab1 );           
        SDK_FIXED_SIZE( classic_event_id_t, 0x18 );           
    };                                    
};
#include "magic/classic_event_id_t.end.hpp"
SDK_VERIFY( struct win::classic_event_id_t, 0x18 );
