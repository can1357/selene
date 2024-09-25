#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace nt::pc_disk
{
    // [??1PC_DISK@@QEAA@XZ]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1456a4, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@PC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x145568, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [IsVbr@PC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23c244, 0x32828 bytes
    //
    _m2(sdk::unknown_ptr) is_vbr;
    
    // [ReadSectors@PC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x145540, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) read_sectors;
    
    // [Reset@PC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x14561c, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) reset;
    
    // [WriteSectors@PC_DISK]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x23c2e4, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) write_sectors;
};
#include "magic/api.end.hpp"
