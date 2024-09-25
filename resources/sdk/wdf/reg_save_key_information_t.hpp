#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_save_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_SAVE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_save_key_information_t
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    object;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 void*    file_handle;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileHandle
        _m02 uint32_t format;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Format
        _m03 void*    call_context;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CallContext
        _m04 void*    object_context;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ObjectContext
                                     
        SDK_NONVOL_PROPERTIES( "_REG_SAVE_KEY_INFORMATION.$", 0x30, true, 0x125c7f8b063333 );               
        SDK_FIXED_SIZE( reg_save_key_information_t, 0x30 );               
    };                               
};
#include "magic/reg_save_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_save_key_information_t, 0x30 );
