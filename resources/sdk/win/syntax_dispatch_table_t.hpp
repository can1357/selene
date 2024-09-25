#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/syntax_dispatch_table_t.start.hpp"
namespace win
{
    struct midl_stub_message_t;
    union client_call_return_t;

    // [struct _SYNTAX_DISPATCH_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct syntax_dispatch_table_t                                  
    {                                                               
        using pfn_init_t =                     sdk::function<void(struct win::midl_stub_message_t*, void*)>*;                       
        using pfnsizing_t =                    sdk::function<void(struct win::midl_stub_message_t*, int32_t)>*;                       
        using pfn_marshal_t =                  sdk::function<void(struct win::midl_stub_message_t*)>*;                       
        using pfn_un_marshal_t =               sdk::function<void(struct win::midl_stub_message_t*, void*)>*;                       
        using pfnclient_exception_handling_t = sdk::function<void(struct win::midl_stub_message_t*, uint32_t, int32_t, union win::client_call_return_t*)>*;                       
        using pfn_client_finally_t =           sdk::function<void(struct win::midl_stub_message_t*, void*)>*;                       
        using pfngetbuffer_t =                 sdk::function<uint8_t*(struct win::midl_stub_message_t*, uint32_t, void*)>*;                       
        using pfn_send_receive_t =             sdk::function<void(struct win::midl_stub_message_t*)>*;                       
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                          
        _m00 pfn_init_t                      pfn_init;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pfnInit
        _m01 pfnsizing_t                     pfn_sizing;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pfnSizing
        _m02 pfn_marshal_t                   pfn_marshal;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pfnMarshal
        _m03 pfn_un_marshal_t                pfn_un_marshal;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pfnUnMarshal
        _m04 pfnclient_exception_handling_t  pfn_exception_handling;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pfnExceptionHandling
        _m05 pfn_client_finally_t            pfn_client_finally;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pfnClientFinally
        _m06 pfngetbuffer_t                  pfn_get_buffer;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pfnGetBuffer
        _m07 pfn_send_receive_t              pfn_send_receive;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pfnSendReceive
                                                                    
        SDK_MAGIC_PROPERTIES( "_SYNTAX_DISPATCH_TABLE.$", 0x40, true, 0x27297509541b98b );                       
        SDK_FIXED_SIZE( syntax_dispatch_table_t, 0x40 );                       
    };                                                              
};
#include "magic/syntax_dispatch_table_t.end.hpp"
SDK_VERIFY( struct win::syntax_dispatch_table_t, 0x40 );
