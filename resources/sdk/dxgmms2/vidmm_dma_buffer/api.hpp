#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_dma_buffer
{
    // [PushGlobalAllocIntoReferenceTable@_VIDMM_DMA_BUFFER]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88598, 0x158b bytes
    // dxgmms2.sys PAGE:0x739a4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe0944, 0x20ba bytes
    // dxgmms2.sys PAGE:0x73f94, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) push_global_alloc_into_reference_table;
};
#include "magic/api.end.hpp"
