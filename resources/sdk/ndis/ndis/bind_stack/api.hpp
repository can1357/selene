#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::ndis::bind_stack
{
    // [OpenV2InterfaceKey@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xb0788, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) open_v2_interface_key;
    
    // [ParseV1FilterString@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xe45dc, 0x1c8a8 bytes
    //
    _m1(sdk::unknown_ptr) parse_v1_filter_string;
    
    // [ReadV1FilterList@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xe467c, 0x1c8a8 bytes
    //
    _m2(sdk::unknown_ptr) read_v1_filter_list;
    
    // [ReadV1InterfaceBindings@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xe46fc, 0x1c8a8 bytes
    //
    _m3(sdk::unknown_ptr) read_v1_interface_bindings;
    
    // [ReadV1OrV2ProtocolList@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xa4670, 0x1c8a8 bytes
    //
    _m4(sdk::unknown_ptr) read_v1_or_v2_protocol_list;
    
    // [AddStaticFilterBinding@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x1025ac, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10eee8, 0x1e858 bytes
    // ndis.sys PAGE:0x102acc, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) add_static_filter_binding;
    
    // [AddStaticProtocolBinding@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x10289c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10f4a8, 0x1e858 bytes
    // ndis.sys PAGE:0x102dbc, 0x1d2c0 bytes
    //
    _m6(sdk::unknown_ptr) add_static_protocol_binding;
    
    // [BuildFilterLink@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa476c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x102630, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10ef68, 0x1e858 bytes
    // ndis.sys PAGE:0x102b50, 0x1d2c0 bytes
    //
    _m7(sdk::unknown_ptr) build_filter_link;
    
    // [BuildProtocolLink@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa46f4, 0x1c8a8 bytes
    // ndis.sys PAGE:0x102a8c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10f644, 0x1e858 bytes
    // ndis.sys PAGE:0x102fac, 0x1d2c0 bytes
    //
    _m8(sdk::unknown_ptr) build_protocol_link;
    
    // [CreateDynamicBinding@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xe4454, 0x1c8a8 bytes
    // ndis.sys PAGE:0x122ea0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12dd98, 0x1e858 bytes
    // ndis.sys PAGE:0x1233a0, 0x1d2c0 bytes
    //
    _m9(sdk::unknown_ptr) create_dynamic_binding;
    
    // [ReadV2InterfaceBindings@BindStack@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa4608, 0x1c8a8 bytes
    // ndis.sys PAGE:0x109414, 0x1d2c0 bytes
    // ndis.sys PAGE:0x113790, 0x1e858 bytes
    // ndis.sys PAGE:0x109934, 0x1d2c0 bytes
    //
    _n0(sdk::unknown_ptr) read_v2_interface_bindings;
};
#include "magic/api.end.hpp"
