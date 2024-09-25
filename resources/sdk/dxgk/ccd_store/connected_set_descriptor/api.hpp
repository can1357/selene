#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_store::connected_set_descriptor
{
    // [GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbaddc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x124fc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c00c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe3a9c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_recent_topology_set_id;
    
    // [_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbabec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x125050, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c014c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe3b2c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_topology_set_id_by_class;
    
    // [_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbb2a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x127f90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0434, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0d60, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_value_name_by_topology_class;
    
    // [SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbae60, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x134e64, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bebf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1383c4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) set_recent_topology_set_id;
};
#include "magic/api.end.hpp"
