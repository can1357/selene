#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace em
{
    // [EM_RULE_IGNORE_INCORRECT_LID_NOTIFICATIONS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x33d98, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x407c8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x340d8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) rule_ignore_incorrect_lid_notifications;
    
    // [EmBuiltinProviderHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47700, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f320, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476c0, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) builtin_provider_handle;
    
    // [EmClientQueryRuleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c8de4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98c370, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa742e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c0f0, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) client_query_rule_state;
    
    // [EmClientRuleDeregisterNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621da0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8858f0, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) client_rule_deregister_notification;
    
    // [EmClientRuleEvaluate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c8ed4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d340, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa743d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c350, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) client_rule_evaluate;
    
    // [EmClientRuleRegisterNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621ea0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937cc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8859d0, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) client_rule_register_notification;
    
    // [EmCpuMatchCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e2e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8508c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6500, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) cpu_match_callback;
    
    // [EmFalseCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) false_callback;
    
    // [EmInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78ede0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa402b8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2f218, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4706c, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) init_system;
    
    // [EmMatchDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8878b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938430, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x886060, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) match_date;
    
    // [EmPowerPagingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x520168, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75a828, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93832c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x762278, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) power_paging_enabled;
    
    // [EmProviderDeregister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622124, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8874b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x885c60, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) provider_deregister;
    
    // [EmProviderDeregisterEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6222f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9380e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x885e10, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) provider_deregister_entry;
    
    // [EmProviderRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55002c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82e330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788320, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) provider_register;
    
    // [EmProviderRegisterEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622378, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8876c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x885e70, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) provider_register_entry;
    
    // [EmRemoveBadS3PagesCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622608, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9384b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8860e0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) remove_bad_s3_pages_callback;
    
    // [EM_RULE_DISABLE_FASTS4_GUID]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fd00, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa868, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x10dd0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xd320, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) rule_disable_fasts4_guid;
    
    // [EM_RULE_DISABLE_MULTI_PHASE_RESUME]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x261a00, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xaff0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x15208, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa7a8, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) rule_disable_multi_phase_resume;
    
    // [EmSystemArchitectureCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8879a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x886150, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) system_architecture_callback;
    
    // [EmTrueCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571ce4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711920, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) true_callback;
};
#include "magic/api.end.hpp"
