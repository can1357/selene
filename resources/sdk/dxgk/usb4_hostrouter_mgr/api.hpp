#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::usb4_hostrouter_mgr
{
    // [AddHostRouter@USB4_HOSTROUTER_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b6b50, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) add_host_router;
    
    // [??0USB4_HOSTROUTER_MGR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x205324, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1USB4_HOSTROUTER_MGR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b6ab8, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [DuplicateSymbolicLinkName@USB4_HOSTROUTER_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b6cf0, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) duplicate_symbolic_link_name;
    
    // [_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b7700, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) handle_usb4hr_pn_p_notification;
    
    // [Initalize@USB4_HOSTROUTER_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x204ecc, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) initalize;
    
    // [RemoveHostRouter@USB4_HOSTROUTER_MGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3b6e14, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) remove_host_router;
};
#include "magic/api.end.hpp"
