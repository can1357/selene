#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace wdi
{
    // [WdiDispatchControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50f86c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76c7d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815878, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x774240, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) dispatch_control;
    
    // [WDI_SEM_EVENT_INIT_MISCONFIG]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280468, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2ea78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cd20, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2edb8, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) sem_event_init_misconfig;
    
    // [WDI_SEM_EVENT_INIT_PROVIDER_MAX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280478, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d858, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b830, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2db98, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) sem_event_init_provider_max;
    
    // [WDI_SEM_EVENT_INIT_SCENARIO_CONTEXT_PROVIDER_MAX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280498, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e098, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c1f0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e3d8, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) sem_event_init_scenario_context_provider_max;
    
    // [WDI_SEM_EVENT_INIT_SCENARIO_END_EVENT_MAX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280488, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2de70, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3bf68, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e1b0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) sem_event_init_scenario_end_event_max;
    
    // [WDI_SEM_EVENT_INIT_SCENARIO_MAX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2804a8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f2d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d800, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f618, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) sem_event_init_scenario_max;
    
    // [WDI_SEM_EVENT_SCENARIO_END]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ffe8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd558, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10468, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcca0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) sem_event_scenario_end;
    
    // [WDI_SEM_EVENT_SCENARIO_END_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fed0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd588, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10478, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xccd0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) sem_event_scenario_end_failed;
    
    // [WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2804b8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e088, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c1e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e3c8, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) sem_event_scenario_inflight_max;
    
    // [WDI_SEM_EVENT_SCENARIO_START]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f130, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd568, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10458, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xccb0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) sem_event_scenario_start;
    
    // [WDI_SEM_EVENT_SCENARIO_START_FAILED]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25f140, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xd578, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10488, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xccc0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) sem_event_scenario_start_failed;
    
    // [WDI_SEM_EVENT_SCENARIO_TIMEOUT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2804c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e698, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c900, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e9d8, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) sem_event_scenario_timeout;
    
    // [WDI_SEM_EVENT_SQM_ADD_TO_STREAM]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280448, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e758, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c9d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ea98, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) sem_event_sqm_add_to_stream;
    
    // [WDI_SEM_EVENT_SQM_INCREMENT_DWORD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280458, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2f238, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3d710, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2f578, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) sem_event_sqm_increment_dword;
    
    // [WDI_SEM_EVENT_SQM_INIT]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2605c8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xdf78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12450, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xce80, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) sem_event_sqm_init;
    
    // [WDI_SEM_PROVIDER]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2605d8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xdf88, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12460, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xce90, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) sem_provider;
    
    // [WdiUpdateSem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x224428, 0x32828 bytes
    // ntoskrnl.exe .text:0x59f620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e6d28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59f4a0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) update_sem;
};
#include "magic/api.end.hpp"
