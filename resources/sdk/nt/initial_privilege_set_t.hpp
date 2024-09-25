#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_and_attributes_t.hpp"

#include "magic/initial_privilege_set_t.start.hpp"
namespace nt
{
    // [struct _INITIAL_PRIVILEGE_SET]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct initial_privilege_set_t                                           
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                   
        _m00 uint32_t                                        privilege_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PrivilegeCount
        _m01 uint32_t                                        control;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Control
        _m02 sdk::array<struct nt::luid_and_attributes_t, 3> privilege;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Privilege
                                                                             
        SDK_NONVOL_PROPERTIES( "_INITIAL_PRIVILEGE_SET.$", 0x2c, true, 0x125811b5e2f9e2cd );                
        SDK_FIXED_SIZE( initial_privilege_set_t, 0x2c );                     
    };                                                                       
};
#include "magic/initial_privilege_set_t.end.hpp"
SDK_VERIFY( struct nt::initial_privilege_set_t, 0x2c );
