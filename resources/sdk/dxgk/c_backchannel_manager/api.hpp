#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_backchannel_manager
{
    // [Clear@CBackchannelManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6acb4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80dd8, 0x84380 bytes
    // dxgkrnl.sys .text:0x6ae44, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) clear;
    
    // [??1CBackchannelManager@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6ac7c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80da0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6ae0c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [EnablePresentStatisticsType@CBackchannelManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1abe0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20680, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b260, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) enable_present_statistics_type;
    
    // [PostNewMessage@CBackchannelManager]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6ad60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80e80, 0x84380 bytes
    // dxgkrnl.sys .text:0x6aef0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) post_new_message;
};
#include "magic/api.end.hpp"
