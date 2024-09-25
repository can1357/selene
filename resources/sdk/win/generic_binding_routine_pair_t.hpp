#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/generic_binding_routine_pair_t.start.hpp"
namespace win
{
    // [struct _GENERIC_BINDING_ROUTINE_PAIR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct generic_binding_routine_pair_t                     
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                    
        _m00 sdk::function<void*(void*)>*          pfn_bind;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnBind
        _m01 sdk::function<void(void*, uint8_t*)>* pfn_unbind;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnUnbind
                                                              
        SDK_MAGIC_PROPERTIES( "_GENERIC_BINDING_ROUTINE_PAIR.$", 0x10, true, 0xed6c4420571f1814 );           
        SDK_FIXED_SIZE( generic_binding_routine_pair_t, 0x10 );           
    };                                                        
};
#include "magic/generic_binding_routine_pair_t.end.hpp"
SDK_VERIFY( struct win::generic_binding_routine_pair_t, 0x10 );
