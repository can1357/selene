#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::miracast_chunk_list
{
    // [AddChunkListToTail@MIRACAST_CHUNK_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2a09c, 0x60098 bytes
    // dxgkrnl.sys .text:0x501d8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x60ad4, 0x84380 bytes
    // dxgkrnl.sys .text:0x50428, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_chunk_list_to_tail;
    
    // [AllocateNewChunks@MIRACAST_CHUNK_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2a11c, 0x60098 bytes
    // dxgkrnl.sys .text:0x50250, 0x762b0 bytes
    // dxgkrnl.sys .text:0x60b4c, 0x84380 bytes
    // dxgkrnl.sys .text:0x504a0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) allocate_new_chunks;
    
    // [RemoveHead@MIRACAST_CHUNK_LIST]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2a5bc, 0x60098 bytes
    // dxgkrnl.sys .text:0x5062c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x60f08, 0x84380 bytes
    // dxgkrnl.sys .text:0x5087c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) remove_head;
};
#include "magic/api.end.hpp"
