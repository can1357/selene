#pragma once
#include <sdkgen/support_library.hpp>
#include "effective_unmarshaling_policy_t.hpp"

#include "magic/c_agg_id_t.start.hpp"
namespace win
{
    struct i_marshal_t;
    struct i_unknown_t;
    class c_std_identity_t;

    // [class CAggId]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_agg_id_t                                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                        
        _m00 uint32_t                                  c_refs;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
        _m01 struct win::i_unknown_t*                  punk_inner;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._punkInner
        _m02 struct win::i_marshal_t*                  pmsh_inner;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pmshInner
        _m03 class win::c_std_identity_t*              p_std_id;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pStdId
        _m04 enum win::effective_unmarshaling_policy_t policy;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._policy
                                                                  
        SDK_MAGIC_PROPERTIES( "CAggId.$", 0x30, true, 0x5aa1a92741e86ead );           
        SDK_FIXED_SIZE( c_agg_id_t, 0x30 );                       
    };                                                            
};
#include "magic/c_agg_id_t.end.hpp"
SDK_VERIFY( class win::c_agg_id_t, 0x30 );
