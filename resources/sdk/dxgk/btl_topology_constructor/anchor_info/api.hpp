#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::btl_topology_constructor::anchor_info
{
    // [_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8df44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12ea2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x177980, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x126c5c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) find_anchor_adapters_callback;
    
    // [_GetAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8df18, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12fb5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x177930, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12714c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_adapter_preference;
    
    // [_GetPostAdapterPreference@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8e2a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12fb40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x177964, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127130, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_post_adapter_preference;
    
    // [_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8de64, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132e8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c09bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1363f0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) query;
};
#include "magic/api.end.hpp"
