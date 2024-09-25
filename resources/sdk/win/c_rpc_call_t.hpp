#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "callsource_t.hpp"

namespace tag { struct rpcolemessage_t; }

#include "magic/c_rpc_call_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [class CRpcCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_rpc_call_t                                    
    {                                                     
        using p_identity_t = sdk::variant<struct win::i_unknown_t*&, struct win::i_unknown_t*>;                
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 uint32_t                     c_refs;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._cRefs
        _m01 p_identity_t                 p_identity;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pIdentity
        _m02 struct tag::rpcolemessage_t* p_message;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pMessage
        _m03 sdk::hresult&                hr_ret;           //{ +0x0038    +0x0038    +0x0040    +0x0038    } | ._hrRet
        _m04 enum win::callsource_t       call_source;      //{ +0x0040    +0x0040    +0x0048    +0x0040    } | ._callSource
        _m05 sdk::hresult                 server_hr;        //{ +0x0044    +0x0044    +0x004c    +0x0044    } | ._ServerHR
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                
        //                                                
        _m06 const struct nt::guid_t&     riid;             //{ +0x0030    +0x0030    +0x0030    } | ._riid
                                                          
        // Windows 11                                     
        //                                                
        _m07 struct nt::guid_t            iid;              //{ +0x0030    } | ._iid
        _m08 sdk::hresult                 embedded_hr_ret;  //{ +0x0050    } | ._embeddedHrRet
                                                          
        SDK_MAGIC_PROPERTIES( "CRpcCall.$", 0x48, true, 0xc6836d8bf21c35dc );                
        SDK_DYNAMIC_SIZE( c_rpc_call_t );                 
    };                                                    
};
#include "magic/c_rpc_call_t.end.hpp"
