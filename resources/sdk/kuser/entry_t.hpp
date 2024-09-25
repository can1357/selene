#pragma once
#include <sdkgen/support_library.hpp>
#include "einfo_t.hpp"
#include "objectowner_t.hpp"
#include "upper_handle_bits_t.hpp"

#include "magic/entry_t.start.hpp"
namespace kuser
{
    // [struct _ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entry_t                                              
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                      
        _m00 union kuser::einfo_t             einfo;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .einfo
        _m01 union kuser::objectowner_t       object_owner;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectOwner
        _m02 union kuser::upper_handle_bits_t upper_handle_bits;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UpperHandleBits
        _m03 uint8_t                          objt;               //{ +0x000e    +0x000e    +0x000e    +0x000e    } | .Objt
        _m04 uint8_t                          flags;              //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Flags
        _m05 void*                            p_user;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pUser
                                                                
        SDK_MAGIC_PROPERTIES( "_ENTRY.$", 0x18, true, 0x2617b9b68e07a608 );                  
        SDK_FIXED_SIZE( entry_t, 0x18 );                        
    };                                                          
};
#include "magic/entry_t.end.hpp"
SDK_VERIFY( struct kuser::entry_t, 0x18 );
