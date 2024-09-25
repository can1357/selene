#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_and_attributes_t.hpp"

#include "magic/privilege_set_t.start.hpp"
namespace nt
{
    // [struct _PRIVILEGE_SET]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct privilege_set_t                                                   
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                   
        _m00 uint32_t                                        privilege_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PrivilegeCount
        _m01 uint32_t                                        control;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Control
        _m02 sdk::array<struct nt::luid_and_attributes_t, 1> privilege;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Privilege
                                                                             
        SDK_NONVOL_PROPERTIES( "_PRIVILEGE_SET.$", 0x14, true, 0xb7c0053173446637 );                
        SDK_FIXED_SIZE( privilege_set_t, 0x14 );                             
    };                                                                       
};
#include "magic/privilege_set_t.end.hpp"
SDK_VERIFY( struct nt::privilege_set_t, 0x14 );
