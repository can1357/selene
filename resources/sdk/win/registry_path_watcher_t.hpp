#pragma once
#include <sdkgen/support_library.hpp>
#include "registry_key_t.hpp"
#include "registry_key_watcher_t.hpp"

#include "magic/registry_path_watcher_t.start.hpp"
namespace win
{
    // [class RegistryPathWatcher]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class registry_path_watcher_t                                         
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                
        _m00 const class win::registry_key_t   ancestor;                    //{ +0x0000    +0x0000    +0x0000    } | ._ancestor
        _m01 const wchar_t const*              path;                        //{ +0x0008    +0x0008    +0x0008    } | ._path
        _m02 const uint16_t                    path_length;                 //{ +0x0010    +0x0010    +0x0010    } | ._pathLength
        _m03 const uint16_t                    path_element_count;          //{ +0x0012    +0x0012    +0x0012    } | ._pathElementCount
        _m04 uint16_t                          index_currently_registered;  //{ +0x0014    +0x0014    +0x0014    } | ._indexCurrentlyRegistered
        _m05 class win::registry_key_watcher_t watched_key;                 //{ +0x0018    +0x0018    +0x0018    } | ._watchedKey
                                                                          
        SDK_MAGIC_PROPERTIES( "RegistryPathWatcher.$", 0x30, true, 0xa2057ef0e9875ceb );                           
        SDK_DYNAMIC_SIZE( registry_path_watcher_t );                           
    };                                                                    
};
#include "magic/registry_path_watcher_t.end.hpp"
