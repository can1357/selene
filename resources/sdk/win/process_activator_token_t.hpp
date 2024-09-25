#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/process_activator_token_t.start.hpp"
namespace win
{
    // [struct _ProcessActivatorToken]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_activator_token_t          
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 struct nt::guid_t process_guid;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessGUID
        _m01 struct nt::guid_t activator_ipid;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ActivatorIPID
        _m02 uint32_t          dw_flags;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwFlags
                                              
        SDK_MAGIC_PROPERTIES( "_ProcessActivatorToken.$", 0x24, true, 0x9e6a6046ef81a0c2 );               
        SDK_FIXED_SIZE( process_activator_token_t, 0x24 );               
    };                                        
};
#include "magic/process_activator_token_t.end.hpp"
SDK_VERIFY( struct win::process_activator_token_t, 0x24 );
