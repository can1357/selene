#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct ipid_entry_t;    }
namespace tag { struct rpcolemessage_t; }

#include "magic/apartment_type_specific_routines_t.start.hpp"
namespace win
{
    class c_ole_tls_t;
    class c_async_call_t;
    class c_com_apartment_t;
    class c_channel_object_t;
    class c_server_channel_t;
    struct i_rpc_stub_buffer_t;
    class winrt_async_response_t;
    class winrt_async_server_continuation_message_t;

    // [struct ApartmentTypeSpecificRoutines]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct apartment_type_specific_routines_t                                                   
    {                                                                                           
        using get_current_com_apartment_t =               sdk::function<class win::c_com_apartment_t*(class win::c_ole_tls_t&)>*;                                        
        using signal_apartment_client_t =                 sdk::function<void(class win::c_async_call_t*, class win::c_channel_object_t*)>*;                                        
        using invoke_in_apartment_t =                     sdk::function<sdk::hresult(struct tag::rpcolemessage_t*, uint32_t, bool, struct win::i_rpc_stub_buffer_t*, class win::c_server_channel_t*, struct tag::ipid_entry_t*, uint32_t*)>*;                                        
        using deliver_cross_thread_response_to_client_t = sdk::function<sdk::hresult(class win::winrt_async_response_t*)>*;                                        
        using deliver_cross_thread_cancel_to_server_t =   sdk::function<void(class win::winrt_async_server_continuation_message_t*)>*;                                        
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                      
        _m00 get_current_com_apartment_t                get_current_com_apartment;                //{ +0x0000    +0x0000    +0x0000    } | .GetCurrentComApartment
        _m01 sdk::function<bool()>*                     is_initialized_and_not_uninitializing;    //{ +0x0008    +0x0008    +0x0008    } | .IsInitializedAndNotUninitializing
        _m02 sdk::function<sdk::hresult(void**)>*       create_apartment_state;                   //{ +0x0010    +0x0010    +0x0010    } | .CreateApartmentState
        _m03 sdk::function<void(void*)>*                release_apartment_state;                  //{ +0x0018    +0x0018    +0x0018    } | .ReleaseApartmentState
        _m04 sdk::function<uint32_t()>*                 get_server_reported_oxid_flags;           //{ +0x0020    +0x0020    +0x0020    } | .GetServerReportedOxidFlags
        _m05 signal_apartment_client_t                  signal_apartment_client;                  //{ +0x0028    +0x0028    +0x0028    } | .SignalApartmentClient
        _m06 invoke_in_apartment_t                      invoke_in_apartment;                      //{ +0x0030    +0x0030    +0x0030    } | .InvokeInApartment
        _m07 deliver_cross_thread_response_to_client_t  deliver_cross_thread_response_to_client;  //{ +0x0038    +0x0038    +0x0038    } | .DeliverCrossThreadResponseToClient
        _m08 deliver_cross_thread_cancel_to_server_t    deliver_cross_thread_cancel_to_server;    //{ +0x0040    +0x0040    +0x0040    } | .DeliverCrossThreadCancelToServer
                                                                                                
        SDK_MAGIC_PROPERTIES( "ApartmentTypeSpecificRoutines.$", 0x48, true, 0x5b21dc4ddc7ae83c );                                        
        SDK_FIXED_SIZE( apartment_type_specific_routines_t, 0x48 );                                        
    };                                                                                          
};
#include "magic/apartment_type_specific_routines_t.end.hpp"
SDK_VERIFY( struct win::apartment_type_specific_routines_t, 0x48 );
