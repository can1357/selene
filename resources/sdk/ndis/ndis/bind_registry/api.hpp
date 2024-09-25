#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::ndis::bind_registry
{
    // [ComputeDelta@BindRegistry@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xabca4, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) compute_delta;
    
    // [ReadNetworkInterfaceListV2@BindRegistry@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xa2598, 0x1c8a8 bytes
    //
    _m1(sdk::unknown_ptr) read_network_interface_list_v2;
    
    // [ReadNetworkInterfaceV2@BindRegistry@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa827c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x100e60, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10fc1c, 0x1e858 bytes
    // ndis.sys PAGE:0x101380, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) read_network_interface_v2;
    
    // [Reload@BindRegistry@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xabcf8, 0x1c8a8 bytes
    // ndis.sys PAGE:0x107768, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10cea4, 0x1e858 bytes
    // ndis.sys PAGE:0x107d08, 0x1d2c0 bytes
    //
    _m3(sdk::unknown_ptr) reload;
    
    // [UpdateFilters@BindRegistry@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xab748, 0x1c8a8 bytes
    // ndis.sys PAGE:0x107aa0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10d1c0, 0x1e858 bytes
    // ndis.sys PAGE:0x108040, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) update_filters;
    
    // [UpdateProtocols@BindRegistry@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa40bc, 0x1c8a8 bytes
    // ndis.sys PAGE:0x102e94, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10eac4, 0x1e858 bytes
    // ndis.sys PAGE:0x1033b4, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) update_protocols;
};
#include "magic/api.end.hpp"
