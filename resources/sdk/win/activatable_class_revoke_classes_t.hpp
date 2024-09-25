#pragma once
#include <sdkgen/support_library.hpp>
#include "activatable_class_revoke_entry_t.hpp"

#include "magic/activatable_class_revoke_classes_t.start.hpp"
namespace win
{
    // [struct ActivatableClassRevokeClasses]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activatable_class_revoke_classes_t
    {                                        
        using revent_t = sdk::array<struct win::activatable_class_revoke_entry_t, 1>;        
                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                     
        _m00 uint32_t  dw_size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 revent_t  revent;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .revent
                                             
        SDK_MAGIC_PROPERTIES( "ActivatableClassRevokeClasses.$", 0x20, true, 0x7b18745fdf1d410a );        
        SDK_FIXED_SIZE( activatable_class_revoke_classes_t, 0x20 );        
    };                                       
};
#include "magic/activatable_class_revoke_classes_t.end.hpp"
SDK_VERIFY( struct win::activatable_class_revoke_classes_t, 0x20 );
