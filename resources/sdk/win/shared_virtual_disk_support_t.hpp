#pragma once
#include <sdkgen/support_library.hpp>
#include "shared_virtual_disk_handle_state_t.hpp"
#include "shared_virtual_disk_support_type_t.hpp"

#include "magic/shared_virtual_disk_support_t.start.hpp"
namespace win
{
    // [struct _SHARED_VIRTUAL_DISK_SUPPORT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct shared_virtual_disk_support_t                                              
    {                                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                            
        _m00 enum win::shared_virtual_disk_support_type_t shared_virtual_disk_support;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SharedVirtualDiskSupport
        _m01 enum win::shared_virtual_disk_handle_state_t handle_state;                 //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .HandleState
                                                                                      
        SDK_NONVOL_PROPERTIES( "_SHARED_VIRTUAL_DISK_SUPPORT.$", 0x8, true, 0x29d7d88e5ea85dd6 );                            
        SDK_FIXED_SIZE( shared_virtual_disk_support_t, 0x8 );                            
    };                                                                                
};
#include "magic/shared_virtual_disk_support_t.end.hpp"
SDK_VERIFY( struct win::shared_virtual_disk_support_t, 0x8 );
