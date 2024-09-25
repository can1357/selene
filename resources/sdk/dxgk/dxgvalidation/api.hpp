#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvalidation
{
    // [CleanupForSession@DXGVALIDATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x18b60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1e750, 0x84380 bytes
    // dxgkrnl.sys .text:0x18ef0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) cleanup_for_session;
    
    // [CreateValidationProcessInCallerSession@DXGVALIDATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4a45c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5b9e8, 0x84380 bytes
    // dxgkrnl.sys .text:0x4a6ac, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) create_validation_process_in_caller_session;
    
    // [InitializeBootSettings@DXGVALIDATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x21a90, 0x762b0 bytes
    // dxgkrnl.sys .text:0x28538, 0x84380 bytes
    // dxgkrnl.sys .text:0x22434, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_boot_settings;
    
    // [InitializeForSession@DXGVALIDATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a2ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x153a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aa38, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize_for_session;
    
    // [IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x29d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x70e8, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d70, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) is_validation_enabled_for_adapter_in_caller_context;
    
    // [SetupValidationForProcess@DXGVALIDATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x184e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d1a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x18c78, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) setup_validation_for_process;
};
#include "magic/api.end.hpp"
