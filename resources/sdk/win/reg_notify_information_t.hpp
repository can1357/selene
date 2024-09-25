#pragma once
#include <sdkgen/support_library.hpp>
#include "reg_action_t.hpp"

#include "magic/reg_notify_information_t.start.hpp"
namespace win
{
    // [struct _REG_NOTIFY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reg_notify_information_t                   
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint32_t               next_entry_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 enum win::reg_action_t action;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Action
        _m02 uint32_t               key_length;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyLength
        _m03 sdk::array<wchar_t, 1> key;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Key
                                                      
        SDK_MAGIC_PROPERTIES( "_REG_NOTIFY_INFORMATION.$", 0x10, true, 0x422b80a7c896e274 );                  
        SDK_FIXED_SIZE( reg_notify_information_t, 0x10 );                  
    };                                                
};
#include "magic/reg_notify_information_t.end.hpp"
SDK_VERIFY( struct win::reg_notify_information_t, 0x10 );
