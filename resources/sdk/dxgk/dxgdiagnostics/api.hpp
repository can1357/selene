#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdiagnostics
{
    // [??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xf800, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2817c, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGDIAGNOSTICS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x53644, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGDIAGNOSTICS@@QEAA@IIW4_POOL_TYPE@@I@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2176c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22110, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance__;
    
    // [CopyFromBuffer@DXGDIAGNOSTICS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1118, 0x762b0 bytes
    // dxgkrnl.sys .text:0x52a08, 0x84380 bytes
    // dxgkrnl.sys .text:0x175c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) copy_from_buffer;
    
    // [ExpandDiagnosticsBuffer@DXGDIAGNOSTICS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x42dc4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x52b30, 0x84380 bytes
    // dxgkrnl.sys .text:0x42fb4, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) expand_diagnostics_buffer;
    
    // [IsPersistentPacket@DXGDIAGNOSTICS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x22fc8, 0x60098 bytes
    // dxgkrnl.sys .text:0x1170, 0x762b0 bytes
    // dxgkrnl.sys .text:0x17b4, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) is_persistent_packet;
    
    // [ReadDiagnosticsInternal@DXGDIAGNOSTICS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1068, 0x762b0 bytes
    // dxgkrnl.sys .text:0x52d58, 0x84380 bytes
    // dxgkrnl.sys .text:0x16ac, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) read_diagnostics_internal;
    
    // [CopyToBuffer@DXGDIAGNOSTICS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x78cc, 0x60098 bytes
    // dxgkrnl.sys .text:0xa59c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x52a7c, 0x84380 bytes
    // dxgkrnl.sys .text:0x2df8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) copy_to_buffer;
    
    // [ReadDiagnostics@DXGDIAGNOSTICS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x22fe8, 0x60098 bytes
    // dxgkrnl.sys .text:0x42ee4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x52c90, 0x84380 bytes
    // dxgkrnl.sys .text:0x430d4, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) read_diagnostics;
    
    // [WriteDiagnosticEntry@DXGDIAGNOSTICS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x794c, 0x60098 bytes
    // dxgkrnl.sys .text:0xa068, 0x762b0 bytes
    // dxgkrnl.sys .text:0x46dc, 0x84380 bytes
    // dxgkrnl.sys .text:0x28c4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) write_diagnostic_entry;
    
    // [WriteDiagnosticEntryInternal@DXGDIAGNOSTICS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7730, 0x60098 bytes
    // dxgkrnl.sys .text:0xa0bc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x473c, 0x84380 bytes
    // dxgkrnl.sys .text:0x2918, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) write_diagnostic_entry_internal;
};
#include "magic/api.end.hpp"
