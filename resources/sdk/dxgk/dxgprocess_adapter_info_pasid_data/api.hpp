#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprocess_adapter_info_pasid_data
{
    // [Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x152da8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x171698, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156098, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) deallocate;
    
    // [??1DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1072f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1714d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x113324, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x27fe10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x336f70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x27fe90, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_for_hardware;
};
#include "magic/api.end.hpp"
