#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/c_winrt_async_server_call_channel_t.start.hpp"
namespace win
{
    struct wire_this_t;
    struct wire_local_this_t;
    class com_call_trace_activity_t;

    // [class CWinrtAsyncServerCallChannel]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_winrt_async_server_call_channel_t                                       
    {                                                                               
        using iid_t = sdk::variant<const struct nt::guid_t&, const struct nt::guid_t>;                           
                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                          
        _m00 const uint16_t                              proc_num;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._procNum
        _m01 iid_t                                       iid;                         //{ +0x0010    +0x000c    +0x000c    +0x000c    } | ._iid
                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                          
        _m02 const struct nt::guid_t                     passthrough_trace_activity;  //{ +0x001c    +0x001c    +0x001c    } | ._passthroughTraceActivity
        _m03 const bool                                  enable_call_tracing;         //{ +0x002c    +0x002c    +0x002c    } | ._enableCallTracing
        _m04 class win::com_call_trace_activity_t const* call_trace_activity;         //{ +0x0030    +0x0030    +0x0030    } | ._callTraceActivity
        _m05 const struct nt::guid_t                     call_id;                     //{ +0x0038    +0x0038    +0x0038    } | ._callId
        _m06 const uint32_t                              client_pid;                  //{ +0x0048    +0x0048    +0x0048    } | ._clientPid
        _m07 const struct win::wire_this_t const*        orpc_this;                   //{ +0x0050    +0x0050    +0x0050    } | ._orpcThis
        _m08 const uint32_t                              size_of_orpc_this;           //{ +0x0058    +0x0058    +0x0058    } | ._sizeOfOrpcThis
        _m09 const struct win::wire_local_this_t const*  local_this;                  //{ +0x0060    +0x0060    +0x0060    } | ._localThis
        _m10 const uint32_t                              size_of_local_this;          //{ +0x0068    +0x0068    +0x0068    } | ._sizeOfLocalThis
        _m11 const void const*                           request_stub_data;           //{ +0x0070    +0x0070    +0x0070    } | ._requestStubData
        _m12 const uint32_t                              size_of_request_stub_data;   //{ +0x0078    +0x0078    +0x0078    } | ._sizeOfRequestStubData
                                                                                    
        SDK_MAGIC_PROPERTIES( "CWinrtAsyncServerCallChannel.$", 0x80, true, 0x5c7c7d5e9e38821c );                           
        SDK_DYNAMIC_SIZE( c_winrt_async_server_call_channel_t );                           
    };                                                                              
};
#include "magic/c_winrt_async_server_call_channel_t.end.hpp"
