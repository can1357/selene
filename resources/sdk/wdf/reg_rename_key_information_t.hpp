#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_rename_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_RENAME_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_rename_key_information_t       
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 void*             object;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 nt::unicode_view* new_name;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NewName
        _m02 void*             call_context;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CallContext
        _m03 void*             object_context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ObjectContext
                                              
        SDK_NONVOL_PROPERTIES( "_REG_RENAME_KEY_INFORMATION.$", 0x28, true, 0xddb8ec713ad93cfc );               
        SDK_FIXED_SIZE( reg_rename_key_information_t, 0x28 );               
    };                                        
};
#include "magic/reg_rename_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_rename_key_information_t, 0x28 );
