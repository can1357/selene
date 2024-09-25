#pragma once
#include <sdkgen/support_library.hpp>
#include "revoke_entry_t.hpp"

#include "magic/revoke_classes_t.start.hpp"
namespace win
{
    // [struct _RevokeClasses]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct revoke_classes_t                                    
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                     
        _m00 uint32_t                                  dw_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 sdk::array<struct win::revoke_entry_t, 1> revent;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .revent
                                                               
        SDK_MAGIC_PROPERTIES( "_RevokeClasses.$", 0x18, true, 0x626fd6052caa5cdc );        
        SDK_FIXED_SIZE( revoke_classes_t, 0x18 );              
    };                                                         
};
#include "magic/revoke_classes_t.end.hpp"
SDK_VERIFY( struct win::revoke_classes_t, 0x18 );
