#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "c_dest_object_t.hpp"

namespace tag { struct ipid_entry_t; }

#include "magic/c_client_channel_t.start.hpp"
namespace win
{
    class c_channel_handle_t;

    // [class CClientChannel]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_client_channel_t                                          
    {                                                                 
        using dest_obj_t = sdk::variant<class win::c_dest_object_t, const class win::c_dest_object_t>;                 
                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                            
        _m00 const struct nt::guid_t                 guid_signature;    //{ +0x0048    +0x0058    +0x0058    +0x0058    } | ._guidSignature
        _m01 const uint32_t                          dw_tid_callee;     //{ +0x0058    +0x0068    +0x0068    +0x0068    } | ._dwTIDCallee
        _m02 dest_obj_t                              dest_obj;          //{ +0x0080    +0x0070    +0x0070    +0x0070    } | ._destObj
        _m03 struct tag::ipid_entry_t*               p_ipid_entry;      //{ +0x0060    +0x0098    +0x0098    +0x0098    } | ._pIPIDEntry
        _m04 class win::c_channel_handle_t volatile* p_rpc_default;     //{ +0x0068    +0x00a0    +0x00a0    +0x00a0    } | ._pRpcDefault
        _m05 class win::c_channel_handle_t*          p_rpc_custom;      //{ +0x0070    +0x00a8    +0x00a8    +0x00a8    } | ._pRpcCustom
        _m06 void*                                   p_interface_info;  //{ +0x0078    +0x00b0    +0x00b0    +0x00b0    } | ._pInterfaceInfo
                                                                      
        SDK_MAGIC_PROPERTIES( "CClientChannel.$", 0xb8, true, 0xbf3b2a950572bbb );                 
        SDK_DYNAMIC_SIZE( c_client_channel_t );                       
    };                                                                
};
#include "magic/c_client_channel_t.end.hpp"
