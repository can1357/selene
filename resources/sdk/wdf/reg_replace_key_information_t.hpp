#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_replace_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_REPLACE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_replace_key_information_t      
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 void*             object;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 nt::unicode_view* old_file_name;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .OldFileName
        _m02 nt::unicode_view* new_file_name;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NewFileName
        _m03 void*             call_context;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CallContext
        _m04 void*             object_context;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ObjectContext
                                              
        SDK_NONVOL_PROPERTIES( "_REG_REPLACE_KEY_INFORMATION.$", 0x30, true, 0x124d57e1d7158c6b );               
        SDK_FIXED_SIZE( reg_replace_key_information_t, 0x30 );               
    };                                        
};
#include "magic/reg_replace_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_replace_key_information_t, 0x30 );
