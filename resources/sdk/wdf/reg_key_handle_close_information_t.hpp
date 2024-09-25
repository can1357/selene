#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_key_handle_close_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_KEY_HANDLE_CLOSE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_key_handle_close_information_t
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* object;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 void* call_context;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CallContext
        _m02 void* object_context;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectContext
                                             
        SDK_NONVOL_PROPERTIES( "_REG_KEY_HANDLE_CLOSE_INFORMATION.$", 0x20, true, 0xae6bc9e64a7f7129 );               
        SDK_FIXED_SIZE( reg_key_handle_close_information_t, 0x20 );               
    };                                       
};
#include "magic/reg_key_handle_close_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_key_handle_close_information_t, 0x20 );
