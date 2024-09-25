#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgchannelendpointproxy
{
    // [AddRef@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1562d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4940, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159120, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_ref;
    
    // [AllocateHandle@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad6a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x355db0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad740, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) allocate_handle;
    
    // [Create@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad780, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x355e28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad820, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create;
    
    // [??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad204, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3557b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ad2a4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [FreeHandle@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ad990, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x355fd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ada30, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) free_handle;
    
    // [GetHandleObject@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ada40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3560a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2adae0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_handle_object;
    
    // [GetHandleTableMutex@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1562f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4960, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159140, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_handle_table_mutex;
    
    // [NotifyChannelClosed@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2adfac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3567c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae04c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) notify_channel_closed;
    
    // [PostAsyncMessage@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae3d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x356c40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae470, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) post_async_message;
    
    // [ProcessMessage@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae408, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x356c7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae4a8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) process_message;
    
    // [Release@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae780, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357000, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae820, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) release;
    
    // [ReplyMessage@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae7f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357040, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae890, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) reply_message;
    
    // [SendSyncMessage@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae830, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357080, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae8d0, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) send_sync_message;
    
    // [SetMaximumHandleTableSize@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156300, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4970, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x159150, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) set_maximum_handle_table_size;
    
    // [ShouldExpandHandleTable@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae870, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3570c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae910, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) should_expand_handle_table;
    
    // [UnregisterAsSubscriber@DXGCHANNELENDPOINTPROXY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ae880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3570d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ae920, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) unregister_as_subscriber;
};
#include "magic/api.end.hpp"
