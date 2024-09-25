#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::np_context
{
    // [NpNodesPageOut@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x592a38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a9594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5928b8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) np_nodes_page_out;
    
    // [NpCleanup@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7672c, 0x32828 bytes
    // ntoskrnl.exe .text:0x275b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x325d5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d210c, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) np_cleanup;
    
    // [NpGetResidentLeaf@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c1b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59284c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a92c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5926cc, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) np_get_resident_leaf;
    
    // [NpLeafDerefInternal@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c1e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x592880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a92fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x592700, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) np_leaf_deref_internal;
    
    // [NpLeafRefInternal@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c298, 0x32828 bytes
    // ntoskrnl.exe .text:0x592940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a93bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5927c0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) np_leaf_ref_internal;
    
    // [NpLeafRemoveInternal@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c314, 0x32828 bytes
    // ntoskrnl.exe .text:0x5929c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a9440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x592844, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) np_leaf_remove_internal;
    
    // [NpNodeAllocate@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11da20, 0x32828 bytes
    // ntoskrnl.exe .text:0x26cfc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a94b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31e910, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) np_node_allocate;
    
    // [NpNodeFree@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x112768, 0x32828 bytes
    // ntoskrnl.exe .text:0x37bea8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a9548, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37d228, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) np_node_free;
    
    // [NpStart@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7465c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a19e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x328904, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cac74, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) np_start;
    
    // [NpiGetReservedBuffer@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c374, 0x32828 bytes
    // ntoskrnl.exe .text:0x592a60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a95bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5928e0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) npi_get_reserved_buffer;
    
    // [NpiLeafPageIn@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c3e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x592ad8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a9638, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x592958, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) npi_leaf_page_in;
    
    // [NpiPerformPageOut@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c47c, 0x32828 bytes
    // ntoskrnl.exe .text:0x592b7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a96d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5929fc, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) npi_perform_page_out;
    
    // [NpiRebaseCallback@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c538, 0x32828 bytes
    // ntoskrnl.exe .text:0x592c50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a97a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x592ad0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) npi_rebase_callback;
    
    // [NpiTreeWalkCallback@NP_CONTEXT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c580, 0x32828 bytes
    // ntoskrnl.exe .text:0x592ca0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a97f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x592b20, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) npi_tree_walk_callback;
};
#include "magic/api.end.hpp"
