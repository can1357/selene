#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdevicelockonappropriatethreadmodel
{
    // [??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xbdf0, 0x60098 bytes
    // dxgkrnl.sys .text:0x30b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa8dc, 0x84380 bytes
    // dxgkrnl.sys .text:0x4450, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xbdc8, 0x60098 bytes
    // dxgkrnl.sys .text:0x6c7c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c800, 0x84380 bytes
    // dxgkrnl.sys .text:0x802c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
