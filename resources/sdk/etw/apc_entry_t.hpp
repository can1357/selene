#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kapc_t.hpp"
#include "../nt/slist_entry_t.hpp"

#include "magic/apc_entry_t.start.hpp"
namespace etw
{
    // [struct _ETW_APC_ENTRY]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct apc_entry_t                             
    {                                              
        // Windows 10 v2004, Windows 10 v20H2             
        //                                         
        _m00 struct nt::slist_entry_t s_list_entry;  //{ +0x0000    +0x0000    } | .SListEntry
        _m01 struct nt::kapc_t        apc;           //{ +0x0000    +0x0000    } | .Apc
                                                   
        SDK_MAGIC_PROPERTIES( "_ETW_APC_ENTRY.$", 0x60, true, 0x55a6263aaab6d556 );             
        SDK_FIXED_SIZE( apc_entry_t, 0x60 );             
    };                                             
};
#include "magic/apc_entry_t.end.hpp"
SDK_VERIFY( struct etw::apc_entry_t, 0x60 );
