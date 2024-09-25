#pragma once
#include <sdkgen/support_library.hpp>
#include "which_transfer_syntax_t.hpp"

#include "magic/winrt_async_proxy_call_t.start.hpp"
namespace win
{
    // [class WinrtAsyncProxyCall]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_async_proxy_call_t                                              
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                      
        _m00 const bool                        inproc;                            //{ +0x0050    +0x0060    +0x0060    +0x0060    } | ._inproc
        _m01 enum win::which_transfer_syntax_t which_transfer_syntax;             //{ +0x0054    +0x0064    +0x0064    +0x0064    } | ._whichTransferSyntax
        _m02 bool                              successfully_sent_request;         //{ +0x0068    +0x0078    +0x0078    +0x0078    } | ._successfullySentRequest
        _m03 uint32_t                          server_stub_data_length;           //{ +0x0080    +0x0090    +0x0090    +0x0090    } | ._serverStubDataLength
        _m04 bool                              server_operation_object_is_agile;  //{ +0x0098    +0x00a8    +0x00a8    +0x00a8    } | ._serverOperationObjectIsAgile
        _m05 volatile uint32_t                 facade_sequence_number;            //{ +0x009c    +0x00ac    +0x00ac    +0x00ac    } | ._facadeSequenceNumber
                                                                                
        SDK_MAGIC_PROPERTIES( "WinrtAsyncProxyCall.$", 0xb0, true, 0x5354f2641ede661d );                                 
        SDK_DYNAMIC_SIZE( winrt_async_proxy_call_t );                                 
    };                                                                          
};
#include "magic/winrt_async_proxy_call_t.end.hpp"
