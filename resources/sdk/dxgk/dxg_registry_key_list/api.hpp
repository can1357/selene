#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxg_registry_key_list
{
    // [AppendSubKeys@DXG_REGISTRY_KEY_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25c480, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3026c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25c5e0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) append_sub_keys;
    
    // [??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25c43c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x302680, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25c59c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [InsertHead@DXG_REGISTRY_KEY_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25df40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x304328, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25e0a0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) insert_head;
    
    // [InsertTail@DXG_REGISTRY_KEY_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25dfd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3043e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25e138, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) insert_tail;
    
    // [ReadNextPath@DXG_REGISTRY_KEY_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25e754, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x304b44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25e8b4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) read_next_path;
};
#include "magic/api.end.hpp"
