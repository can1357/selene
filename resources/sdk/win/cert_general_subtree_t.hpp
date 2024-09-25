#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_alt_name_entry_t.hpp"

#include "magic/cert_general_subtree_t.start.hpp"
namespace win
{
    // [struct _CERT_GENERAL_SUBTREE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_general_subtree_t                         
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                
        _m00 struct win::cert_alt_name_entry_t base;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Base
        _m01 uint32_t                          dw_minimum;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwMinimum
        _m02 int32_t                           f_maximum;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .fMaximum
        _m03 uint32_t                          dw_maximum;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwMaximum
                                                          
        SDK_MAGIC_PROPERTIES( "_CERT_GENERAL_SUBTREE.$", 0x28, true, 0x1bd9971780898cd2 );           
        SDK_FIXED_SIZE( cert_general_subtree_t, 0x28 );           
    };                                                    
};
#include "magic/cert_general_subtree_t.end.hpp"
SDK_VERIFY( struct win::cert_general_subtree_t, 0x28 );
