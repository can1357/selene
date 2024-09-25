#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_recent_topology_retriever
{
    // [??1CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xbb0f0, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x128250, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c05ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0a1c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) resolve_topology_set_id;
    
    // [??0CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAA@PEAVCCD_TOPOLOGY@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbb218, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x132c8c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bfdb8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1361f0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xb8c30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x128020, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bfe20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0b30, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) find_topology_set_id_descriptor_callback;
    
    // [_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbb090, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12835c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c06f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe09b4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_overflow_topology;
    
    // [LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbb19c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1326fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bef8c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x135c60, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) load_by_connected_set_id;
    
    // [LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbb110, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1327d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bf05c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x135d38, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) load_by_topology_set_id;
    
    // [_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbb000, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1313d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c0030, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x134700, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) load_topology_descriptor_callback;
    
    // [_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xbb280, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x152bd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e27c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155ce0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) process_connected_set_descriptor_callback;
};
#include "magic/api.end.hpp"
