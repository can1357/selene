#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/c_std_proxy_buffer_map_t.hpp"
#include "../win/ndr_dcom_async_call_state_t.hpp"

namespace win { struct i_call_factory_vtbl_t;            }
namespace win { struct i_release_marshal_buffers_vtbl_t; }
namespace win { struct i_rpc_channel_buffer_t;           }
namespace win { struct i_rpc_proxy_buffer_t;             }
namespace win { struct i_rpc_proxy_buffer_vtbl_t;        }
namespace win { struct i_unknown_t;                      }
namespace win { struct ips_factory_buffer_t;             }

#include "magic/c_std_async_proxy_buffer_t.start.hpp"
namespace tag
{
    // [struct tagCStdAsyncProxyBuffer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct c_std_async_proxy_buffer_t                                         
    {                                                                         
        using p_rmb_vtbl_t = const struct win::i_release_marshal_buffers_vtbl_t*;                    
                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                    
        _m00 const struct win::i_rpc_proxy_buffer_vtbl_t* lp_vtbl;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpVtbl
        _m01 const void*                                  p_proxy_vtbl;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pProxyVtbl
        _m02 int32_t                                      ref_count;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RefCount
        _m03 struct win::i_unknown_t*                     punk_outer;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .punkOuter
        _m04 struct win::i_rpc_channel_buffer_t*          p_channel;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pChannel
        _m05 struct win::c_std_proxy_buffer_map_t         map;                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .map
        _m06 struct win::i_rpc_proxy_buffer_t*            p_base_proxy_buffer;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pBaseProxyBuffer
        _m07 struct win::ips_factory_buffer_t*            p_ps_factory;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pPSFactory
        _m08 struct nt::guid_t                            iid_base;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .iidBase
        _m09 const struct win::i_call_factory_vtbl_t*     p_call_factory_vtbl;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pCallFactoryVtbl
        _m10 const struct nt::guid_t*                     p_sync_iid;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .pSyncIID
        _m11 p_rmb_vtbl_t                                 p_rmb_vtbl;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .pRMBVtbl
        _m12 struct win::ndr_dcom_async_call_state_t      call_state;           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .CallState
                                                                              
        SDK_MAGIC_PROPERTIES( "tagCStdAsyncProxyBuffer.$", 0x80, true, 0xb775ddffaaba1d5e );                    
        SDK_FIXED_SIZE( c_std_async_proxy_buffer_t, 0x80 );                    
    };                                                                        
};
#include "magic/c_std_async_proxy_buffer_t.end.hpp"
SDK_VERIFY( struct tag::c_std_async_proxy_buffer_t, 0x80 );
