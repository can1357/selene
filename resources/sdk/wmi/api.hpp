#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../trace/information_class_t.hpp"

#include "magic/api.start.hpp"
namespace wmi
{
    // [WmiMatchSMBiosSysInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9d3450, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) match_sm_bios_sys_info;
    
    // [WmiAcquireSmbiosLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x524610, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d6ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d341c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76513c, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) acquire_smbios_lock_exclusive;
    
    // [WmiGetClock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2255ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a0790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5eab50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0610, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) get_clock;
    
    // [WmiIdleAccntEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x35917c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b578, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d58, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) idle_accnt_event_enabled;
    
    // [WmiIdleStateEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359180, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d54, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b580, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d54, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) idle_state_event_enabled;
    
    // [WMIInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7828e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa38c1c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb42414, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa390cc, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [WmiIrpNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x6fa2f0, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b9310, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xaa2300, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9b8310, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) irp_names;
    
    // [WmiPerfStateDomainEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x340ee0, 0x32828 bytes
    // ntoskrnl.exe .data:0xced150, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16c84, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xced150, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) perf_state_domain_event_enabled;
    
    // [WmiPerfStateEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x340ee4, 0x32828 bytes
    // ntoskrnl.exe .data:0xced14c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16c80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xced14c, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) perf_state_event_enabled;
    
    // [WmiQueryTraceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50ef58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76bf70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x843ef0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7739e0, 0x1fe000 bytes
    //
    _m9(sdk::function<int32_t(enum trace::information_class_t, void*, uint32_t, uint32_t*, void*)>*) query_trace_information;
    
    // [WmiQueryTraceProviderCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e448, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a47f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9f6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af2d8, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) query_trace_provider_count;
    
    // [WmiReleaseSmbiosLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x524630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d71c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d34cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76516c, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) release_smbios_lock_exclusive;
    
    // [WmiSetNetworkNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a36fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9303b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9d537c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92ec88, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) set_network_notify;
    
    // [WmiThermalEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x359178, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9d50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1b57c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9d50, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) thermal_event_enabled;
    
    // [WmiThermalPolicyEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342690, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4d68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd176ac, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4d68, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) thermal_policy_event_enabled;
    
    // [WmiTraceMessage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd35f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x26e270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x390000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31fb10, 0x1fe000 bytes
    //
    _n5(sdk::function<int32_t(uint64_t, uint32_t, const struct nt::guid_t*, uint16_t, ...)>*) trace_message;
    
    // [WmiTraceMessageVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x225648, 0x32828 bytes
    // ntoskrnl.exe .text:0x5a0800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x466c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5a0680, 0x1fe000 bytes
    //
    _n6(sdk::function<int32_t(uint64_t, uint32_t, const struct nt::guid_t*, uint16_t, char*)>*) trace_message_va;
    
    // [WmiTraceRundownNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47ae78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a336c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855178, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ab484, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) trace_rundown_notify;
    
    // [WmiVerifierCopyEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22466c, 0x32828 bytes
    // ntoskrnl.exe .text:0x59f8a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e7088, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59f720, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) verifier_copy_event;
    
    // [WmiVerifierTakeEventOwnership]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2246c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x59f8f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5e70e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59f778, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) verifier_take_event_ownership;
    
    // [WmiMonitorBrightness_GUID]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2eecd0, 0x13864 bytes
    // win32kfull.sys .rdata:0x2f3848, 0x1596d bytes
    // win32kfull.sys .rdata:0x2f3818, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) monitor_brightness_guid;
    
    // [WmiScsiAddressGuid]
    // Ldr = [ataport.sys]
    // => Windows 10 v1607, Windows 11, Windows 10 v20H2
    // ataport.sys .rdata:0x167e0, 0x5f10 bytes
    // ataport.sys .rdata:0x1b368, 0x5f38 bytes
    // ataport.sys .rdata:0x1b328, 0x5f38 bytes
    //
    _o1(sdk::unknown_ptr) scsi_address_guid;
};
#include "magic/api.end.hpp"
