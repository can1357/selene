#pragma once
#include <sdkgen/support_library.hpp>
#include "registry_key_t.hpp"

#include "magic/registry_key_watcher_t.start.hpp"
namespace win
{
    // [class RegistryKeyWatcher]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class registry_key_watcher_t           
    {                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                                 
        _m00 class win::registry_key_t key;  //{ +0x0000    +0x0000    +0x0000    } | ._key
                                           
        SDK_MAGIC_PROPERTIES( "RegistryKeyWatcher.$", 0x18, true, 0x14386b8f8c98b587 );    
        SDK_DYNAMIC_SIZE( registry_key_watcher_t );    
    };                                     
};
#include "magic/registry_key_watcher_t.end.hpp"
