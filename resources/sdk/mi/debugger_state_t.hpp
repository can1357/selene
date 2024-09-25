#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mmpte_t; }

#include "magic/debugger_state_t.start.hpp"
namespace mi
{
    // [struct _MI_DEBUGGER_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debugger_state_t                                  
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 uint8_t                        transient_write;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransientWrite
        _m01 uint8_t                        code_page_edited;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .CodePageEdited
        _m02 struct nt::mmpte_t*            debug_pte;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DebugPte
        _m03 uint32_t                       poisoned_tb;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PoisonedTb
        _m04 volatile int32_t               in_debugger;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .InDebugger
        _m05 sdk::array<void volatile*, 32> pfns;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Pfns
                                                             
        SDK_MAGIC_PROPERTIES( "_MI_DEBUGGER_STATE.$", 0x118, true, 0xd30095f3c20f1eb6 );                 
        SDK_FIXED_SIZE( debugger_state_t, 0x118 );                 
    };                                                       
};
#include "magic/debugger_state_t.end.hpp"
SDK_VERIFY( struct mi::debugger_state_t, 0x118 );
