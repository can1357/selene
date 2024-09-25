#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_store::topology_set_descriptor
{
    // [GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb83c8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x123efc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0224, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe4c68, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_set_id;
    
    // [GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb8404, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x128188, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bff70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0c98, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_timestamp;
    
    // [LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb84b8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x131468, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bf6dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x134798, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) load_topology;
    
    // [_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb8210, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1242f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bfa74, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe4668, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) read_path;
    
    // [SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb8778, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1355ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c35f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x138b4c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) save_topology;
    
    // [TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb80ac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x135b78, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c1530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1390d8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) touch_topology;
    
    // [_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb811c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x135894, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1be9a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x138df4, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) write_path;
};
#include "magic/api.end.hpp"
