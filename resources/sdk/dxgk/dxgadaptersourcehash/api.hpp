#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgadaptersourcehash
{
    // [AddNewAdapterEntry@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x162208, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x208c1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x184178, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_new_adapter_entry;
    
    // [AddEntry@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xed930, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x162284, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x208c98, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1841f4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) add_entry;
    
    // [FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16bb78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x26412c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30ab08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26428c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) find_adapter_and_source_for_hash;
    
    // [FindEntry@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16bc4c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2642c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30aca8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264420, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) find_entry;
    
    // [FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16bd54, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x264454, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30ae64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2645b4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) find_hash_for_adapter_and_source;
    
    // [ForceReducedHashSize@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16be48, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x264604, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30af9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x264764, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) force_reduced_hash_size;
    
    // [GetHashBitMask@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x88ac, 0x60098 bytes
    // dxgkrnl.sys .text:0x554c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb1c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x68ec, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_hash_bit_mask;
    
    // [GetHashBitShift@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25d98, 0x60098 bytes
    // dxgkrnl.sys .text:0x9b68, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb16c, 0x84380 bytes
    // dxgkrnl.sys .text:0x3238, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_hash_bit_shift;
    
    // [RemoveAdapter@DXGADAPTERSOURCEHASH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16c830, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x265c54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30c9a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x265db4, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) remove_adapter;
};
#include "magic/api.end.hpp"
