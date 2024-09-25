#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;          }
namespace tag { struct rpcolemessage_t; }

#include "magic/orpc_dbg_all_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_rpc_channel_buffer_t;

    // [struct ORPC_DBG_ALL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct orpc_dbg_all_t                                        
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                       
        _m00 uint8_t*                            p_signature;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pSignature
        _m01 struct tag::rpcolemessage_t*        p_message;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pMessage
        _m02 const struct nt::guid_t*            refiid;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .refiid
        _m03 struct win::i_rpc_channel_buffer_t* p_channel;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pChannel
        _m04 struct win::i_unknown_t*            p_unk_proxy_mgr;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pUnkProxyMgr
        _m05 void*                               p_interface;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pInterface
        _m06 struct win::i_unknown_t*            p_unk_object;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pUnkObject
        _m07 sdk::hresult                        hresult;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .hresult
        _m08 void*                               pv_buffer;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pvBuffer
        _m09 uint32_t                            cb_buffer;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .cbBuffer
        _m10 uint32_t*                           lpcb_buffer;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .lpcbBuffer
                                                                 
        SDK_MAGIC_PROPERTIES( "ORPC_DBG_ALL.$", 0x60, true, 0x1d4e4c5520698127 );                
        SDK_FIXED_SIZE( orpc_dbg_all_t, 0x60 );                  
    };                                                           
};
#include "magic/orpc_dbg_all_t.end.hpp"
SDK_VERIFY( struct win::orpc_dbg_all_t, 0x60 );
