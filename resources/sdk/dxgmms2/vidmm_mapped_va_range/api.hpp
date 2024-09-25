#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_mapped_va_range
{
    // [??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x21c8, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2c48, 0x1c52 bytes
    // dxgmms2.sys .text:0x15924, 0x20ba bytes
    // dxgmms2.sys .text:0x2c48, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12e40, 0x158b bytes
    // dxgmms2.sys .text:0x23b48, 0x1c52 bytes
    // dxgmms2.sys .text:0x217c, 0x20ba bytes
    // dxgmms2.sys .text:0x23ac8, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) release_va_range_reference;
};
#include "magic/api.end.hpp"
