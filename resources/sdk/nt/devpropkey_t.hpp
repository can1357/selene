#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/devpropkey_t.start.hpp"
namespace nt
{
    // [struct _DEVPROPKEY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct devpropkey_t              
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                           
        _m00 struct nt::guid_t fmtid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .fmtid
        _m01 uint32_t          pid;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .pid
                                     
        SDK_NONVOL_PROPERTIES( "_DEVPROPKEY.$", 0x14, true, 0x652398831578230b );      
        SDK_FIXED_SIZE( devpropkey_t, 0x14 );      
    };                               
};
#include "magic/devpropkey_t.end.hpp"
SDK_VERIFY( struct nt::devpropkey_t, 0x14 );
