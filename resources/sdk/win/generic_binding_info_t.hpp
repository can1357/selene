#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/generic_binding_info_t.start.hpp"
namespace win
{
    // [struct __GENERIC_BINDING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct generic_binding_info_t                             
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                    
        _m00 void*                                 p_obj;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pObj
        _m01 uint32_t                              size;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
        _m02 sdk::function<void*(void*)>*          pfn_bind;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnBind
        _m03 sdk::function<void(void*, uint8_t*)>* pfn_unbind;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnUnbind
                                                              
        SDK_MAGIC_PROPERTIES( "__GENERIC_BINDING_INFO.$", 0x20, true, 0x663a72fd27e400c8 );           
        SDK_FIXED_SIZE( generic_binding_info_t, 0x20 );           
    };                                                        
};
#include "magic/generic_binding_info_t.end.hpp"
SDK_VERIFY( struct win::generic_binding_info_t, 0x20 );
