#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/save_ndrslot_t.start.hpp"
namespace win
{
    // [class SAVE_NDRSLOT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class save_ndrslot_t                
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 void*   p_old_slot_value;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pOldSlotValue
        _m01 uint8_t f_succeeded_in_set;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .fSucceededInSet
                                        
        SDK_MAGIC_PROPERTIES( "SAVE_NDRSLOT.$", 0x10, true, 0x936e4af8cd4ba8b9 );                   
        SDK_FIXED_SIZE( save_ndrslot_t, 0x10 );                   
    };                                  
};
#include "magic/save_ndrslot_t.end.hpp"
SDK_VERIFY( class win::save_ndrslot_t, 0x10 );
