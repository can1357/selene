#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mdt
{
    // [DXGKMDT_OPM_GET_ACTUAL_PROTECTION_LEVEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x373e0, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x75af0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8d0b8, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x75ef8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) opm_get_actual_protection_level;
    
    // [DXGKMDT_OPM_GET_CONNECTOR_TYPE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x373d0, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x75ae0, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8d0a8, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x75ee8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) opm_get_connector_type;
    
    // [DXGKMDT_OPM_GET_SUPPORTED_PROTECTION_TYPES]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x373f0, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x75b00, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x8d0c8, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x75f08, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) opm_get_supported_protection_types;
    
    // [DXGKMDT_OPM_SET_PROTECTION_LEVEL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .rdata:0x3de18, 0x60098 bytes
    // dxgkrnl.sys .rdata:0x7fa98, 0x762b0 bytes
    // dxgkrnl.sys .rdata:0x999a8, 0x84380 bytes
    // dxgkrnl.sys .rdata:0x7fb78, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) opm_set_protection_level;
};
#include "magic/api.end.hpp"
