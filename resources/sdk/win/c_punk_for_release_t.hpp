#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/stgmedium_t.hpp"

#include "magic/c_punk_for_release_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [class CPunkForRelease]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_punk_for_release_t                          
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                              
        _m00 uint32_t                 c_refs;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
        _m01 uint1_t                  f_top_layer_mfp;    //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | ._fTopLayerMFP
        _m02 struct tag::stgmedium_t  stgmed;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._stgmed
        _m03 struct win::i_unknown_t* p_unk_for_release;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pUnkForRelease
                                                        
        SDK_MAGIC_PROPERTIES( "CPunkForRelease.$", 0x30, true, 0xdf891654dba5aae0 );                  
        SDK_FIXED_SIZE( c_punk_for_release_t, 0x30 );                  
    };                                                  
};
#include "magic/c_punk_for_release_t.end.hpp"
SDK_VERIFY( class win::c_punk_for_release_t, 0x30 );
