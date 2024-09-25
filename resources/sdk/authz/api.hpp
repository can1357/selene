#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace authz
{
    // [AuthzBasepGetOperandTypeForEvaluation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x234bdc, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) basep_get_operand_type_for_evaluation;
    
    // [AuthzBasepFindTokenAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bc4c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658b6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb338, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) basep_find_token_attribute;
    
    // [AuthzBasepQueryTokenAttributeAndValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bc53c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658be0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb3ac, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) basep_query_token_attribute_and_values;
    
    // [AuthzBasepAddAccessTypeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb5310, 0x32828 bytes
    // ntoskrnl.exe .text:0x23be44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33372c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5d38, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) basep_add_access_type_list;
    
    // [AuthzBasepAddSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x706ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x209c8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ef948, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338188, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) basep_add_security_attribute;
    
    // [AuthzBasepAddSecurityAttributeToLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7138c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a8cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f079c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338dbc, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) basep_add_security_attribute_to_lists;
    
    // [AuthzBasepAddSecurityAttributeValueToLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71194, 0x32828 bytes
    // ntoskrnl.exe .text:0x209fc8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f05fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3384c4, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) basep_add_security_attribute_value_to_lists;
    
    // [AuthzBasepAddSecurityAttributeValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70ea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x209e1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2efd30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338318, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) basep_add_security_attribute_values;
    
    // [AuthzBasepAllocateClaimCollectionNoLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x969530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4ad5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967e10, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) basep_allocate_claim_collection_no_lists;
    
    // [AuthzBasepAllocateSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3baf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0330, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338780, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) basep_allocate_security_attribute;
    
    // [AuthzBasepAllocateSecurityAttributeValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x711d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a51c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0590, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338a0c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) basep_allocate_security_attribute_value;
    
    // [AuthzBasepAllocateSecurityAttributesList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13e140, 0x32828 bytes
    // ntoskrnl.exe .text:0x23b3e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385a1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303cfc, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) basep_allocate_security_attributes_list;
    
    // [AuthzBasepCommitSecurityAttributeChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bbe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a3d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3388c0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) basep_commit_security_attribute_changes;
    
    // [AuthzBasepCompareFQBNOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x233bc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bc970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x659118, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb7e0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) basep_compare_fqbn_operands;
    
    // [AuthzBasepCompareIntegerOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x233e2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bcbf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6593a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bba68, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) basep_compare_integer_operands;
    
    // [AuthzBasepCompareLegacySecurityAttributesInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8a10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780018, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7d50, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) basep_compare_legacy_security_attributes_information;
    
    // [AuthzBasepCompareOctetStringOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x233f54, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bcd24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6594c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bbb94, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) basep_compare_octet_string_operands;
    
    // [AuthzBasepCompareSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e2dcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x780114, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7e50, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) basep_compare_security_attribute;
    
    // [AuthzBasepCompareSecurityAttributesInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc770, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x969570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4ad9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967e50, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) basep_compare_security_attributes_information;
    
    // [AuthzBasepCompareUnicodeStringCaseSensitive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234044, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bce10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6595b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bbc80, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) basep_compare_unicode_string_case_sensitive;
    
    // [AuthzBasepCompareUnicodeStringOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234098, 0x32828 bytes
    // ntoskrnl.exe .text:0x21960c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eae58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358430, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) basep_compare_unicode_string_operands;
    
    // [AuthzBasepCompareUnsigned]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2342d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bce64, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x659608, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bbcd4, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) basep_compare_unsigned;
    
    // [AuthzBasepComputeBitwise]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234330, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bced4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x659678, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bbd44, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) basep_compute_bitwise;
    
    // [AuthzBasepComputeExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234390, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bcf38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6596dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bbda8, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) basep_compute_expression;
    
    // [AuthzBasepConvertRelativeToAbsoluteTokenAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23317c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bbdb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65846c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bac28, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) basep_convert_relative_to_absolute_token_attribute;
    
    // [AuthzBasepCopyoutClaimAttributeValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc7e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9695e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4ae10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967ec4, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) basep_copyout_claim_attribute_values;
    
    // [AuthzBasepCopyoutClaimAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cca34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x969854, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4b044, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x968134, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) basep_copyout_claim_attributes;
    
    // [AuthzBasepCopyoutInternalSecurityAttributeValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9a80, 0x32828 bytes
    // ntoskrnl.exe .text:0x246d0c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9db8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d85ec, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) basep_copyout_internal_security_attribute_values;
    
    // [AuthzBasepCopyoutInternalSecurityAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4771d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x643790, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e98b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6727bc, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) basep_copyout_internal_security_attributes;
    
    // [AuthzBasepCopyoutSecurityAttributeValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbaad0, 0x32828 bytes
    // ntoskrnl.exe .text:0x353878, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f1db4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c184c, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) basep_copyout_security_attribute_values;
    
    // [AuthzBasepCopyoutSecurityAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xba858, 0x32828 bytes
    // ntoskrnl.exe .text:0x3535dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f1b3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c15b0, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) basep_copyout_security_attributes;
    
    // [AuthzBasepDeleteAllSecurityAttributeValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1514, 0x32828 bytes
    // ntoskrnl.exe .text:0x2691ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204e44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a1cc, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) basep_delete_all_security_attribute_values;
    
    // [AuthzBasepDeleteAllSecurityAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2336ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bc31c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6589ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb18c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) basep_delete_all_security_attributes;
    
    // [AuthzBasepDeleteSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x713d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0854, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338e30, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) basep_delete_security_attribute;
    
    // [AuthzBasepDeleteSecurityAttributeValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23373c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bc374, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658a44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb1e4, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) basep_delete_security_attribute_values;
    
    // [AuthzBasepDeviceMemberOf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234400, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bcfc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x659764, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bbe30, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) basep_device_member_of;
    
    // [AuthzBasepDuplicateSecurityAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b880, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0070, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338510, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) basep_duplicate_security_attributes;
    
    // [AuthzBasepEqualUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71374, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a918, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec1f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338e08, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) basep_equal_unicode_string;
    
    // [AuthzBasepEqualUnicodeStringCaseSensitive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcce54, 0x32828 bytes
    // ntoskrnl.exe .text:0x267588, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37ae9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318568, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) basep_equal_unicode_string_case_sensitive;
    
    // [AuthzBasepEvaluateAceCondition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70784, 0x32828 bytes
    // ntoskrnl.exe .text:0x2197b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eb770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b88d0, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) basep_evaluate_ace_condition;
    
    // [AuthzBasepEvaluateAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71678, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a18c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec218, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b92ac, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) basep_evaluate_attribute;
    
    // [AuthzBasepEvaluateExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234518, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a284, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b93a4, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) basep_evaluate_expression;
    
    // [AuthzBasepEvaluateSetRelationship]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23466c, 0x32828 bytes
    // ntoskrnl.exe .text:0x21931c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eab5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3589a4, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) basep_evaluate_set_relationship;
    
    // [AuthzBasepFinaliseSecurityAttributesList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bb80, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a360, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f03c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338850, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) basep_finalise_security_attributes_list;
    
    // [AuthzBasepFindSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe09f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2df2e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x259dd0, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) basep_find_security_attribute;
    
    // [AuthzBasepFindSecurityAttributeValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7104c, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f0648, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338a60, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) basep_find_security_attribute_value;
    
    // [AuthzBasepFindSystemSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412e20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3a14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f730c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f7220, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) basep_find_system_security_attribute;
    
    // [AuthzBasepFreeSecurityAttributeValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b7f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2691fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34eeb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a21c, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) basep_free_security_attribute_values;
    
    // [AuthzBasepFreeSecurityAttributesList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b770, 0x32828 bytes
    // ntoskrnl.exe .text:0x34e0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ee30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231230, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) basep_free_security_attributes_list;
    
    // [AuthzBasepGetClaimAttributeValueCopyoutBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ccbc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9699ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4b1cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9682cc, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) basep_get_claim_attribute_value_copyout_buffer_size;
    
    // [AuthzBasepGetClaimAttributesCopyoutBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ccd58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x969bd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4b3b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9684b8, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) basep_get_claim_attributes_copyout_buffer_size;
    
    // [AuthzBasepGetConstantOperand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2349a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a1dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec324, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b92fc, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) basep_get_constant_operand;
    
    // [AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb99f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2034d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d8528, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) basep_get_internal_security_attribute_value_copyout_buffer_size;
    
    // [AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x477148, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ddfcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9d84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6726e4, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) basep_get_internal_security_attributes_copyout_buffer_size;
    
    // [AuthzBasepGetNextValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234a78, 0x32828 bytes
    // ntoskrnl.exe .text:0x219534, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ead74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35873c, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) basep_get_next_value;
    
    // [AuthzBasepGetOperandStringCaseForEvaluation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234b80, 0x32828 bytes
    // ntoskrnl.exe .text:0x21aa00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eb000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3585d0, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) basep_get_operand_string_case_for_evaluation;
    
    // [AuthzBasepGetSecurityAttributeValueCopyoutBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0d20, 0x32828 bytes
    // ntoskrnl.exe .text:0x353c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f19e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1bf0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) basep_get_security_attribute_value_copyout_buffer_size;
    
    // [AuthzBasepGetSecurityAttributesCopyoutBufferSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0820, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8ab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f17f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x259b20, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) basep_get_security_attributes_copyout_buffer_size;
    
    // [AuthzBasepInitializeResourceClaimsFromSacl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xccd28, 0x32828 bytes
    // ntoskrnl.exe .text:0x23bce4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eff3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303d48, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) basep_initialize_resource_claims_from_sacl;
    
    // [AuthzBasepInitializeSystemSecurityAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5569c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e8d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84fee4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6af8, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) basep_initialize_system_security_attributes;
    
    // [AuthzBasepIsCompareRelevantAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e8ac8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653b5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7800e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c7e1c, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) basep_is_compare_relevant_attribute;
    
    // [AuthzBasepIsValidExpression]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71250, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a028, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b9148, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) basep_is_valid_expression;
    
    // [AuthzBasepMemAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71210, 0x32828 bytes
    // ntoskrnl.exe .text:0x23be18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f05d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303e7c, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) basep_mem_alloc;
    
    // [AuthzBasepMemberOf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234bec, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bd108, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6598a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bbf78, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) basep_member_of;
    
    // [AuthzBasepMergeAccessReasons]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2339a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bc740, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658ee8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb5b0, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) basep_merge_access_reasons;
    
    // [AuthzBasepObjectInTypeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2339f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bc790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658f38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb600, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) basep_object_in_type_list;
    
    // [AuthzBasepOperandValueTypesCompatible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234ce8, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a334, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec3ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b9454, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) basep_operand_value_types_compatible;
    
    // [AuthzBasepPopResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234dc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bd21c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6599d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bc08c, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) basep_pop_result;
    
    // [AuthzBasepPushResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71230, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a164, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec058, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b9284, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) basep_push_result;
    
    // [AuthzBasepQueryClaimAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x486f34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65eb80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c3ffc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d2240, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) basep_query_claim_attributes_token;
    
    // [AuthzBasepQueryInternalSecurityAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4770c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x643704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e9cf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x672658, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) basep_query_internal_security_attributes_token;
    
    // [AuthzBasepQuerySecurityAttributeAndValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0530, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8e2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ebfb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x259e9c, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) basep_query_security_attribute_and_values;
    
    // [AuthzBasepQuerySecurityAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xba794, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d8970, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f16b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2599e0, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) basep_query_security_attributes_token;
    
    // [AuthzBasepQuerySystemSecurityAttributeAndValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412db4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f39a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f729c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f71b0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) basep_query_system_security_attribute_and_values;
    
    // [AuthzBasepRemoveSecurityAttributeFromLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x233868, 0x32828 bytes
    // ntoskrnl.exe .text:0x26eccc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658d24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32047c, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) basep_remove_security_attribute_from_lists;
    
    // [AuthzBasepRemoveSecurityAttributeValueFromLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x26926c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658da4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a28c, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) basep_remove_security_attribute_value_from_lists;
    
    // [AuthzBasepReplaceSecurityAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70680, 0x32828 bytes
    // ntoskrnl.exe .text:0x209c1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f07e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338118, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) basep_replace_security_attribute;
    
    // [AuthzBasepResetOperands]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70d44, 0x32828 bytes
    // ntoskrnl.exe .text:0x219e2c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ebdc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b8f4c, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) basep_reset_operands;
    
    // [AuthzBasepRestartOperandValueEnumeration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234de4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21aaa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eab18, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358b1c, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) basep_restart_operand_value_enumeration;
    
    // [AuthzBasepRollbackSecurityAttributeChanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2338e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bc680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658e28, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb4f0, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) basep_rollback_security_attribute_changes;
    
    // [AuthzBasepSetAccessReasons]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb53f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23bf40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x333fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5e30, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) basep_set_access_reasons;
    
    // [AuthzBasepSetAppContainerAccessReasons]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x233a48, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bc7ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658f94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb65c, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) basep_set_app_container_access_reasons;
    
    // [AuthzBasepSetSecurityAttributesToken]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70590, 0x32828 bytes
    // ntoskrnl.exe .text:0x209d38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ef9f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338234, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) basep_set_security_attributes_token;
    
    // [AuthzBasepSetTypeListAccessReasons]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x132324, 0x32828 bytes
    // ntoskrnl.exe .text:0x36f7d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39805c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x370b54, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) basep_set_type_list_access_reasons;
    
    // [AuthzBasepSupportSetOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71350, 0x32828 bytes
    // ntoskrnl.exe .text:0x21a13c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ec1c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b925c, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) basep_support_set_operation;
    
    // [AuthzBasepUnicodeStringFromOperandValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x70dc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219eb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2df3b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b8fd0, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) basep_unicode_string_from_operand_value;
    
    // [AuthzBasepUpdateParentTypeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x233a8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5bc838, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x658fe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5bb6a8, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) basep_update_parent_type_list;
    
    // [AuthzBasepValidateSecurityAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71490, 0x32828 bytes
    // ntoskrnl.exe .text:0x20a6c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2efad4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x338bb8, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) basep_validate_security_attributes;
    
    // [AuthzBasepValueInSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x234e30, 0x32828 bytes
    // ntoskrnl.exe .text:0x219408, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eac48, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x358610, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) basep_value_in_set;
};
#include "magic/api.end.hpp"
