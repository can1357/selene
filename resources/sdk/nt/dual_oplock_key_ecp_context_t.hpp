#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/dual_oplock_key_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _DUAL_OPLOCK_KEY_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct dual_oplock_key_ecp_context_t             
    {                                                
        // WDK 10                                    
        //                                           
        _m00 struct nt::guid_t parent_oplock_key;      //{ +0x0000    } | .ParentOplockKey
        _m01 struct nt::guid_t target_oplock_key;      //{ +0x0010    } | .TargetOplockKey
        _m02 uint8_t           parent_oplock_key_set;  //{ +0x0020    } | .ParentOplockKeySet
        _m03 uint8_t           target_oplock_key_set;  //{ +0x0021    } | .TargetOplockKeySet
                                                     
        SDK_NONVOL_PROPERTIES( "_DUAL_OPLOCK_KEY_ECP_CONTEXT.$", 0x0, false, 0x8a202932f8cb44c1 );                      
        SDK_FIXED_SIZE( dual_oplock_key_ecp_context_t, 0x24 );                      
    };                                               
};
#include "magic/dual_oplock_key_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::dual_oplock_key_ecp_context_t, 0x24 );
