#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::rapid_hpd_manager
{
    // [CheckVelocitySetting@RAPID_HPD_MANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x27f58, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) check_velocity_setting;
    
    // [??0RAPID_HPD_MANAGER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x27ef4, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [ExtendExistingHPDPeriod@RAPID_HPD_MANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x582d4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) extend_existing_hpd_period;
    
    // [GetCurrenRapidHPDState@RAPID_HPD_MANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x29f14, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) get_curren_rapid_hpd_state;
    
    // [InRapidHPDPeriod@RAPID_HPD_MANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x258b4, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) in_rapid_hpd_period;
    
    // [IsEnabled@RAPID_HPD_MANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x58524, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) is_enabled;
    
    // [ReportTriggerEvent@RAPID_HPD_MANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x23840, 0x84380 bytes
    //
    _m6(sdk::unknown_ptr) report_trigger_event;
    
    // [SetTestControl@RAPID_HPD_MANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x4fc30, 0x84380 bytes
    //
    _m7(sdk::unknown_ptr) set_test_control;
};
#include "magic/api.end.hpp"
