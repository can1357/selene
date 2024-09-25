#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ae
{
    // [AE_LOG]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae030, 0x17e70 bytes
    // dxgi.dll .rdata:0xae360, 0x17e70 bytes
    // dxgi.dll .rdata:0xadac0, 0x18b10 bytes
    // dxgi.dll .rdata:0xaf800, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) log;
    
    // [AE_PCA_DX_SHIM_APPLIED_HIGHDPIAWARE_EVENT]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae020, 0x17e70 bytes
    // dxgi.dll .rdata:0xae350, 0x17e70 bytes
    // dxgi.dll .rdata:0xadab0, 0x18b10 bytes
    // dxgi.dll .rdata:0xaf7f0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) pca_dx_shim_applied_highdpiaware_event;
    
    // [AeSbCallEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x112060, 0x67960 bytes
    // ntdll.dll .rdata:0x124570, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13a770, 0x74648 bytes
    // ntdll.dll .rdata:0x124870, 0x6fc38 bytes
    //
    _m2(sdk::unknown_ptr) sb_call_event;
    
    // [AeSbContextUpdateEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d400, 0x67960 bytes
    // ntdll.dll .rdata:0x1304c8, 0x6fc38 bytes
    // ntdll.dll .rdata:0x14ba48, 0x74648 bytes
    // ntdll.dll .rdata:0x1307c8, 0x6fc38 bytes
    //
    _m3(sdk::unknown_ptr) sb_context_update_event;
    
    // [AeSbImplEvent]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x112070, 0x67960 bytes
    // ntdll.dll .rdata:0x124580, 0x6fc38 bytes
    // ntdll.dll .rdata:0x13a780, 0x74648 bytes
    // ntdll.dll .rdata:0x124880, 0x6fc38 bytes
    //
    _m4(sdk::unknown_ptr) sb_impl_event;
};
#include "magic/api.end.hpp"
