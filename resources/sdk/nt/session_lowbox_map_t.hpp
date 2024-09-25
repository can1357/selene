#pragma once
#include <sdkgen/support_library.hpp>
#include "../sep/lowbox_number_mapping_t.hpp"

#include "magic/session_lowbox_map_t.start.hpp"
namespace nt
{
    // [struct _SESSION_LOWBOX_MAP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_lowbox_map_t                             
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                  
        _m00 nt::list_entry_t                    list_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint32_t                            session_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SessionId
        _m02 struct sep::lowbox_number_mapping_t lowbox_map;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LowboxMap
                                                            
        SDK_MAGIC_PROPERTIES( "_SESSION_LOWBOX_MAP.$", 0x40, true, 0x7636360184e996a9 );           
        SDK_FIXED_SIZE( session_lowbox_map_t, 0x40 );           
    };                                                      
};
#include "magic/session_lowbox_map_t.end.hpp"
SDK_VERIFY( struct nt::session_lowbox_map_t, 0x40 );
