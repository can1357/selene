#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_paging_queue
{
    // [Suspend@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5f10c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0958, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f6fc, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) suspend;
    
    // [AppendReadyPacket@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49d20, 0x158b bytes
    // dxgmms2.sys PAGE:0x720d4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9b940, 0x20ba bytes
    // dxgmms2.sys PAGE:0x726c4, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) append_ready_packet;
    
    // [??0VIDMM_PAGING_QUEUE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a248, 0x158b bytes
    // dxgmms2.sys PAGE:0x7f9fc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x970cc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7ffec, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [Destroy@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a1b0, 0x158b bytes
    // dxgmms2.sys PAGE:0x7f838, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9756c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7fe28, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) destroy;
    
    // [??1VIDMM_PAGING_QUEUE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a240, 0x158b bytes
    // dxgmms2.sys PAGE:0x7f820, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97554, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7fe10, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [Flush@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49fc4, 0x158b bytes
    // dxgmms2.sys PAGE:0x7f950, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97684, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7ff40, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) flush;
    
    // [GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49c38, 0x158b bytes
    // dxgmms2.sys PAGE:0x85290, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa301c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85880, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) get_current_paging_fence_id;
    
    // [GetNewPacket@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49c40, 0x158b bytes
    // dxgmms2.sys PAGE:0x725e4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe180c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72bd4, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) get_new_packet;
    
    // [InitializePagingQueue@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a2b4, 0x158b bytes
    // dxgmms2.sys PAGE:0x7f684, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x96f7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7fc74, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) initialize_paging_queue;
    
    // [ReclaimPacket@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x87d18, 0x158b bytes
    // dxgmms2.sys PAGE:0xbcbcc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe193c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd19c, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) reclaim_packet;
    
    // [Resume@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a468, 0x158b bytes
    // dxgmms2.sys PAGE:0x5ec10, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa0808, 0x20ba bytes
    // dxgmms2.sys PAGE:0x5f200, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) resume;
    
    // [RewindPacket@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92238, 0x158b bytes
    // dxgmms2.sys PAGE:0xbcce8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe1a48, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd2b8, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) rewind_packet;
    
    // [SetPagingFenceObject@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71830, 0x158b bytes
    // dxgmms2.sys PAGE:0xbcd98, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe1af8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbd368, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) set_paging_fence_object;
    
    // [SetStatus@VIDMM_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4a05c, 0x158b bytes
    // dxgmms2.sys PAGE:0x72284, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa09e4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72874, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) set_status;
};
#include "magic/api.end.hpp"
