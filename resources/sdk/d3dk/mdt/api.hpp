#pragma once
#include <sdkgen/support_library.hpp>
#include "vidpn_present_path_rotation_t.hpp"

#include "magic/api.start.hpp"
namespace d3dk::mdt
{
    // [D3DKMDT_VPPR_CONVERT_ROTATION_GIVEN_OFFSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5b01c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6aea4, 0x84380 bytes
    // dxgkrnl.sys .text:0x5b1ac, 0x762b0 bytes
    //
    _m0(sdk::function<enum d3dk::mdt::vidpn_present_path_rotation_t(enum d3dk::mdt::vidpn_present_path_rotation_t, enum d3dk::mdt::vidpn_present_path_rotation_t)>*) vppr_convert_rotation_given_offset;
    
    // [D3DKMDT_VPPR_GET_CONTENT_ROTATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7170, 0x60098 bytes
    // dxgkrnl.sys .text:0x9e44, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4db0, 0x84380 bytes
    // dxgkrnl.sys .text:0x30fc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) vppr_get_content_rotation;
    
    // [D3DKMDT_VPPR_GET_OFFSET_ROTATION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7154, 0x60098 bytes
    // dxgkrnl.sys .text:0x9dfc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d68, 0x84380 bytes
    // dxgkrnl.sys .text:0x30b4, 0x762b0 bytes
    //
    _m2(sdk::function<enum d3dk::mdt::vidpn_present_path_rotation_t(enum d3dk::mdt::vidpn_present_path_rotation_t)>*) vppr_get_offset_rotation;
};
#include "magic/api.end.hpp"
