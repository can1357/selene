#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmsecure_flags_t.start.hpp"
namespace nt
{
    // [struct _MMSECURE_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct mmsecure_flags_t                
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                      
        //                                 
        _m00 uint1_t read_only;              //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .ReadOnly
        _m01 uint1_t read_write;             //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .ReadWrite
        _m02 uint1_t sec_no_change;          //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .SecNoChange
        _m03 uint1_t no_delete;              //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .NoDelete
        _m04 uint1_t requires_pte_reversal;  //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .RequiresPteReversal
        _m05 uint1_t exclusive_secure;       //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .ExclusiveSecure
                                           
        // Windows 10 v2004, Windows 10 v20H2                      
        //                                 
        _m06 uint1_t user_mode_only;         //{ +0x0000@6  +0x0000@6  } | .UserModeOnly
        _m07 uint1_t no_inherit;             //{ +0x0000@7  +0x0000@7  } | .NoInherit
        _m08 uint1_t check_vad;              //{ +0x0000@8  +0x0000@8  } | .CheckVad
                                           
        SDK_MAGIC_PROPERTIES( "_MMSECURE_FLAGS.$", 0x4, true, 0x9fe2d2d60fb16e32 );                      
        SDK_FIXED_SIZE( mmsecure_flags_t, 0x4 );                      
    };                                     
};
#include "magic/mmsecure_flags_t.end.hpp"
SDK_VERIFY( struct nt::mmsecure_flags_t, 0x4 );
