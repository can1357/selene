#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/ktmobject_cursor_t.start.hpp"
namespace nt
{
    // [struct _KTMOBJECT_CURSOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ktmobject_cursor_t                                 
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                    
        _m00 struct nt::guid_t                last_query;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LastQuery
        _m01 uint32_t                         object_id_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectIdCount
        _m02 sdk::array<struct nt::guid_t, 1> object_ids;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ObjectIds
                                                              
        SDK_NONVOL_PROPERTIES( "_KTMOBJECT_CURSOR.$", 0x24, true, 0x7ed47cdda67a395f );                
        SDK_FIXED_SIZE( ktmobject_cursor_t, 0x24 );                
    };                                                        
};
#include "magic/ktmobject_cursor_t.end.hpp"
SDK_VERIFY( struct nt::ktmobject_cursor_t, 0x24 );
