#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_indirect_swap_chain
{
    // [Abandon@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70f60, 0x17e70 bytes
    // dxgi.dll .text:0x71070, 0x17e70 bytes
    // dxgi.dll .text:0x7c610, 0x18b10 bytes
    // dxgi.dll .text:0x724a0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) abandon;
    
    // [AcquireBuffer@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70fa0, 0x17e70 bytes
    // dxgi.dll .text:0x710b0, 0x17e70 bytes
    // dxgi.dll .text:0x36160, 0x18b10 bytes
    // dxgi.dll .text:0x724e0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) acquire_buffer;
    
    // [AddBuffer@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71060, 0x17e70 bytes
    // dxgi.dll .text:0x71170, 0x17e70 bytes
    // dxgi.dll .text:0x7c660, 0x18b10 bytes
    // dxgi.dll .text:0x725a0, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) add_buffer;
    
    // [??0CDXGIIndirectSwapChain@@QEAA@AEBUTConstructorArgs@0@PEAUILockOwner@@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x708ec, 0x17e70 bytes
    // dxgi.dll .text:0x709fc, 0x17e70 bytes
    // dxgi.dll .text:0x7c04c, 0x18b10 bytes
    // dxgi.dll .text:0x71e2c, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [Create@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71298, 0x17e70 bytes
    // dxgi.dll .text:0x713a8, 0x17e70 bytes
    // dxgi.dll .text:0x7c88c, 0x18b10 bytes
    // dxgi.dll .text:0x727d8, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) create;
    
    // [??1CDXGIIndirectSwapChain@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x70d74, 0x17e70 bytes
    // dxgi.dll .text:0x70e84, 0x17e70 bytes
    // dxgi.dll .text:0x7c488, 0x18b10 bytes
    // dxgi.dll .text:0x722b4, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [EnsureTextureTableSize@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x719ac, 0x17e70 bytes
    // dxgi.dll .text:0x71abc, 0x17e70 bytes
    // dxgi.dll .text:0x7d018, 0x18b10 bytes
    // dxgi.dll .text:0x72eec, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) ensure_texture_table_size;
    
    // [FinalConstruct@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71a60, 0x17e70 bytes
    // dxgi.dll .text:0x71b70, 0x17e70 bytes
    // dxgi.dll .text:0x7d0c4, 0x18b10 bytes
    // dxgi.dll .text:0x72fa0, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) final_construct;
    
    // [FinalRelease@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71b50, 0x17e70 bytes
    // dxgi.dll .text:0x71c60, 0x17e70 bytes
    // dxgi.dll .text:0x7d1c8, 0x18b10 bytes
    // dxgi.dll .text:0x73090, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) final_release;
    
    // [FindTableSlot@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71bfc, 0x17e70 bytes
    // dxgi.dll .text:0x71d0c, 0x17e70 bytes
    // dxgi.dll .text:0x7d280, 0x18b10 bytes
    // dxgi.dll .text:0x7313c, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) find_table_slot;
    
    // [FlushDevice@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71c40, 0x17e70 bytes
    // dxgi.dll .text:0x71d50, 0x17e70 bytes
    // dxgi.dll .text:0x36220, 0x18b10 bytes
    // dxgi.dll .text:0x73180, 0x17e70 bytes
    //
    _n0(sdk::unknown_ptr) flush_device;
    
    // [FreeTableSlot@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71cc4, 0x17e70 bytes
    // dxgi.dll .text:0x71dd4, 0x17e70 bytes
    // dxgi.dll .text:0x7d2c4, 0x18b10 bytes
    // dxgi.dll .text:0x73204, 0x17e70 bytes
    //
    _n1(sdk::unknown_ptr) free_table_slot;
    
    // [GetGlobalMetaData@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71e10, 0x17e70 bytes
    // dxgi.dll .text:0x71f20, 0x17e70 bytes
    // dxgi.dll .text:0x7d420, 0x18b10 bytes
    // dxgi.dll .text:0x73350, 0x17e70 bytes
    //
    _n2(sdk::unknown_ptr) get_global_meta_data;
    
    // [GetHandle@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ee70, 0x17e70 bytes
    // dxgi.dll .text:0x1f180, 0x17e70 bytes
    // dxgi.dll .text:0x26af0, 0x18b10 bytes
    // dxgi.dll .text:0x1ff70, 0x17e70 bytes
    //
    _n3(sdk::unknown_ptr) get_handle;
    
    // [GetMetaData@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71e30, 0x17e70 bytes
    // dxgi.dll .text:0x71f40, 0x17e70 bytes
    // dxgi.dll .text:0x7d440, 0x18b10 bytes
    // dxgi.dll .text:0x73370, 0x17e70 bytes
    //
    _n4(sdk::unknown_ptr) get_meta_data;
    
    // [GetMetaDataInternal@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71e4c, 0x17e70 bytes
    // dxgi.dll .text:0x71f5c, 0x17e70 bytes
    // dxgi.dll .text:0x362ac, 0x18b10 bytes
    // dxgi.dll .text:0x7338c, 0x17e70 bytes
    //
    _n5(sdk::unknown_ptr) get_meta_data_internal;
    
    // [HResultFromNT@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71ed8, 0x17e70 bytes
    // dxgi.dll .text:0x71fe8, 0x17e70 bytes
    // dxgi.dll .text:0x7d484, 0x18b10 bytes
    // dxgi.dll .text:0x73418, 0x17e70 bytes
    //
    _n6(sdk::unknown_ptr) h_result_from_nt;
    
    // [InitThunks@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71f40, 0x17e70 bytes
    // dxgi.dll .text:0x72050, 0x17e70 bytes
    // dxgi.dll .text:0x7d4ec, 0x18b10 bytes
    // dxgi.dll .text:0x73480, 0x17e70 bytes
    //
    _n7(sdk::unknown_ptr) init_thunks;
    
    // [IsNonSequenceConsumer@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72158, 0x17e70 bytes
    // dxgi.dll .text:0x72268, 0x17e70 bytes
    // dxgi.dll .text:0x7d704, 0x18b10 bytes
    // dxgi.dll .text:0x73698, 0x17e70 bytes
    //
    _n8(sdk::unknown_ptr) is_non_sequence_consumer;
    
    // [Open@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72174, 0x17e70 bytes
    // dxgi.dll .text:0x72284, 0x17e70 bytes
    // dxgi.dll .text:0x7d720, 0x18b10 bytes
    // dxgi.dll .text:0x736b4, 0x17e70 bytes
    //
    _n9(sdk::unknown_ptr) open;
    
    // [ProcessAcquire@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7241c, 0x17e70 bytes
    // dxgi.dll .text:0x7252c, 0x17e70 bytes
    // dxgi.dll .text:0x7da0c, 0x18b10 bytes
    // dxgi.dll .text:0x7395c, 0x17e70 bytes
    //
    _o0(sdk::unknown_ptr) process_acquire;
    
    // [ReleaseAndAcquireBuffer@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x726a0, 0x17e70 bytes
    // dxgi.dll .text:0x727b0, 0x17e70 bytes
    // dxgi.dll .text:0x7dcc0, 0x18b10 bytes
    // dxgi.dll .text:0x73be0, 0x17e70 bytes
    //
    _o1(sdk::unknown_ptr) release_and_acquire_buffer;
    
    // [ReleaseBuffer@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72880, 0x17e70 bytes
    // dxgi.dll .text:0x72990, 0x17e70 bytes
    // dxgi.dll .text:0x7dee0, 0x18b10 bytes
    // dxgi.dll .text:0x73dc0, 0x17e70 bytes
    //
    _o2(sdk::unknown_ptr) release_buffer;
    
    // [RemoveBuffer@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72b40, 0x17e70 bytes
    // dxgi.dll .text:0x72c50, 0x17e70 bytes
    // dxgi.dll .text:0x7e1d0, 0x18b10 bytes
    // dxgi.dll .text:0x74080, 0x17e70 bytes
    //
    _o3(sdk::unknown_ptr) remove_buffer;
    
    // [SetForOutput@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72bf0, 0x17e70 bytes
    // dxgi.dll .text:0x72d00, 0x17e70 bytes
    // dxgi.dll .text:0x7e290, 0x18b10 bytes
    // dxgi.dll .text:0x74130, 0x17e70 bytes
    //
    _o4(sdk::unknown_ptr) set_for_output;
    
    // [SetGlobalMetaData@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72d00, 0x17e70 bytes
    // dxgi.dll .text:0x72e10, 0x17e70 bytes
    // dxgi.dll .text:0x7e3c0, 0x18b10 bytes
    // dxgi.dll .text:0x74240, 0x17e70 bytes
    //
    _o5(sdk::unknown_ptr) set_global_meta_data;
    
    // [SetMetaData@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72d30, 0x17e70 bytes
    // dxgi.dll .text:0x72e40, 0x17e70 bytes
    // dxgi.dll .text:0x36350, 0x18b10 bytes
    // dxgi.dll .text:0x74270, 0x17e70 bytes
    //
    _o6(sdk::unknown_ptr) set_meta_data;
    
    // [StopIndirectDisplaySession@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72db0, 0x17e70 bytes
    // dxgi.dll .text:0x72ec0, 0x17e70 bytes
    // dxgi.dll .text:0x7e400, 0x18b10 bytes
    // dxgi.dll .text:0x742f0, 0x17e70 bytes
    //
    _o7(sdk::unknown_ptr) stop_indirect_display_session;
    
    // [UCBreakCyclicReferences@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1f450, 0x17e70 bytes
    // dxgi.dll .text:0x1f730, 0x17e70 bytes
    // dxgi.dll .text:0x25b90, 0x18b10 bytes
    // dxgi.dll .text:0x210b0, 0x17e70 bytes
    //
    _o8(sdk::unknown_ptr) uc_break_cyclic_references;
    
    // [UCEstablishCyclicReferences@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d0c0, 0x17e70 bytes
    // dxgi.dll .text:0x6d1d0, 0x17e70 bytes
    // dxgi.dll .text:0x78b30, 0x18b10 bytes
    // dxgi.dll .text:0x6e600, 0x17e70 bytes
    //
    _o9(sdk::unknown_ptr) uc_establish_cyclic_references;
    
    // [UCQueryInterface@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72e30, 0x17e70 bytes
    // dxgi.dll .text:0x72f40, 0x17e70 bytes
    // dxgi.dll .text:0x7e490, 0x18b10 bytes
    // dxgi.dll .text:0x74370, 0x17e70 bytes
    //
    _p0(sdk::unknown_ptr) uc_query_interface;
    
    // [UnOrderedPresent@CDXGIIndirectSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x72f50, 0x17e70 bytes
    // dxgi.dll .text:0x73060, 0x17e70 bytes
    // dxgi.dll .text:0x7e5d0, 0x18b10 bytes
    // dxgi.dll .text:0x74490, 0x17e70 bytes
    //
    _p1(sdk::unknown_ptr) un_ordered_present;
};
#include "magic/api.end.hpp"
