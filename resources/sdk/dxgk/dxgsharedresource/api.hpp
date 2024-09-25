#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsharedresource
{
    // [ReleaseReference@DXGSHAREDRESOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0xafd8, 0x60098 bytes
    // dxgkrnl.sys .text:0x6c50, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8000, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) release_reference;
    
    // [??0DXGSHAREDRESOURCE@@IEAA@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb4610, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x109f68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1e94, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x115f98, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [CreateSharedResource@DXGSHAREDRESOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb457c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x109e88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1dd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x115eb8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_shared_resource;
    
    // [Destroy@DXGSHAREDRESOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb46d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10b150, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d2280, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x117180, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy;
    
    // [DestroyCoreAllocations@DXGSHAREDRESOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb480c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10a058, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d22b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x116088, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_core_allocations;
    
    // [??1DXGSHAREDRESOURCE@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb4700, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x109d38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d1c78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x115d68, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
