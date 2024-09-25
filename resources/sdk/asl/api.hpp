#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace asl
{
    // [AslEnvResolveVars]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6c91ac, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) env_resolve_vars;
    
    // [AslFileMappingGetViewBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6c88f0, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) file_mapping_get_view_base;
    
    // [AslStringPatternMatchExA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a8740, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) string_pattern_match_ex_a;
    
    // [AslStringPatternMatchExW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7c24d0, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) string_pattern_match_ex_w;
    
    // [AslStringUpper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6c809c, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) string_upper;
    
    // [AslPathToSystemPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x6c8c64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0xa4632c, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) path_to_system_path;
    
    // [AslEnvVerifyGuestProcessorSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x967338, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa486f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x965c18, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) env_verify_guest_processor_support;
    
    // [AslFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50035c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x734e00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73ca40, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) free;
    
    // [AslStringPatternMatchA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x525ddc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x739eec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x741b2c, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) string_pattern_match_a;
    
    // [AslStringPatternMatchW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5696fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7361d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73de10, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) string_pattern_match_w;
    
    // [AslAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50051c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73b594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71743c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7431d4, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) alloc;
    
    // [AslComputeCrc32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8150, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x964788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa450c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x963068, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) compute_crc32;
    
    // [AslEnvExpandStrings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8e20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73473c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa47cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73c384, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) env_expand_strings;
    
    // [AslEnvExpandStrings2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c9008, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x734380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa47ec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73bfc8, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) env_expand_strings2;
    
    // [AslEnvVarQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c936c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7348cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa48550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73c514, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) env_var_query;
    
    // [AslFileAllocAndGetAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c955c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x794450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759ec4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x799bd0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) file_alloc_and_get_attributes;
    
    // [AslFileMappingCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ff204, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x738fd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759988, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x740c18, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) file_mapping_create;
    
    // [AslFileMappingCreateFromImageView]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561d10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x795374, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855088, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79aaf4, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) file_mapping_create_from_image_view;
    
    // [AslFileMappingDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x500320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736944, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x757a38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e584, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) file_mapping_delete;
    
    // [AslFileMappingEnsure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8304, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79457c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759fcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x799cfc, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) file_mapping_ensure;
    
    // [AslFileMappingEnsureMappedAs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c83e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x964c1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa45700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9634fc, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) file_mapping_ensure_mapped_as;
    
    // [AslFileMappingGetFileKindDetail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c84c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x964cec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa457d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9635cc, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) file_mapping_get_file_kind_detail;
    
    // [AslFileMappingGetImageTypeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c868c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x964eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa45994, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x963790, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) file_mapping_get_image_type_ex;
    
    // [AslFileNotFound]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56bb8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736918, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75a05c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e558, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) file_not_found;
    
    // [AslGuidToString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56414c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3e00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a384, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7abf18, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) guid_to_string;
    
    // [AslGuidToString_UStr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7bd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9643e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa44cd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x962cc0, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) guid_to_string_u_str;
    
    // [AslHashFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8900, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x965110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa47c54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9639f0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) hash_free;
    
    // [AslLogCallPrintf]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c82dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x736554, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x783e18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73e194, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) log_call_printf;
    
    // [AslPathClean]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c897c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x734ae4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa45bdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73c72c, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) path_clean;
    
    // [AslPathSplit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x501de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x762bc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x718054, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x769e68, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) path_split;
    
    // [AslPathToNetworkPathNt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8b8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x734a6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa46264, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73c6b4, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) path_to_network_path_nt;
    
    // [AslRegistryBuildMachinePath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563fec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3c88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a2d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7abda0, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) registry_build_machine_path;
    
    // [AslRegistryBuildUserPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56408c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3d3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a43c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7abe54, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) registry_build_user_path;
    
    // [AslRegistryGetKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563f18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a3ba4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a1ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7abcbc, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) registry_get_key;
    
    // [AslRegistryGetUInt32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8190, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9649f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa454d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9632d8, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) registry_get_u_int32;
    
    // [AslRegistryGetUInt32_UStr]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8200, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x964a78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa45554, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x963358, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) registry_get_u_int32_u_str;
    
    // [AslStringAnsiToUnicode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7d14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x964534, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa44e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x962e14, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) string_ansi_to_unicode;
    
    // [AslStringDuplicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7e50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73ae28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717378, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742a68, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) string_duplicate;
    
    // [AslStringSearchA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c7f74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x964654, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa44f48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x962f34, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) string_search_a;
    
    // [AslStringSearchW]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c8004, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9646ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa44fe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x962fcc, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) string_search_w;
    
    // [AslStringUpcaseToMultiByteN]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5001bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73ad54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758a5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x742994, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) string_upcase_to_multi_byte_n;
    
    // [AslStringXmlSanitize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c80e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79492c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x716f6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79a0ac, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) string_xml_sanitize;
    
    // [AslEnvBuildBasic]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7fb00, 0x17e70 bytes
    // dxgi.dll .text:0x7fc80, 0x17e70 bytes
    // dxgi.dll .text:0x8060c, 0x17e70 bytes
    //
    _q2(sdk::unknown_ptr) env_build_basic;
    
    // [AslGuidFromStringN]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x82b70, 0x17e70 bytes
    // dxgi.dll .text:0x82cf0, 0x17e70 bytes
    // dxgi.dll .text:0x8367c, 0x17e70 bytes
    //
    _q3(sdk::unknown_ptr) guid_from_string_n;
    
    // [AslHardErrorModeDisable]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x81e88, 0x17e70 bytes
    // dxgi.dll .text:0x82008, 0x17e70 bytes
    // dxgi.dll .text:0x82994, 0x17e70 bytes
    //
    _q4(sdk::unknown_ptr) hard_error_mode_disable;
    
    // [AslHardErrorModeRestore]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x81ed0, 0x17e70 bytes
    // dxgi.dll .text:0x82050, 0x17e70 bytes
    // dxgi.dll .text:0x829dc, 0x17e70 bytes
    //
    _q5(sdk::unknown_ptr) hard_error_mode_restore;
    
    // [AslPackageAliasDecode]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7e8f8, 0x17e70 bytes
    // dxgi.dll .text:0x7ea78, 0x17e70 bytes
    // dxgi.dll .text:0x7f404, 0x17e70 bytes
    //
    _q6(sdk::unknown_ptr) package_alias_decode;
    
    // [AslPackageAliasEncode]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7eaf0, 0x17e70 bytes
    // dxgi.dll .text:0x7ec70, 0x17e70 bytes
    // dxgi.dll .text:0x7f5fc, 0x17e70 bytes
    //
    _q7(sdk::unknown_ptr) package_alias_encode;
    
    // [AslPathBuildSignatureForDirectoryFileLongpath]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x966bc, 0x17e70 bytes
    // dxgi.dll .text:0x9683c, 0x17e70 bytes
    // dxgi.dll .text:0x971dc, 0x17e70 bytes
    //
    _q8(sdk::unknown_ptr) path_build_signature_for_directory_file_longpath;
    
    // [AslPathBuildSignatureForInternetFileLongpath]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x96960, 0x17e70 bytes
    // dxgi.dll .text:0x96ae0, 0x17e70 bytes
    // dxgi.dll .text:0x97480, 0x17e70 bytes
    //
    _q9(sdk::unknown_ptr) path_build_signature_for_internet_file_longpath;
    
    // [AslPathBuildSignatureLongpath]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x96c60, 0x17e70 bytes
    // dxgi.dll .text:0x96de0, 0x17e70 bytes
    // dxgi.dll .text:0x97780, 0x17e70 bytes
    //
    _r0(sdk::unknown_ptr) path_build_signature_longpath;
    
    // [AslPathGetLongFileNameLongpath]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x96e2c, 0x17e70 bytes
    // dxgi.dll .text:0x96fac, 0x17e70 bytes
    // dxgi.dll .text:0x9794c, 0x17e70 bytes
    //
    _r1(sdk::unknown_ptr) path_get_long_file_name_longpath;
    
    // [AslPathIsOnRemovableMedia]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x97008, 0x17e70 bytes
    // dxgi.dll .text:0x97188, 0x17e70 bytes
    // dxgi.dll .text:0x97b28, 0x17e70 bytes
    //
    _r2(sdk::unknown_ptr) path_is_on_removable_media;
    
    // [AslPathIsTemporaryInternetFile]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x97168, 0x17e70 bytes
    // dxgi.dll .text:0x972e8, 0x17e70 bytes
    // dxgi.dll .text:0x97c88, 0x17e70 bytes
    //
    _r3(sdk::unknown_ptr) path_is_temporary_internet_file;
    
    // [AslRegistryGetStringExpand]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x82548, 0x17e70 bytes
    // dxgi.dll .text:0x826c8, 0x17e70 bytes
    // dxgi.dll .text:0x83054, 0x17e70 bytes
    //
    _r4(sdk::unknown_ptr) registry_get_string_expand;
    
    // [AslRegistryOpenKey]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8291c, 0x17e70 bytes
    // dxgi.dll .text:0x82a9c, 0x17e70 bytes
    // dxgi.dll .text:0x83428, 0x17e70 bytes
    //
    _r5(sdk::unknown_ptr) registry_open_key;
    
    // [AslStringFindChar]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x83100, 0x17e70 bytes
    // dxgi.dll .text:0x83280, 0x17e70 bytes
    // dxgi.dll .text:0x83c0c, 0x17e70 bytes
    //
    _r6(sdk::unknown_ptr) string_find_char;
    
    // [AslFileFreeAttributes]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x87478, 0x17e70 bytes
    // dxgi.dll .text:0x875f8, 0x17e70 bytes
    // dxgi.dll .text:0x9720c, 0x18b10 bytes
    // dxgi.dll .text:0x87f84, 0x17e70 bytes
    //
    _r7(sdk::unknown_ptr) file_free_attributes;
};
#include "magic/api.end.hpp"
