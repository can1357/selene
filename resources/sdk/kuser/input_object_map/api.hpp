#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_object_map
{
    // [AddMapping@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x203ad4, 0x243e0 bytes
    // win32kbase.sys .text:0x254664, 0x27ef0 bytes
    // win32kbase.sys .text:0x2018a4, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_mapping;
    
    // [AllocateBucket@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x203e94, 0x243e0 bytes
    // win32kbase.sys .text:0x254a38, 0x27ef0 bytes
    // win32kbase.sys .text:0x201c64, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) allocate_bucket;
    
    // [DeallocateBucket@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1dab00, 0x243e0 bytes
    // win32kbase.sys .text:0x17ff70, 0x27ef0 bytes
    // win32kbase.sys .text:0xd36d0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) deallocate_bucket;
    
    // [FindEntry@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x203ec0, 0x243e0 bytes
    // win32kbase.sys .text:0x254a64, 0x27ef0 bytes
    // win32kbase.sys .text:0x201c90, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) find_entry;
    
    // [GetTransform@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x20403c, 0x243e0 bytes
    // win32kbase.sys .text:0x254bd4, 0x27ef0 bytes
    // win32kbase.sys .text:0x201e0c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_transform;
    
    // [OnProcessTermination@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x72d6c, 0x243e0 bytes
    // win32kbase.sys .text:0x252b8, 0x27ef0 bytes
    // win32kbase.sys .text:0xdf54, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) on_process_termination;
    
    // [RemoveMapping@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2040e0, 0x243e0 bytes
    // win32kbase.sys .text:0x254c80, 0x27ef0 bytes
    // win32kbase.sys .text:0x201eb0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) remove_mapping;
    
    // [s_hashTable@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25e3d0, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3190, 0x27ef0 bytes
    // win32kbase.sys .data:0x25b3f8, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) s_hash_table;
    
    // [s_hashTableLock@InputObjectMap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25e3c8, 0x243e0 bytes
    // win32kbase.sys .data:0x2b3188, 0x27ef0 bytes
    // win32kbase.sys .data:0x25b408, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) s_hash_table_lock;
};
#include "magic/api.end.hpp"
