#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;                          }
namespace win { class cid_object_t;                     }
namespace win { class prevent_rundown_bias_container_t; }
namespace win { struct i_unknown_t;                     }

#include "magic/std_marshal_data_t.start.hpp"
namespace tag
{
    struct objref_t;

    // [struct tagStdMarshalData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct std_marshal_data_t                                                                  
    {                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                     
        _m00 class win::cid_object_t*                     p_id;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pID
        _m01 struct win::i_unknown_t*                     p_server;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pServer
        _m02 const struct nt::guid_t*                     p_iid;                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pIID
        _m03 uint32_t                                     dw_dest_ctx;                           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwDestCtx
        _m04 void*                                        pv_dest_ctx;                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pvDestCtx
        _m05 uint32_t                                     mshlflags;                             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .mshlflags
        _m06 struct tag::objref_t*                        pobjref;                               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pobjref
        _m07 class win::prevent_rundown_bias_container_t* p_bias_container;                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pBiasContainer
        _m08 bool                                         b_apply_direct_marshaling_mitigation;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .bApplyDirectMarshalingMitigation
                                                                                               
        SDK_MAGIC_PROPERTIES( "tagStdMarshalData.$", 0x48, true, 0xc0f277dd13117064 );                                     
        SDK_FIXED_SIZE( std_marshal_data_t, 0x48 );                                            
    };                                                                                         
};
#include "magic/std_marshal_data_t.end.hpp"
SDK_VERIFY( struct tag::std_marshal_data_t, 0x48 );
