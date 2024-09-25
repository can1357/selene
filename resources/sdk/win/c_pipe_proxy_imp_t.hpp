#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/c_pipe_proxy_imp_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_rpc_proxy_buffer_t;

    // [class CPipeProxyImp]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_pipe_proxy_imp_t                                           
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                             
        _m00 int32_t                           m_c_ref;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_cRef
        _m01 struct win::i_unknown_t*          m_p_unk_outer;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_pUnkOuter
        _m02 struct win::i_unknown_t*          m_p_real_pipe_proxy;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_pRealPipeProxy
        _m03 struct win::i_unknown_t*          m_p_internal_pipe_proxy;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_pInternalPipeProxy
        _m04 struct win::i_rpc_proxy_buffer_t* m_p_internal_pb;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_pInternalPB
        _m05 struct nt::guid_t                 m_iid_of_pipe;            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_IidOfPipe
                                                                       
        SDK_MAGIC_PROPERTIES( "CPipeProxyImp.$", 0x40, true, 0x7377baf365f41a41 );                        
        SDK_FIXED_SIZE( c_pipe_proxy_imp_t, 0x40 );                        
    };                                                                 
};
#include "magic/c_pipe_proxy_imp_t.end.hpp"
SDK_VERIFY( class win::c_pipe_proxy_imp_t, 0x40 );
