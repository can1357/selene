#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::pc_environment
{
    // [AllocatePool@PC_ENVIRONMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x565850, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) allocate_pool;
    
    // [Control@PC_ENVIRONMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x56579c, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) control;
    
    // [CreateGuid@PC_ENVIRONMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6251a4, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) create_guid;
    
    // [FreePool@PC_ENVIRONMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x41960c, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) free_pool;
    
    // [Read@PC_ENVIRONMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x565718, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) read;
    
    // [Write@PC_ENVIRONMENT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6251ac, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) write;
};
#include "magic/api.end.hpp"
