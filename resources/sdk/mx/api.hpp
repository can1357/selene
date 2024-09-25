#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace mx
{
    // [MxBootDeferDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INITDATA:0xd80ae0, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) boot_defer_descriptors;
    
    // [MxBootDescriptorAnyNodeBitMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INITDATA:0xd7f6d8, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) boot_descriptor_any_node_bit_map;
    
    // [MxBootDescriptorAnyNodeBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INITDATA:0xd7f858, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) boot_descriptor_any_node_buffer;
    
    // [MxBootNodeSplitDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INITDATA:0xd85bc0, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) boot_node_split_descriptors;
    
    // [MxConvertKernelHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x78db6c, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) convert_kernel_hal;
    
    // [MxCreatePfnsForPtes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb35b60, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) create_pfns_for_ptes;
    
    // [MxDeferredBootAddMemoryWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INITDATA:0xd7f898, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) deferred_boot_add_memory_work_item;
    
    // [MxDeferredBootSplitDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INITDATA:0xd84fc0, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) deferred_boot_split_descriptor;
    
    // [MxFillPhysicalPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x7887f8, 0x32828 bytes
    //
    _m8(sdk::unknown_ptr) fill_physical_page;
    
    // [MxInitializePageTablePfns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb364b0, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) initialize_page_table_pfns;
    
    // [MxInsertEnclaveBootPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb85b40, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) insert_enclave_boot_pages;
    
    // [MxLastMemoryDescriptorChecked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INITDATA:0x7ce5a0, 0x32828 bytes
    //
    _n1(sdk::unknown_ptr) last_memory_descriptor_checked;
    
    // [MxMarkValidMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb359b0, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) mark_valid_mappings;
    
    // [MxUseLargePagesForKernelAndHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe ALMOSTRO:0x3aa003, 0x32828 bytes
    //
    _n3(sdk::unknown_ptr) use_large_pages_for_kernel_and_hal;
    
    // [MxDeferredBootFreeDescriptorHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54750, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd54750, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) deferred_boot_free_descriptor_head;
    
    // [MxDeferredBootFreeDescriptorIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54684, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd54684, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) deferred_boot_free_descriptor_index;
    
    // [MxBootDescriptorAnyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce580, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546f8, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd546f8, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) boot_descriptor_any_node;
    
    // [MxDeferredBootFreeDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd59a50, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd830e0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd59a50, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) deferred_boot_free_descriptor;
    
    // [MxDescriptorSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd358, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa91b50, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa90dd0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) descriptor_sort;
    
    // [MxFreeDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce6f0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54a60, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd54a60, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) free_descriptor;
    
    // [MxHalFreedGapCharges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54730, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f710, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54730, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) hal_freed_gap_charges;
    
    // [MxKernelFreedGapCharges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54738, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f718, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54738, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) kernel_freed_gap_charges;
    
    // [MxNonPfnMemoryDescriptorCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54710, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f6f8, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54710, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) non_pfn_memory_descriptor_cache;
    
    // [MxPfnMemoryDescriptorCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0xd54718, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f700, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54718, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) pfn_memory_descriptor_cache;
    
    // [MxBootDescriptorDepleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x787e50, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa40058, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb39478, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa45f94, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) boot_descriptor_depleted;
    
    // [MxBootFreeDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7d0af0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd57360, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd800e0, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd57360, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) boot_free_descriptor;
    
    // [MxComputeFreeNodeDescriptorRequirements]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x787c90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3fdbc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb39264, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa45cf8, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) compute_free_node_descriptor_requirements;
    
    // [MxComputePfnPagesNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x788a9c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4006c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3948c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa45fa8, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) compute_pfn_pages_needed;
    
    // [MxCopyPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x787e5c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4f004, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb85238, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4ee88, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) copy_page;
    
    // [MxCreateFreePfns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x786d54, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3eef8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb38384, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa44e34, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) create_free_pfns;
    
    // [MxCreatePfn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x788404, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4f66c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb35e4c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4f4f0, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) create_pfn;
    
    // [MxCreatePfns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7880f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4f398, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb35510, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4f21c, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) create_pfns;
    
    // [MxGetNextPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x787bb4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3ff10, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb39184, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa45e4c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) get_next_page;
    
    // [MxGetPhase0Mapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7888f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4fb70, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb362c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4f9f4, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) get_phase0_mapping;
    
    // [MxHalDataTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce4f0, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54728, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f720, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54720, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) hal_data_table_entry;
    
    // [MxInitializeFreeNodeDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x787410, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3f52c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb38938, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa45468, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) initialize_free_node_descriptors;
    
    // [MxMapPfnRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7876d8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3f918, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb38cf8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa45854, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) map_pfn_range;
    
    // [MxMapVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x787948, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3fb98, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb38f7c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa45ad4, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) map_va;
    
    // [MxMarkActiveDriverBits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78cab4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa64878, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4dbb0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa60748, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) mark_active_driver_bits;
    
    // [MxMovePageTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x787f34, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4f0ec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3576c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4ef70, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) move_page_tables;
    
    // [MxPageAlwaysHot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x787df0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3ffec, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb38a50, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa45f28, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) page_always_hot;
    
    // [MxPfnAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab420, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6d8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcd8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6d8, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) pfn_allocation;
    
    // [MxReleaseFreeDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78642c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3ea40, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb37e90, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4497c, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) release_free_descriptor;
    
    // [MxRelocatePageTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7862a8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4ee6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb355b4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4ecf0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) relocate_page_tables;
    
    // [MxSwapPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x788530, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4f858, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb35fbc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4f6dc, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) swap_pages;
    
    // [MxSwitchDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bd36c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa91b6c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb853c4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa90dec, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) switch_descriptors;
    
    // [MxZeroBootMappings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79b2b0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4fdb4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb350cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4fc38, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) zero_boot_mappings;
    
    // [MxZeroPageTablePfns]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x788b48, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4fc3c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3641c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4fac0, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) zero_page_table_pfns;
};
#include "magic/api.end.hpp"
