#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::vidpnsourceinfo
{
    // [CheckPrimaryContent@VIDPNSOURCEINFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b468c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2edfb0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b472c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) check_primary_content;
    
    // [CheckPrimaryContentTile@VIDPNSOURCEINFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b48c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ee254, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b4968, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) check_primary_content_tile;
    
    // [CheckPrimaryContentWorker@VIDPNSOURCEINFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b4a10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ee384, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b4ab0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) check_primary_content_worker;
    
    // [??0VIDPNSOURCEINFO@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a7c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fa90, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae40, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDPNSOURCEINFO@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b4000, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ed730, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b40a0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@VIDPNSOURCEINFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b60a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2efcb8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b6148, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
