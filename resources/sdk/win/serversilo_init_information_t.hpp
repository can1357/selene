#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/serversilo_init_information_t.start.hpp"
namespace win
{
    // [struct _SERVERSILO_INIT_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct serversilo_init_information_t    
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                  
        _m00 void*   delete_event;            //{ +0x0000    +0x0000    +0x0000    } | .DeleteEvent
        _m01 uint8_t is_downlevel_container;  //{ +0x0008    +0x0008    +0x0008    } | .IsDownlevelContainer
                                            
        SDK_MAGIC_PROPERTIES( "_SERVERSILO_INIT_INFORMATION.$", 0x10, true, 0xec1a60d84b78e2d0 );                       
        SDK_FIXED_SIZE( serversilo_init_information_t, 0x10 );                       
    };                                      
};
#include "magic/serversilo_init_information_t.end.hpp"
SDK_VERIFY( struct win::serversilo_init_information_t, 0x10 );
