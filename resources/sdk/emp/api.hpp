#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace emp
{
    // [EmpAllocatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3701bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38c5a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37153c, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) allocate_pool;
    
    // [EmpFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x370188, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38c5e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x371508, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) free_pool;
    
    // [EmpAcquirePagingReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c8ff4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98c4d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa744d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c254, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) acquire_paging_reference;
    
    // [EmpBadS3Page]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233ac, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4770c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f32c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476cc, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) bad_s3_page;
    
    // [EmpCacheBiosDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78f0d8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa426bc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb31438, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4946c, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) cache_bios_date;
    
    // [EmpCachedBiosDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233a8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47708, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f328, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476c8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) cached_bios_date;
    
    // [EmpCallbackListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47760, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f358, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476f8, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) callback_list_head;
    
    // [EmpCheckErrataList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) check_errata_list;
    
    // [EmpCheckOperator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5612fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e3c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8509a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a65e0, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) check_operator;
    
    // [EmpClientRuleRegisterNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x621eb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x887244, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x937ce4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8859f4, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) client_rule_register_notification;
    
    // [EmpDatabaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323410, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47770, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f390, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47730, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) database_lock;
    
    // [EmpEntryListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323400, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47768, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f380, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47728, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) entry_list_head;
    
    // [EmpEvaluateNodeLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x107174, 0x32828 bytes
    // ntoskrnl.exe .text:0x36fd8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38c1a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37110c, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) evaluate_node_link;
    
    // [EmpEvaluateParseNodeMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1075bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x3701fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38c61c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37157c, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) evaluate_parse_node_mapping;
    
    // [EmpEvaluatePermuteRuleEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x145050, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c06a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d76c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c14b4, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) evaluate_permute_rule_entries;
    
    // [EmpEvaluateTargetRule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106fb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36fb48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bf58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x370ec8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) evaluate_target_rule;
    
    // [EmpEvaluateUpdateRuleEvalState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x144fa4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c05f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d761c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1404, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) evaluate_update_rule_eval_state;
    
    // [EmpEvaluationQueueLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323418, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47780, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f3b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47738, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) evaluation_queue_lock;
    
    // [EmpInfParseGetGuidFromName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7904a4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa41a0c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30660, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa487bc, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) inf_parse_get_guid_from_name;
    
    // [EmpInfParseGetSectionLineCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790538, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa41ab8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3070c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48868, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) inf_parse_get_section_line_count;
    
    // [EmpInfParseGetStringIndexFromName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7909d4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa41f90, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30c1c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48d40, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) inf_parse_get_string_index_from_name;
    
    // [EmpInfParseGetValueFromSectionAndKeyName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790ae8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4209c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30d28, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48e4c, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) inf_parse_get_value_from_section_and_key_name;
    
    // [EmpInfParseSearchDependencyList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790d90, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4237c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb31004, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4912c, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) inf_parse_search_dependency_list;
    
    // [EmpMapPhysicalAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78f204, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4280c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7ebac, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa495bc, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) map_physical_address;
    
    // [EmpNumberOfCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32707c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50944, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6e4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50944, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) number_of_callbacks;
    
    // [EmpNumberOfEntryTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327078, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50940, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50940, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) number_of_entry_types;
    
    // [EmpNumberOfRules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32706c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50934, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50934, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) number_of_rules;
    
    // [EmpNumberOfStrings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327070, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50938, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50938, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) number_of_strings;
    
    // [EmpNumberOfTargetRules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327074, 0x32828 bytes
    // ntoskrnl.exe .data:0xc5093c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5093c, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) number_of_target_rules;
    
    // [EmpPagingLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323408, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47778, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f388, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47720, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) paging_lock;
    
    // [EmpPagingStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x323420, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47790, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f3a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47740, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) paging_status;
    
    // [EmpParseCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78f7f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa40d24, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2f9bc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa47ad4, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) parse_callbacks;
    
    // [EmpParseEntryTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78f69c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa40bac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2f844, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4795c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) parse_entry_types;
    
    // [EmpParseInfDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78f304, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa40618, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2f550, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa473c8, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) parse_inf_database;
    
    // [EmpParseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47720, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476e0, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) parse_lock;
    
    // [EmpParseRuleExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78fb64, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa410bc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2fd4c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa47e6c, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) parse_rule_expression;
    
    // [EmpParseRuleTerm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78fa10, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa40f58, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2fbe8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa47d08, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) parse_rule_term;
    
    // [EmpParseRuleTermArgMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790db0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa423a0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb31028, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa49150, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) parse_rule_term_arg_mapping;
    
    // [EmpParseRules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790014, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa415b0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30230, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48360, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) parse_rules;
    
    // [EmpParseStrings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790370, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa418cc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30534, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4867c, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) parse_strings;
    
    // [EmpParseTargetRuleStringIndexList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790794, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa41d4c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb3097c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa48afc, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) parse_target_rule_string_index_list;
    
    // [EmpParseTargetRules]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790584, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa41b0c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30760, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa488bc, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) parse_target_rules;
    
    // [EmpProviderDeregisterEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bb8bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4e8e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x529f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4e8d50, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) provider_deregister_entry;
    
    // [EmpProviderRegister]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x550050, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82e3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788390, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) provider_register;
    
    // [EmpQueueRuleUpdateState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1396d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3aed58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b1ff8, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) queue_rule_update_state;
    
    // [EmpReleasePagingReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c9088, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98c458, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74544, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c1d8, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) release_paging_reference;
    
    // [EmpRemoveBadS3PageWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x622690, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8879e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x938560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x886190, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) remove_bad_s3_page_worker;
    
    // [EmpRuleListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47730, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f348, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476e8, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) rule_list_head;
    
    // [EmpRuleParserStackPop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790d40, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42324, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30f34, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa490d4, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) rule_parser_stack_pop;
    
    // [EmpRuleParserStackPush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x790cd0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa422ac, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb30f8c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4905c, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) rule_parser_stack_push;
    
    // [EmpRuleUpdateQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47728, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f350, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476f0, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) rule_update_queue;
    
    // [EmpRuleUpdateWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47740, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f360, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc47700, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) rule_update_worker;
    
    // [EmpRuleUpdateWorkerThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x144710, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c1520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d9200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c2330, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) rule_update_worker_thread;
    
    // [EmpSearchCallbackDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139878, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af074, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2314, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) search_callback_database;
    
    // [EmpSearchEntryDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1398ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af0ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2388, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b234c, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) search_entry_database;
    
    // [EmpSearchRuleDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1076ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x2150e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bf20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d404, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) search_rule_database;
    
    // [EmpSearchTargetRuleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1076cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x215118, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38bef8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d43c, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) search_target_rule_list;
    
    // [EmpStringTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327080, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50948, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a6f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50948, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) string_table;
    
    // [EmpTargetRuleListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47710, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f330, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476d8, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) target_rule_list_head;
    
    // [EmpUpdateRuleState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x107720, 0x32828 bytes
    // ntoskrnl.exe .text:0x215140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38c730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35d464, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) update_rule_state;
    
    // [EmpWorkerBusy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3233b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc47718, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f338, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc476d0, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) worker_busy;
};
#include "magic/api.end.hpp"
