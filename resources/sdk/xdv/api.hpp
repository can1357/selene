#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace xdv
{
    // [XdvEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFD:0x75b040, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4600c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd4600c, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) enabled;
    
    // [XdvExAllocatePoolInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x70feac, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d25a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9d15a0, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) ex_allocate_pool_internal;
    
    // [XdvName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0eea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFD:0xd65150, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0eee0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) name;
    
    // [XdvExInitializeLookasideListExInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22315c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bad0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5baef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b950, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) ex_initialize_lookaside_list_ex_internal;
    
    // [XdvExInitializeNPagedLookasideListInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701394, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c07e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc860, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf7e0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) ex_initialize_n_paged_lookaside_list_internal;
    
    // [XdvExInitializePagedLookasideListInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x701394, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9c07e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xabc860, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9bf7e0, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) ex_initialize_paged_lookaside_list_internal;
    
    // [XdvIoAllocateIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223170, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bb40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5baf60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b9c0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) io_allocate_irp;
    
    // [XdvIoAllocateMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223178, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bb60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5baf80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59b9e0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) io_allocate_mdl;
    
    // [XdvIoAllocateWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223180, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bafc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ba20, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) io_allocate_work_item;
    
    // [XdvIoBuildDeviceIoControlRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223184, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bbc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bafe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59ba40, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) io_build_device_io_control_request;
    
    // [XdvIoBuildSynchronousFsdRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2231e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bc40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bac0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) io_build_synchronous_fsd_request;
    
    // [XdvIopBuildAsynchronousFsdRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x223220, 0x32828 bytes
    // ntoskrnl.exe .text:0x59bc90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5bb0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59bb10, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) iop_build_asynchronous_fsd_request;
};
#include "magic/api.end.hpp"
