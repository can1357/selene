#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgportdmm_videopresentsourceset_interface_v1_impl
{
    // [AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec680, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17cef0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20dbb0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x180430, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_source;
    
    // [CreateNewSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec730, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17d090, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20dd30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1805d0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) create_new_source_info;
    
    // [ReleaseSourceInfo@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab610, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e4e40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a96e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4bb0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release_source_info;
};
#include "magic/api.end.hpp"
