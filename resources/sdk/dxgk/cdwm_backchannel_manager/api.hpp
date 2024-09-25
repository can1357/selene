#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::cdwm_backchannel_manager
{
    // [??0CDWMBackchannelManager@@IEAA@PEAU_KEVENT@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a9e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80b50, 0x84380 bytes
    // dxgkrnl.sys .text:0x6ab70, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Create@CDWMBackchannelManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6aaec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80c4c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6ac7c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [EnablePresentStatisticsType@CDWMBackchannelManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6ab50, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80cb0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6ace0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) enable_present_statistics_type;
    
    // [PostNewMessage@CDWMBackchannelManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6aba0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80d00, 0x84380 bytes
    // dxgkrnl.sys .text:0x6ad30, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) post_new_message;
};
#include "magic/api.end.hpp"
