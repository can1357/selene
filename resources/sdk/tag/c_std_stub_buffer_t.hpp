#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;                           }
namespace win { struct i_call_factory_vtbl_t;            }
namespace win { struct i_release_marshal_buffers_vtbl_t; }
namespace win { struct i_rpc_stub_buffer_vtbl_t;         }
namespace win { struct i_unknown_t;                      }
namespace win { struct ips_factory_buffer_t;             }

#include "magic/c_std_stub_buffer_t.start.hpp"
namespace tag
{
    // [struct tagCStdStubBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_std_stub_buffer_t                                               
    {                                                                        
        using p_rmb_vtbl_t = const struct win::i_release_marshal_buffers_vtbl_t*;                    
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                   
        _m00 const struct win::i_rpc_stub_buffer_vtbl_t* lp_vtbl;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpVtbl
        _m01 int32_t                                     ref_count;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefCount
        _m02 struct win::i_unknown_t*                    pv_server_object;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvServerObject
        _m03 const struct win::i_call_factory_vtbl_t*    p_call_factory_vtbl;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pCallFactoryVtbl
        _m04 const struct nt::guid_t*                    p_async_iid;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pAsyncIID
        _m05 struct win::ips_factory_buffer_t*           p_ps_factory;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pPSFactory
        _m06 p_rmb_vtbl_t                                p_rmb_vtbl;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pRMBVtbl
                                                                             
        SDK_MAGIC_PROPERTIES( "tagCStdStubBuffer.$", 0x38, true, 0x4ffaeff3ea5a9173 );                    
        SDK_FIXED_SIZE( c_std_stub_buffer_t, 0x38 );                         
    };                                                                       
};
#include "magic/c_std_stub_buffer_t.end.hpp"
SDK_VERIFY( struct tag::c_std_stub_buffer_t, 0x38 );
