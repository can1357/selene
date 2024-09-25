#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/oplock_key_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _OPLOCK_KEY_ECP_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct oplock_key_ecp_context_t       
    {                                     
        // WDK 10                         
        //                                
        _m00 struct nt::guid_t oplock_key;  //{ +0x0000    } | .OplockKey
                                          
        SDK_NONVOL_PROPERTIES( "_OPLOCK_KEY_ECP_CONTEXT.$", 0x0, true, 0x1a4d60529d9ed7e1 );           
        SDK_DYNAMIC_SIZE( oplock_key_ecp_context_t );           
    };                                    
};
#include "magic/oplock_key_ecp_context_t.end.hpp"
