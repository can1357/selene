#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/devpropkey_t.hpp"
#include "../nt/devpropstore_t.hpp"

#include "magic/devpropcompkey_t.start.hpp"
namespace kuser
{
    // [struct _DEVPROPCOMPKEY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct devpropcompkey_t                      
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 struct nt::devpropkey_t key;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Key
        _m01 enum nt::devpropstore_t store;        //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Store
        _m02 const wchar_t*          locale_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LocaleName
                                                 
        SDK_NONVOL_PROPERTIES( "_DEVPROPCOMPKEY.$", 0x20, true, 0x96c5b5de3a120cb3 );            
        SDK_FIXED_SIZE( devpropcompkey_t, 0x20 );            
    };                                           
};
#include "magic/devpropcompkey_t.end.hpp"
SDK_VERIFY( struct kuser::devpropcompkey_t, 0x20 );
