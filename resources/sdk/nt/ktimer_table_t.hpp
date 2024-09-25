#pragma once
#include <sdkgen/support_library.hpp>
#include "ktimer_table_entry_t.hpp"
#include "ktimer_table_state_t.hpp"

#include "magic/ktimer_table_t.start.hpp"
namespace nt
{
    struct ktimer_t;

    // [struct _KTIMER_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktimer_table_t                                       
    {                                                           
        using timer_entries_t = sdk::variant<sdk::array<struct nt::ktimer_table_entry_t, 256>, sdk::array<sdk::array<struct nt::ktimer_table_entry_t, 256>, 2>>;              
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                      
        _m00 sdk::array<struct nt::ktimer_t*, 64> timer_expiry;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimerExpiry
        _m01 timer_entries_t                      timer_entries;  //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .TimerEntries
                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                      
        _m02 struct nt::ktimer_table_state_t      table_state;    //{ +0x4200    +0x4200    +0x4200    } | .TableState
                                                                
        SDK_MAGIC_PROPERTIES( "_KTIMER_TABLE.$", 0x4218, true, 0x9bf70089a4aa579 );              
        SDK_DYNAMIC_SIZE( ktimer_table_t );                     
    };                                                          
};
#include "magic/ktimer_table_t.end.hpp"
