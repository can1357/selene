#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mockdriverstate
{
    // [??1MOCKDRIVERSTATE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x43014, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@MOCKDRIVERSTATE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2688c, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [ValidateFbrHelper@MOCKDRIVERSTATE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x553d4, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) validate_fbr_helper;
    
    // [??0MOCKDRIVERSTATE@@QEAA@PEAVDXGADAPTER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x20448, 0x762b0 bytes
    // dxgkrnl.sys .text:0x21f94, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [SetMockDriverState@MOCKDRIVERSTATE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b7fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x55230, 0x84380 bytes
    // dxgkrnl.sys .text:0x4ba4c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) set_mock_driver_state;
    
    // [ValidateMockDriverState@MOCKDRIVERSTATE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5968, 0x762b0 bytes
    // dxgkrnl.sys .text:0x55558, 0x84380 bytes
    // dxgkrnl.sys .text:0x6d1c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) validate_mock_driver_state;
    
    // [ValidatePlaneHelper@MOCKDRIVERSTATE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b878, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5558c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4bac8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) validate_plane_helper;
};
#include "magic/api.end.hpp"
