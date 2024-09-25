#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_delete_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_DELETE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_delete_key_information_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* object;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 void* call_context;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CallContext
        _m02 void* object_context;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectContext
                                       
        SDK_NONVOL_PROPERTIES( "_REG_DELETE_KEY_INFORMATION.$", 0x20, true, 0x96739b4444b1746d );               
        SDK_FIXED_SIZE( reg_delete_key_information_t, 0x20 );               
    };                                 
};
#include "magic/reg_delete_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_delete_key_information_t, 0x20 );
