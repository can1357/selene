#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_alloc
{
    // [??0VIDMM_ALLOC@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1cf84, 0x158b bytes
    // dxgmms2.sys .text:0x22f2c, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dc46, 0x20ba bytes
    // dxgmms2.sys .text:0x22eac, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [DecrementPagingPacketReferenceCount@VIDMM_ALLOC]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1cf3c, 0x158b bytes
    // dxgmms2.sys .text:0x23518, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d34c, 0x20ba bytes
    // dxgmms2.sys .text:0x23498, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) decrement_paging_packet_reference_count;
    
    // [GetGpuVirtualAddress@VIDMM_ALLOC]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x656e8, 0x158b bytes
    // dxgmms2.sys PAGE:0x841c8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa24bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x847b8, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) get_gpu_virtual_address;
};
#include "magic/api.end.hpp"
