#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::c_virtual_address_allocator
{
    // [??0CVirtualAddressAllocator@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x8074c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x80d3c, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6dee4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x6e4d4, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) insert_vad_to_reserved_list_for_new_va_range;
    
    // [MapVadVaRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6cb4c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x6d13c, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) map_vad_va_range;
    
    // [AddVaRangeToVad@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x66720, 0x158b bytes
    // dxgmms2.sys PAGE:0x6cd58, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fec8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6d348, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) add_va_range_to_vad;
    
    // [AddVaRangeToVadRangeList@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4eddc, 0x158b bytes
    // dxgmms2.sys PAGE:0x6cc98, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8efe0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6d288, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) add_va_range_to_vad_range_list;
    
    // [AllocateVad@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b0ac, 0x158b bytes
    // dxgmms2.sys PAGE:0x710e8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9d450, 0x20ba bytes
    // dxgmms2.sys PAGE:0x716d8, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) allocate_vad;
    
    // [AllocateVirtualAddressRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4f3e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x6dfb0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8f3f0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6e5a0, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) allocate_virtual_address_range;
    
    // [BuildVaRangeList@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92acc, 0x158b bytes
    // dxgmms2.sys PAGE:0xbd77c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2444, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbdd4c, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) build_va_range_list;
    
    // [CommitVirtualAddressRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4e720, 0x158b bytes
    // dxgmms2.sys PAGE:0x6e504, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x87f50, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6eaf4, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) commit_virtual_address_range;
    
    // [CreateReservedVaRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x667ec, 0x158b bytes
    // dxgmms2.sys PAGE:0xbd994, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9e100, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbdf64, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) create_reserved_va_range;
    
    // [DestroyVaAllocator@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4e41c, 0x158b bytes
    // dxgmms2.sys PAGE:0x81698, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3350, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81c88, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) destroy_va_allocator;
    
    // [EvictRootPageTable@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12b70, 0x158b bytes
    // dxgmms2.sys .text:0x236c4, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d4f4, 0x20ba bytes
    // dxgmms2.sys .text:0x23644, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) evict_root_page_table;
    
    // [FindNodeInFreeList@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4f8ac, 0x158b bytes
    // dxgmms2.sys PAGE:0x6e2b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8f810, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6e8a0, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) find_node_in_free_list;
    
    // [FlushGpuVaTlb@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1f70, 0x158b bytes
    // dxgmms2.sys .text:0x2de0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2624, 0x20ba bytes
    // dxgmms2.sys .text:0x2de0, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) flush_gpu_va_tlb;
    
    // [FreeAllocMappedVaRangeList@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x50314, 0x158b bytes
    // dxgmms2.sys PAGE:0x7298c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x849a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72f7c, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) free_alloc_mapped_va_range_list;
    
    // [FreeVad@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4e3ac, 0x158b bytes
    // dxgmms2.sys PAGE:0x71378, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x840c8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x71968, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) free_vad;
    
    // [FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4f190, 0x158b bytes
    // dxgmms2.sys PAGE:0x70e64, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x84cb0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x71454, 0x1c52 bytes
    //
    _n6(sdk::unknown_ptr) free_vad_virtual_address_range_internal;
    
    // [FreeVirtualAddressRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68cd4, 0x158b bytes
    // dxgmms2.sys PAGE:0xbe14c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4ba4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbe71c, 0x1c52 bytes
    //
    _n7(sdk::unknown_ptr) free_virtual_address_range;
    
    // [GetNumPde@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2028, 0x158b bytes
    // dxgmms2.sys .text:0x128d8, 0x1c52 bytes
    // dxgmms2.sys .text:0x15524, 0x20ba bytes
    // dxgmms2.sys .text:0x128d8, 0x1c52 bytes
    //
    _n8(sdk::unknown_ptr) get_num_pde;
    
    // [GetPageDirectoryData@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68c60, 0x158b bytes
    // dxgmms2.sys PAGE:0xbe234, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xb4b24, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbe804, 0x1c52 bytes
    //
    _n9(sdk::unknown_ptr) get_page_directory_data;
    
    // [GetVads@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x931c4, 0x158b bytes
    // dxgmms2.sys PAGE:0xbe2dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2bf4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbe8ac, 0x1c52 bytes
    //
    _o0(sdk::unknown_ptr) get_vads;
    
    // [GetVirtualAddressOfPageTable@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4fdc4, 0x158b bytes
    // dxgmms2.sys PAGE:0x86da4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa4a38, 0x20ba bytes
    // dxgmms2.sys PAGE:0x87394, 0x1c52 bytes
    //
    _o1(sdk::unknown_ptr) get_virtual_address_of_page_table;
    
    // [InitializeVaAllocator@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4fb88, 0x158b bytes
    // dxgmms2.sys PAGE:0x80290, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9d144, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80880, 0x1c52 bytes
    //
    _o2(sdk::unknown_ptr) initialize_va_allocator;
    
    // [InsertVadToFreeList@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4f80c, 0x158b bytes
    // dxgmms2.sys PAGE:0x7103c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9d3a4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7162c, 0x1c52 bytes
    //
    _o3(sdk::unknown_ptr) insert_vad_to_free_list;
    
    // [InsertVadToReservedList@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4f730, 0x158b bytes
    // dxgmms2.sys PAGE:0x810d4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9bd88, 0x20ba bytes
    // dxgmms2.sys PAGE:0x816c4, 0x1c52 bytes
    //
    _o4(sdk::unknown_ptr) insert_vad_to_reserved_list;
    
    // [MapVirtualAddressRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4fec0, 0x158b bytes
    // dxgmms2.sys PAGE:0x6ce28, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8eb40, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6d418, 0x1c52 bytes
    //
    _o5(sdk::unknown_ptr) map_virtual_address_range;
    
    // [RecommitVirtualAddressRanges@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x686ac, 0x158b bytes
    // dxgmms2.sys PAGE:0xbea5c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa6e98, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbf02c, 0x1c52 bytes
    //
    _o6(sdk::unknown_ptr) recommit_virtual_address_ranges;
    
    // [ReferenceReservedZeroVad@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x93bb0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc015c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe459c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc072c, 0x1c52 bytes
    //
    _o7(sdk::unknown_ptr) reference_reserved_zero_vad;
    
    // [RemovePendingOperationFromVad@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21cc, 0x158b bytes
    // dxgmms2.sys .text:0x130c, 0x1c52 bytes
    // dxgmms2.sys .text:0x17514, 0x20ba bytes
    // dxgmms2.sys .text:0x130c, 0x1c52 bytes
    //
    _o8(sdk::unknown_ptr) remove_pending_operation_from_vad;
    
    // [RemoveVaRangeFromVad@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4f038, 0x158b bytes
    // dxgmms2.sys PAGE:0x72810, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x83fc0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x72e00, 0x1c52 bytes
    //
    _o9(sdk::unknown_ptr) remove_va_range_from_vad;
    
    // [RemoveVadFromFreeList@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4f7d0, 0x158b bytes
    // dxgmms2.sys PAGE:0x6e268, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x84f6c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6e858, 0x1c52 bytes
    //
    _p0(sdk::unknown_ptr) remove_vad_from_free_list;
    
    // [ReportVaAllocatorState@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x93c30, 0x158b bytes
    // dxgmms2.sys PAGE:0xc04dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe4908, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0aac, 0x1c52 bytes
    //
    _p1(sdk::unknown_ptr) report_va_allocator_state;
    
    // [ReserveVirtualAddressRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4ec4c, 0x158b bytes
    // dxgmms2.sys PAGE:0x80fa4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9c4b0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81594, 0x1c52 bytes
    //
    _p2(sdk::unknown_ptr) reserve_virtual_address_range;
    
    // [ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4facc, 0x158b bytes
    // dxgmms2.sys PAGE:0x80d40, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9bcb0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81330, 0x1c52 bytes
    //
    _p3(sdk::unknown_ptr) reserve_virtual_address_range_no_access;
    
    // [UncommitVirtualAddressRange@CVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4e540, 0x158b bytes
    // dxgmms2.sys PAGE:0x6ec58, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x88520, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6f248, 0x1c52 bytes
    //
    _p4(sdk::unknown_ptr) uncommit_virtual_address_range;
};
#include "magic/api.end.hpp"
