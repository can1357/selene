#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_partition
{
    // [??1VIDMM_PARTITION@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x30ddc, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [EnsureAdapter@VIDMM_PARTITION]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x157d8, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c578, 0x20ba bytes
    // dxgmms2.sys .text:0x157d8, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) ensure_adapter;
    
    // [GetAdapterInfo@VIDMM_PARTITION]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2b14, 0x1c52 bytes
    // dxgmms2.sys .text:0x2788, 0x20ba bytes
    // dxgmms2.sys .text:0x2b14, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) get_adapter_info;
    
    // [GetCurrent@VIDMM_PARTITION]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1f74, 0x1c52 bytes
    // dxgmms2.sys .text:0x17874, 0x20ba bytes
    // dxgmms2.sys .text:0x1f74, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) get_current;
    
    // [Initialize@VIDMM_PARTITION]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x15b44, 0x1c52 bytes
    // dxgmms2.sys .text:0x1ca94, 0x20ba bytes
    // dxgmms2.sys .text:0x15b44, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [_PartitionLock@VIDMM_PARTITION]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x517b8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e878, 0x20ba bytes
    // dxgmms2.sys .data:0x517c0, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) partition_lock;
    
    // [_PartitionTree@VIDMM_PARTITION]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x517b0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e870, 0x20ba bytes
    // dxgmms2.sys .data:0x517b8, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) partition_tree;
    
    // [ResetAdapter@VIDMM_PARTITION]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26db8, 0x1c52 bytes
    // dxgmms2.sys .text:0x30ef0, 0x20ba bytes
    // dxgmms2.sys .text:0x26d38, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) reset_adapter;
};
#include "magic/api.end.hpp"
