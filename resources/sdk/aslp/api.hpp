#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace aslp
{
    // [AslpFileLargeAssignViewAndDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6cbf0c, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) file_large_assign_view_and_delete;
    
    // [AslpDetermineDosPathNameType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x6c8d70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0xa47480, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) determine_dos_path_name_type;
    
    // [AslpCrc32Table]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286c70, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x3d900, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x4a250, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3db00, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) crc32_table;
    
    // [AslpFileGet16BitDescription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c9934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9673dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa48b2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x965cbc, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) file_get16_bit_description;
    
    // [AslpFileGet16BitModuleName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c9a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9674c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa48c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x965da0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) file_get16_bit_module_name;
    
    // [AslpFileGetChecksum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c9af4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9675a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa48cf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x965e84, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) file_get_checksum;
    
    // [AslpFileGetChecksumAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c9bd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96768c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa48de0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x965f6c, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) file_get_checksum_attributes;
    
    // [AslpFileGetClrVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c9d80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x967830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa48f84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966110, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) file_get_clr_version;
    
    // [AslpFileGetClrVersionAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6c9f54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x967a08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4915c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9662e8, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) file_get_clr_version_attribute;
    
    // [AslpFileGetCrcChecksum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca0dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x967b94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa492e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966474, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) file_get_crc_checksum;
    
    // [AslpFileGetExeWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca178, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x967c38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49384, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966518, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) file_get_exe_wrapper;
    
    // [AslpFileGetExportName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca314, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x967dcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49524, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9666ac, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) file_get_export_name;
    
    // [AslpFileGetFileKindDetailAttribute]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca3d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x967e98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa495f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966778, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) file_get_file_kind_detail_attribute;
    
    // [AslpFileGetHeaderAttributesNE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca458, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x967f1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49674, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9667fc, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) file_get_header_attributes_ne;
    
    // [AslpFileGetHeaderAttributesPE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca5f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9680b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966998, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) file_get_header_attributes_pe;
    
    // [AslpFileGetImageNtHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca7ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9682e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49a8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966bc4, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) file_get_image_nt_header;
    
    // [AslpFileGetNtHeaderAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9683c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49b68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966ca0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) file_get_nt_header_attributes;
    
    // [AslpFileGetPeExportNameExeWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ca9e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968524, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49cdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966e04, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) file_get_pe_export_name_exe_wrapper;
    
    // [AslpFileGetVersionAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cab00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79460c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75a088, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x799d8c, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) file_get_version_attributes;
    
    // [AslpFileGetVersionBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cabac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x794e00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75a0ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79a580, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) file_get_version_block;
    
    // [AslpFileHasActiveMarkWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968648, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x966f28, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) file_has_active_mark_wrapper;
    
    // [AslpFileHasSecuromWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb1b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968788, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49f48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967068, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) file_has_securom_wrapper;
    
    // [AslpFileLargeEnsureLargeFileMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cbfa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968cfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4a4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9675dc, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) file_large_ensure_large_file_mapping;
    
    // [AslpFileLargeGetChecksum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc080, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4a670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967720, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) file_large_get_checksum;
    
    // [AslpFileLargeGetChecksumAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc16c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968f34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4a764, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967814, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) file_large_get_checksum_attributes;
    
    // [AslpFileLargeGetCrcChecksum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc25c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x969028, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4a858, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967908, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) file_large_get_crc_checksum;
    
    // [AslpFileLargeMapCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc438, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96920c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4aa38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967aec, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) file_large_map_create;
    
    // [AslpFileLargeMapDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc69c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x969484, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4acb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967d64, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) file_large_map_delete;
    
    // [AslpFileMakeBinVersionAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x794d04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75a62c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79a484, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) file_make_bin_version_attributes;
    
    // [AslpFileMakeStringVersionAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x794670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x716c7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x799df0, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) file_make_string_version_attributes;
    
    // [AslpFileMappingGetFileKind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x561e2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x795470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79abf0, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) file_mapping_get_file_kind;
    
    // [AslpFilePartialViewFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cc6f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9694e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4ad10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967dc4, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) file_partial_view_free;
    
    // [AslpFileQuery16BitDescription]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb538, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x96880c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa49fcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9670ec, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) file_query16_bit_description;
    
    // [AslpFileQuery16BitModuleName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb650, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968924, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4a0e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967204, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) file_query16_bit_module_name;
    
    // [AslpFileQueryExportName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb76c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968a38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4a1f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967318, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) file_query_export_name;
    
    // [AslpFileQueryVersionString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cb944, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x794a38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x717080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79a1b8, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) file_query_version_string;
    
    // [AslpFileStringTokenize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x233078, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b89a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b9330, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) file_string_tokenize;
    
    // [AslpFileVerBlockGetValueOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x233118, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b8a98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f7b5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b9428, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) file_ver_block_get_value_offset;
    
    // [AslpFileVerQueryBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cbb7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x794b6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7171c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79a2ec, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) file_ver_query_block;
    
    // [AslpFileVerStringBlockGetValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cbd6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x794990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x716fd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79a110, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) file_ver_string_block_get_value;
    
    // [AslpHasStarForceWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cbe1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968bfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4a3c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9674dc, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) has_star_force_wrapper;
    
    // [AslpImageRvaToVa]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6cbe98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x968c80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa4a448, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x967560, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) image_rva_to_va;
    
    // [AslpHardErrorModeSet]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x82a80, 0x17e70 bytes
    // dxgi.dll .text:0x82c00, 0x17e70 bytes
    // dxgi.dll .text:0x8358c, 0x17e70 bytes
    //
    _q2(sdk::unknown_ptr) hard_error_mode_set;
};
#include "magic/api.end.hpp"
