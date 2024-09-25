#pragma once
#include <sdkgen/support_library.hpp>
#include "watchdog_information_class_t.hpp"

#include "magic/system_watchdog_timer_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_WATCHDOG_TIMER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_watchdog_timer_information_t                    
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                        
        _m00 enum win::watchdog_information_class_t wd_info_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WdInfoClass
        _m01 uint32_t                               data_value;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DataValue
                                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_WATCHDOG_TIMER_INFORMATION.$", 0x8, true, 0xe7f0ab55feac2592 );              
        SDK_FIXED_SIZE( system_watchdog_timer_information_t, 0x8 );              
    };                                                            
};
#include "magic/system_watchdog_timer_information_t.end.hpp"
SDK_VERIFY( struct win::system_watchdog_timer_information_t, 0x8 );
