#pragma once
#include <sdkgen/support_library.hpp>
#include "wait_for_call_reason_t.hpp"
#include "send_message_to_classic_sta_reason_t.hpp"

namespace nt  { struct guid_t;          }
namespace tag { struct rpcolemessage_t; }

#include "magic/thread_type_specific_routines_t.start.hpp"
namespace win
{
    struct hwnd_t;
    class oxid_entry_t;
    class client_call_t;
    class c_channel_object_t;
    class c_sync_client_call_t;

    // [struct ThreadTypeSpecificRoutines]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_type_specific_routines_t                                                                      
    {                                                                                                           
        using wait_for_handles_t =                                sdk::function<sdk::hresult(uint32_t, uint32_t, uint32_t, void**, uint32_t*)>*;                                                
        using signal_mta_client_t =                               sdk::function<void(class win::c_channel_object_t*)>*;                                                
        using signal_na_client_t =                                sdk::function<void(class win::c_channel_object_t*)>*;                                                
        using check_and_adjust_rpc_flags_in_client_get_buffer_t = sdk::function<sdk::hresult(struct tag::rpcolemessage_t*, const struct nt::guid_t&, bool)>*;                                                
        using can_make_out_call_t =                               sdk::variant<sdk::function<sdk::hresult(uint32_t, const struct nt::guid_t&, struct tag::rpcolemessage_t*)>*, sdk::function<sdk::hresult(bool, bool, const struct nt::guid_t&, struct tag::rpcolemessage_t*)>*>;                                                
        using send_receive_t =                                    sdk::function<sdk::hresult(class win::c_sync_client_call_t*, struct tag::rpcolemessage_t*, uint32_t*)>*;                                                
        using send_t =                                            sdk::function<sdk::hresult(class win::client_call_t*, struct tag::rpcolemessage_t*, uint32_t*)>*;                                                
        using receive_t =                                         sdk::function<sdk::hresult(class win::client_call_t*, struct tag::rpcolemessage_t*, uint32_t, uint32_t*)>*;                                                
        using dispatch_cross_apartment_call_t =                   sdk::function<sdk::hresult(struct tag::rpcolemessage_t*, class win::oxid_entry_t*, class win::c_sync_client_call_t*)>*;                                                
        using wait_for_call_t =                                   sdk::function<sdk::hresult(class win::c_sync_client_call_t*, enum win::wait_for_call_reason_t, uint32_t)>*;                                                
        using send_message_to_classic_sta_t =                     sdk::function<sdk::hresult(uint32_t, enum win::send_message_to_classic_sta_reason_t, struct win::hwnd_t*, uint32_t, uint64_t, int64_t)>*;                                                
        using handle_incoming_call_t =                            sdk::function<sdk::hresult(const struct nt::guid_t&, uint16_t, uint32_t, void*)>*;                                                
                                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                                      
        _m00 wait_for_handles_t                                 wait_for_handles;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WaitForHandles
        _m01 signal_mta_client_t                                signal_mta_client;                                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SignalMTAClient
        _m02 signal_na_client_t                                 signal_na_client;                                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SignalNAClient
        _m03 check_and_adjust_rpc_flags_in_client_get_buffer_t  check_and_adjust_rpc_flags_in_client_get_buffer;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CheckAndAdjustRpcFlagsInClientGetBuffer
        _m04 can_make_out_call_t                                can_make_out_call;                                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CanMakeOutCall
        _m05 sdk::function<bool()>*                             can_make_out_rem_release_call;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .CanMakeOutRemReleaseCall
        _m06 send_receive_t                                     send_receive;                                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SendReceive
        _m07 send_t                                             send;                                             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Send
        _m08 receive_t                                          receive;                                          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Receive
        _m09 sdk::function<void(uint32_t)>*                     block_for_async_cancel;                           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .BlockForAsyncCancel
        _m10 dispatch_cross_apartment_call_t                    dispatch_cross_apartment_call;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DispatchCrossApartmentCall
        _m11 wait_for_call_t                                    wait_for_call;                                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .WaitForCall
        _m12 send_message_to_classic_sta_t                      send_message_to_classic_sta;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SendMessageToClassicSTA
                                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
        //                                                                                                      
        _m13 handle_incoming_call_t                             handle_incoming_call;                             //{ +0x0068    +0x0068    +0x0068    } | .HandleIncomingCall
                                                                                                                
        SDK_MAGIC_PROPERTIES( "ThreadTypeSpecificRoutines.$", 0x70, true, 0x247ec940230a27e0 );                                                
        SDK_DYNAMIC_SIZE( thread_type_specific_routines_t );                                                    
    };                                                                                                          
};
#include "magic/thread_type_specific_routines_t.end.hpp"
