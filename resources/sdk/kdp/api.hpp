#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kdp
{
    // [KdpSwitchProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d4178, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) switch_processor;
    
    // [KdpCloseFileCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x9b4950, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9cf60, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3950, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) close_file_callback;
    
    // [KdpCreateFileCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x9b4ae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9fbc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3ae0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) create_file_callback;
    
    // [KdpQueryMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x9b571c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa00e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b471c, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) query_memory;
    
    // [KdpSetBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x9b6cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0b0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5cf0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) set_bus_data;
    
    // [KdpWriteControlSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x9b7254, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9ddc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6254, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) write_control_space;
    
    // [KdpWriteFileCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x9b4fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9fe50, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3fa0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) write_file_callback;
    
    // [KdpAddBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f903c, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b80b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1728, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b70b0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) add_breakpoint;
    
    // [KdpAllowDisable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8f70, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa16dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6dd0, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) allow_disable;
    
    // [KdpBootedNodebug]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5df4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f308, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc099c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f358, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) booted_nodebug;
    
    // [KdpBreakpointChangeCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x311a10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc3308c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49928, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc3304c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) breakpoint_change_count;
    
    // [KdpBreakpointTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x311a20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc340c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49420, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc34080, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) breakpoint_table;
    
    // [KdpCloseRemoteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f9730, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b4970, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9fa48, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3970, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) close_remote_file;
    
    // [KdpCommandString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6c2c, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7600, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa127c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6600, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) command_string;
    
    // [KdpContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3109e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc42f20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5aac0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc42ee0, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) context;
    
    // [KdpContextSent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f53c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc32068, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc483d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc32018, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) context_sent;
    
    // [KdpControlCPressed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x312fb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc345d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc34590, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) control_c_pressed;
    
    // [KdpCopyCodeStream]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8fb4, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7a9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6a9c, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) copy_code_stream;
    
    // [KdpCopyContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f56ac, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7b28, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c398, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6b28, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) copy_context;
    
    // [KdpCopyMemoryChunks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5f08, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7b9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9ce80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6b9c, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) copy_memory_chunks;
    
    // [KdpCreateRemoteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5438, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b4bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9cba4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3bd0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) create_remote_file;
    
    // [KdpDataBlockEncoded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x343108, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b20, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) data_block_encoded;
    
    // [KdpDataSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341ec8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4210, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ae0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4210, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) data_spin_lock;
    
    // [KdpDebugRoutineSelect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326cf0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50b2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a8f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50b24, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) debug_routine_select;
    
    // [KdpDebuggerDataListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f560, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc40670, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) debugger_data_list_head;
    
    // [KdpDebuggerStructuresInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f58b, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406e3, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a82, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc406a3, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) debugger_structures_initialized;
    
    // [KdpDeleteBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6704, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8248, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9dac8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7248, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) delete_breakpoint;
    
    // [KdpDeleteBreakpointRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5a48, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b82b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c9fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b72b0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) delete_breakpoint_range;
    
    // [KdpFillMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8330, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5430, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9fef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4430, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) fill_memory;
    
    // [KdpGetBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8444, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5560, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0018, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4560, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) get_bus_data;
    
    // [KdpGetContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6240, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5628, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9d6a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4628, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) get_context;
    
    // [KdpGetContextEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12c5dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x50b2c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb9d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50b088, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) get_context_ex;
    
    // [KdpGetStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6504, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7e1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9e3e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6e1c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) get_state_change;
    
    // [KdpInitializeExtendedContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6330, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7c74, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9d7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6c74, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) initialize_extended_context;
    
    // [KdpInsertBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f91bc, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8334, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa18c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7334, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) insert_breakpoint;
    
    // [KdpIsBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d45e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x50bed8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5543d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50bc98, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) is_breakpoint;
    
    // [KdpLoaderDebuggerBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f580, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc40680, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) loader_debugger_block;
    
    // [KdpLowRestoreBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f921c, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8398, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1924, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7398, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) low_restore_breakpoint;
    
    // [KdpLowWriteContent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f92b4, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8450, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa19dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7450, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) low_write_content;
    
    // [KdpMessageBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32adc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf8540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5240, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) message_buffer;
    
    // [KdpOweBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f024, 0x32828 bytes
    // ntoskrnl.exe .data:0xc40618, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc569a6, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405d8, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) owe_breakpoint;
    
    // [KdpPathBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x311f20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc330a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc49940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc33060, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) path_buffer;
    
    // [KdpPollBreakInWithPortLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79c04, 0x32828 bytes
    // ntoskrnl.exe .text:0x50bc70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e5a6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ba30, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) poll_break_in_with_port_lock;
    
    // [KdpPowerListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x30f570, 0x32828 bytes
    // ntoskrnl.exe .data:0xc406d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56a50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc40690, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) power_list_head;
    
    // [KdpPowerSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x340f08, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4218, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16ae8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4218, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) power_spin_lock;
    
    // [KdpPrint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f50d8, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b76c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1358, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b66c8, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) print;
    
    // [KdpPrintSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a510, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cc0, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) print_spin_lock;
    
    // [KdpPrintString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5000, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b87a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9e45c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b77a0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) print_string;
    
    // [KdpPrompt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8e10, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7848, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa14d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6848, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) prompt;
    
    // [KdpPromptString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f95d4, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8898, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1d3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7898, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) prompt_string;
    
    // [KdpQuickMoveMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5720, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9d890, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6cf0, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) quick_move_memory;
    
    // [KdpReadControlSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f63a8, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b57b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9db08, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b47b4, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) read_control_space;
    
    // [KdpReadPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6f70, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5870, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0178, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4870, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) read_physical_memory;
    
    // [KdpReadPhysicalMemoryLong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f84e4, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b59c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa02c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b49c0, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) read_physical_memory_long;
    
    // [KdpReadRemoteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f9864, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b4dfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9fcb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b3dfc, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) read_remote_file;
    
    // [KdpReadVirtualMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5e54, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5a84, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c8a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4a84, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) read_virtual_memory;
    
    // [KdpRemoteFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x312f20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc40620, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc569c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405e0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) remote_files;
    
    // [KdpRemoveBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f936c, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8520, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1aac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7520, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) remove_breakpoint;
    
    // [KdpReport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5400, 0x32828 bytes
    // ntoskrnl.exe .text:0x50b9b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x211290, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50b774, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) report;
    
    // [KdpReportCommandStringStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6ce4, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5b48, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0388, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4b48, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) report_command_string_state_change;
    
    // [KdpReportExceptionStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f7054, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9d5b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4ce0, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) report_exception_state_change;
    
    // [KdpReportLoadSymbolsStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5934, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5dd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c430, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4dd0, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) report_load_symbols_state_change;
    
    // [KdpRestoreAllBreakpoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f93dc, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8598, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1b28, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7598, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) restore_all_breakpoints;
    
    // [KdpRestoreBreakPointEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f859c, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b5f08, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0520, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b4f08, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) restore_break_point_ex;
    
    // [KdpSanitizeContextFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6610, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9d8b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6d10, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) sanitize_context_flags;
    
    // [KdpSearchAddressRangeEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f008, 0x32828 bytes
    // ntoskrnl.exe .data:0xc405e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56970, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405a8, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) search_address_range_end;
    
    // [KdpSearchAddressRangeStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31eff0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc405e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56968, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405a0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) search_address_range_start;
    
    // [KdpSearchCheckPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9df8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc123e8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cfd4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12448, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) search_check_point;
    
    // [KdpSearchEndPageFrame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31eff8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc405f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56990, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405b8, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) search_end_page_frame;
    
    // [KdpSearchInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31efe8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc345d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56984, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc34598, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) search_in_progress;
    
    // [KdpSearchMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8694, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6018, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0634, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5018, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) search_memory;
    
    // [KdpSearchPageHitIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31afc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc345d4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc34594, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) search_page_hit_index;
    
    // [KdpSearchPageHitOffsets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31afe0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc3c5e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc52960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc3c5a0, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) search_page_hit_offsets;
    
    // [KdpSearchPageHits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x312fc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc345e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4a960, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc345a0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) search_page_hits;
    
    // [KdpSearchPfnValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31f000, 0x32828 bytes
    // ntoskrnl.exe .data:0xc40600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56978, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405c0, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) search_pfn_value;
    
    // [KdpSearchPhysicalPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8888, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6230, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0848, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5230, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) search_physical_page;
    
    // [KdpSearchPhysicalPageRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8a84, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6450, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5450, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) search_physical_page_range;
    
    // [KdpSearchStartPageFrame]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31efe0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc405f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc56988, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc405b0, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) search_start_page_frame;
    
    // [KdpSendWaitContinue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5aac, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b64f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c564, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b54f4, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) send_wait_continue;
    
    // [KdpSetCommonState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7b0a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50b3ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2088f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50b16c, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) set_common_state;
    
    // [KdpSetContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6564, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6d7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0b98, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5d7c, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) set_context;
    
    // [KdpSetContextEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x122fc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x50b4bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cbabc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50b27c, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) set_context_ex;
    
    // [KdpSetContextState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f5fdc, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7e90, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c970, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6e90, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) set_context_state;
    
    // [KdpSetOwedBreakpoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f941c, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b85e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b75e0, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) set_owed_breakpoints;
    
    // [KdpStub]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa5694, 0x32828 bytes
    // ntoskrnl.exe .text:0x2840f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3998a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32af94, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) stub;
    
    // [KdpSuspendAllBreakpoints]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f9594, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8758, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa1cf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7758, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) suspend_all_breakpoints;
    
    // [KdpSymbol]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f55e4, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b79c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9c2ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b69c0, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) symbol;
    
    // [KdpSysCheckLowMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8b14, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6e48, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0c64, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5e48, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) sys_check_low_memory;
    
    // [KdpSysGetVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f7190, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6e6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0c88, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5e6c, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) sys_get_version;
    
    // [KdpSysReadBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8b30, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0cb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5e98, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) sys_read_bus_data;
    
    // [KdpSysReadControlSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f643c, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7f1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9dbc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6f1c, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) sys_read_control_space;
    
    // [KdpSysReadIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4410, 0x32828 bytes
    // ntoskrnl.exe .text:0x50bcd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5541d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50ba94, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) sys_read_io_space;
    
    // [KdpSysReadMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d44c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50bd94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x554298, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50bb54, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) sys_read_msr;
    
    // [KdpSysWriteBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8b88, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0d1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5f00, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) sys_write_bus_data;
    
    // [KdpSysWriteControlSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6668, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8008, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9de54, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7008, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) sys_write_control_space;
    
    // [KdpSysWriteIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d44f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50bdc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5542cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50bb88, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) sys_write_io_space;
    
    // [KdpSysWriteMsr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d45a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50be80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x55438c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50bc40, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) sys_write_msr;
    
    // [KdpTimeSlipDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e5d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5200, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bbb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5200, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) time_slip_dpc;
    
    // [KdpTimeSlipDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6214, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9cf80, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5f70, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) time_slip_dpc_routine;
    
    // [KdpTimeSlipEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342338, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cb0, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) time_slip_event;
    
    // [KdpTimeSlipEventLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a500, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9cb8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7b80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9cb8, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) time_slip_event_lock;
    
    // [KdpTimeSlipPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ee0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09998, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f328, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) time_slip_pending;
    
    // [KdpTimeSlipTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e590, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf51c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bb70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf51c0, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) time_slip_timer;
    
    // [KdpTimeSlipWork]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6178, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b6fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9cfc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b5fb0, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) time_slip_work;
    
    // [KdpTimeSlipWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e568, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5198, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bb48, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5198, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) time_slip_work_item;
    
    // [KdpTrap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f6064, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b8a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xa9cd7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b7a20, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) trap;
    
    // [KdpWriteBreakPointEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8be0, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b7090, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0d84, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b6090, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) write_break_point_ex;
    
    // [KdpWriteCustomBreakpoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4180, 0x32828 bytes
    // ntoskrnl.exe .text:0x50b5f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x553e04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50b3b4, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) write_custom_breakpoint;
    
    // [KdpWriteInstructionBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d4634, 0x32828 bytes
    // ntoskrnl.exe .text:0x50bf34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x554434, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50bcf4, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) write_instruction_buffer;
    
    // [KdpWritePhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEKD:0x6f8d84, 0x32828 bytes
    // ntoskrnl.exe PAGEKD:0x9b72e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEKD:0xaa0f48, 0x1fd000 bytes
    // ntoskrnl.exe PAGEKD:0x9b62e0, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) write_physical_memory;
};
#include "magic/api.end.hpp"
