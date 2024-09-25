#pragma once
#include <sdkgen/support_library.hpp>
#include "single_list_entry_t.hpp"

#include "magic/kwait_chain_t.start.hpp"
namespace nt
{
    // [struct _KWAIT_CHAIN]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kwait_chain_t  
    {                     
        using head_t = sdk::variant<void*, struct nt::single_list_entry_t>;     
                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                
        _m00 head_t  head;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Head
                          
        SDK_NONVOL_PROPERTIES( "_KWAIT_CHAIN.$", 0x8, true, 0x99d85ce04892b248 );     
        SDK_FIXED_SIZE( kwait_chain_t, 0x8 );     
    };                    
};
#include "magic/kwait_chain_t.end.hpp"
SDK_VERIFY( struct nt::kwait_chain_t, 0x8 );
