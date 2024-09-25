#pragma once
#include <sdkgen/support_library.hpp>
#include "lock_t.hpp"

#include "magic/scope_map_entry_t.start.hpp"
namespace wnf
{
    // [struct _WNF_SCOPE_MAP_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scope_map_entry_t                   
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                     
        _m00 struct wnf::lock_t map_entry_lock;  //{ +0x0000    +0x0000    +0x0000    } | .MapEntryLock
        _m01 nt::list_entry_t   map_entry_head;  //{ +0x0008    +0x0008    +0x0008    } | .MapEntryHead
                                               
        SDK_MAGIC_PROPERTIES( "_WNF_SCOPE_MAP_ENTRY.$", 0x18, true, 0x7294e56875574a34 );               
        SDK_FIXED_SIZE( scope_map_entry_t, 0x18 );               
    };                                         
};
#include "magic/scope_map_entry_t.end.hpp"
SDK_VERIFY( struct wnf::scope_map_entry_t, 0x18 );
