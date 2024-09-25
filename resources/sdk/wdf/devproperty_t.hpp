#pragma once
#include <sdkgen/support_library.hpp>
#include "../kuser/devpropcompkey_t.hpp"

#include "magic/devproperty_t.start.hpp"
namespace wdf
{
    // [struct _DEVPROPERTY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct devproperty_t                                
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                              
        _m00 struct kuser::devpropcompkey_t comp_key;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CompKey
        _m01 uint32_t                       type;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Type
        _m02 uint32_t                       buffer_size;  //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .BufferSize
        _m03 void*                          buffer;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .Buffer
                                                        
        SDK_NONVOL_PROPERTIES( "_DEVPROPERTY.$", 0x30, true, 0xb0761d105fc69d79 );            
        SDK_FIXED_SIZE( devproperty_t, 0x30 );            
    };                                                  
};
#include "magic/devproperty_t.end.hpp"
SDK_VERIFY( struct wdf::devproperty_t, 0x30 );
