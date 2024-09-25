#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/oplock_key_context_t.start.hpp"
namespace wdf
{
    // [struct _OPLOCK_KEY_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct oplock_key_context_t                  
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 uint16_t          version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t          flags;              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 struct nt::guid_t parent_oplock_key;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ParentOplockKey
        _m03 struct nt::guid_t target_oplock_key;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TargetOplockKey
                                                 
        SDK_NONVOL_PROPERTIES( "_OPLOCK_KEY_CONTEXT.$", 0x28, true, 0x5d8e4f2171857cab );                  
        SDK_FIXED_SIZE( oplock_key_context_t, 0x28 );                  
    };                                           
};
#include "magic/oplock_key_context_t.end.hpp"
SDK_VERIFY( struct wdf::oplock_key_context_t, 0x28 );
