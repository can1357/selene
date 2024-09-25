#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/container_id_helper_t.start.hpp"
namespace win
{
    // [class ContainerIdHelper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class container_id_helper_t                      
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                           
        _m00 struct nt::guid_t saved_container_id;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._savedContainerId
        _m01 uint32_t          test_hook_listener_id;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._testHookListenerId
                                                     
        SDK_MAGIC_PROPERTIES( "ContainerIdHelper.$", 0x20, true, 0xe6aff972ddaf3fd2 );                      
        SDK_FIXED_SIZE( container_id_helper_t, 0x20 );                      
    };                                               
};
#include "magic/container_id_helper_t.end.hpp"
SDK_VERIFY( class win::container_id_helper_t, 0x20 );
