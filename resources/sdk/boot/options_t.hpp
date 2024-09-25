#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/options_t.start.hpp"
namespace boot
{
    // [struct _BOOT_OPTIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct options_t                                      
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               version;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t               length;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint32_t               timeout;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Timeout
        _m03 uint32_t               current_boot_entry_id;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .CurrentBootEntryId
        _m04 uint32_t               next_boot_entry_id;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NextBootEntryId
        _m05 sdk::array<wchar_t, 1> headless_redirection;   //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .HeadlessRedirection
                                                          
        SDK_NONVOL_PROPERTIES( "_BOOT_OPTIONS.$", 0x18, true, 0x4faa0c1d1d81abb7 );                      
        SDK_FIXED_SIZE( options_t, 0x18 );                      
    };                                                    
};
#include "magic/options_t.end.hpp"
SDK_VERIFY( struct boot::options_t, 0x18 );
