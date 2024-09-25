#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdmm_videopresentsourceset_interface_v1_impl
{
    // [AcquireFirstSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a6730, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dc4e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a16a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dc5b0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_source_info;
    
    // [AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a6c30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2dcb50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a1c70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2dcc20, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_next_source_info;
    
    // [GetNumSources@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a7ce0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2de2f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3300, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2de3c0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_num_sources;
    
    // [InitializeInterface@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec118, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17a088, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20ae20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17a280, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize_interface;
    
    // [ReleaseSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1a8220, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2de9e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a3970, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2deab0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) release_source_info;
};
#include "magic/api.end.hpp"
