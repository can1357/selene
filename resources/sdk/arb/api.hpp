#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace arb
{
    // [ArbDeleteOwnerRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x741860, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f6c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7494a0, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) delete_owner_ranges;
    
    // [ArbAddAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e9c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79b1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a2720, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) add_allocation;
    
    // [ArbAddInaccessibleAllocationRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54fb54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77eeec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x837944, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788c84, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) add_inaccessible_allocation_range;
    
    // [ArbAddMmConfigRangeAsBootReserved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54fd60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77ece0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x837734, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788a78, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) add_mm_config_range_as_boot_reserved;
    
    // [ArbAddOrdering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ded0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77f8d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838344, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789674, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) add_ordering;
    
    // [ArbAddReserved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571cfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809480, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711830, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) add_reserved;
    
    // [ArbAllocateEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74e270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84a910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x755eb0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) allocate_entry;
    
    // [ArbArbiterHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54cf0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x858270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75bf00, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) arbiter_handler;
    
    // [ArbBacktrackAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f604, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931830, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb770, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) backtrack_allocation;
    
    // [ArbBootAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e79c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x795670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x846cd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79b1c0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) boot_allocation;
    
    // [ArbBuildAssignmentOrdering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54d91c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77f3f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x837e68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789198, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) build_assignment_ordering;
    
    // [ArbCommitAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f91c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bda0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749460, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) commit_allocation;
    
    // [ArbDeleteMmConfigRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69aa4, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa697ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb565e8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68e84, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) delete_mm_config_range;
    
    // [ArbFindSuitableRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ebd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79a840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84b2b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1dc0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) find_suitable_range;
    
    // [ArbFreeOrderingList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f8e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77fad4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838528, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x789874, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) free_ordering_list;
    
    // [ArbGetNextAllocationRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e40c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7939b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8449f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x799130, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) get_next_allocation_range;
    
    // [ArbInitializeArbiterInstance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54a518, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77f0e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x837b38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788e78, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) initialize_arbiter_instance;
    
    // [ArbInitializeMmConfigRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x69998, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa69680, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb566f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa68d58, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) initialize_mm_config_range;
    
    // [ArbInitializeOrderingList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f8a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77fa7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8384e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78981c, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) initialize_ordering_list;
    
    // [ArbInitializeOsInaccessibleRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a7090, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4989c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42708, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa49720, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) initialize_os_inaccessible_range;
    
    // [ArbInitializeRangeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e7890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x864350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862780, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) initialize_range_list;
    
    // [ArbMmConfigRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a350, 0x32828 bytes
    // ntoskrnl.exe .data:0xc508b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc508b0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) mm_config_range;
    
    // [ArbOverrideConflict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54d054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aea00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b6620, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) override_conflict;
    
    // [ArbPreprocessEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) preprocess_entry;
    
    // [ArbPruneOrdering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f948, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77fb10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x838564, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7898b0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) prune_ordering;
    
    // [ArbQueryArbitrate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) query_arbitrate;
    
    // [ArbQueryConflict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e7980, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x864460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862890, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) query_conflict;
    
    // [ArbRetestAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e7cec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8647f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862c20, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) retest_allocation;
    
    // [ArbRollbackAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e7e90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8649c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931fc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862df0, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) rollback_allocation;
    
    // [ArbShareDriverExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54d1a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79a944, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931fdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1ec4, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) share_driver_exclusive;
    
    // [ArbStartArbiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e7ea4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8649e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x932200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x862e10, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) start_arbiter;
    
    // [ArbTestAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54dfa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7413a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8469f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748fe0, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) test_allocation;
    
    // [ArbCopyOrderingList]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x39cd0, 0x1d08 bytes
    // pci.sys PAGE:0x6da58, 0x1cf0 bytes
    // pci.sys PAGE:0x76c64, 0x1cf0 bytes
    // pci.sys PAGE:0x6b9b8, 0x1cf0 bytes
    //
    _p2(sdk::unknown_ptr) copy_ordering_list;
    
    // [ArbDeleteArbiterInstance]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x503ac, 0x1d08 bytes
    // pci.sys PAGE:0x6dad4, 0x1cf0 bytes
    // pci.sys PAGE:0x76ce0, 0x1cf0 bytes
    // pci.sys PAGE:0x6ba34, 0x1cf0 bytes
    //
    _p3(sdk::unknown_ptr) delete_arbiter_instance;
    
    // [ArbIsConflictWithMmConfigRange]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x50564, 0x1d08 bytes
    // pci.sys PAGE:0x6dcd0, 0x1cf0 bytes
    // pci.sys PAGE:0x76e90, 0x1cf0 bytes
    // pci.sys PAGE:0x6bc30, 0x1cf0 bytes
    //
    _p4(sdk::unknown_ptr) is_conflict_with_mm_config_range;
    
    // [ArbLibraryDeinitialize]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .text:0x1918c, 0x1d08 bytes
    // pci.sys .text:0x27148, 0x1cf0 bytes
    // pci.sys .text:0x29aa8, 0x1cf0 bytes
    // pci.sys .text:0x26f68, 0x1cf0 bytes
    //
    _p5(sdk::unknown_ptr) library_deinitialize;
};
#include "magic/api.end.hpp"
