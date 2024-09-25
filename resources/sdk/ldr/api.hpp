#pragma once
#include <sdkgen/support_library.hpp>
#include "failure_data_t.hpp"
#include "resource_info_t.hpp"
#include "data_table_entry_t.hpp"
#include "verify_image_info_t.hpp"
#include "enum_resource_entry_t.hpp"
#include "../image/thunk_data64_t.hpp"
#include "../win/delayload_info_t.hpp"
#include "dll_notification_data_t.hpp"
#include "../rtl/process_modules_t.hpp"
#include "../image/base_relocation_t.hpp"
#include "../image/resource_directory_t.hpp"
#include "../ps/system_dll_init_block_t.hpp"
#include "../image/resource_data_entry_t.hpp"
#include "../image/delayload_descriptor_t.hpp"

#include "magic/api.start.hpp"
namespace ldr
{
    // [LdrCaptureDynamicRelocationTableHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x67d2cc, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) capture_dynamic_relocation_table_header;
    
    // [LdrRelocateImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x5490ec, 0x32828 bytes
    //
    _m1(sdk::function<int32_t(void*, char*, int32_t, int32_t, int32_t)>*) relocate_image;
    
    // [LdrApplyDynamicRelocations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3b1368, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ccbdc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3acde8, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) apply_dynamic_relocations;
    
    // [LdrImageDirectoryEntryToLoadConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x73d3d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x785f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x745018, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) image_directory_entry_to_load_config;
    
    // [LdrRelocateImageWithBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9164d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5944, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914c34, 0x1fe000 bytes
    //
    _m4(sdk::function<int32_t(void*, int64_t, char*, int32_t, int32_t, int32_t)>*) relocate_image_with_bias;
    
    // [LdrAccessResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5587f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82d640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af730, 0x1fe000 bytes
    //
    _m5(sdk::function<int32_t(void*, struct image::resource_data_entry_t*, void**, uint32_t*)>*) access_resource;
    
    // [LdrEnumResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a798, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90d8f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9acf50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90c010, 0x1fe000 bytes
    //
    _m6(sdk::function<int32_t(void*, struct ldr::resource_info_t*, uint32_t, uint32_t*, struct ldr::enum_resource_entry_t*)>*) enum_resources;
    
    // [LdrFindResourceDirectory_U]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68aa34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90db80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ad220, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90c2a0, 0x1fe000 bytes
    //
    _m7(sdk::function<int32_t(void*, struct ldr::resource_info_t*, uint32_t, struct image::resource_directory_t**)>*) find_resource_directory_u;
    
    // [LdrFindResourceEx_U]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68aa50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x90dba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ad240, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x90c2c0, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) find_resource_ex_u;
    
    // [LdrFindResource_U]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5587fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82d660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af750, 0x1fe000 bytes
    //
    _m9(sdk::function<int32_t(void*, struct ldr::resource_info_t*, uint32_t, struct image::resource_data_entry_t**)>*) find_resource_u;
    
    // [LdrInitSecurityCookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x420a00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73d288, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x785db0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x744ec8, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) init_security_cookie;
    
    // [LdrIsResItemExist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa9018, 0x32828 bytes
    // ntoskrnl.exe .text:0x356c58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3573c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33bed8, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) is_res_item_exist;
    
    // [LdrLoadAlternateResourceModuleEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8e10, 0x32828 bytes
    // ntoskrnl.exe .text:0x354f40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35761c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33a1c0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) load_alternate_resource_module_ex;
    
    // [LdrProcessRelocationBlockLongLong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5491c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x916418, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9b5888, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x914b78, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) process_relocation_block_long_long;
    
    // [LdrResFallbackLangList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46c4f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f2fec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75aeb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fbcfc, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) res_fallback_lang_list;
    
    // [LdrResFindResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53482c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76fb20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b160, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x777590, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) res_find_resource;
    
    // [LdrResFindResourceDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68c338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7714a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8696f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x778ed0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) res_find_resource_directory;
    
    // [LdrResGetRCConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533370, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76f16c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x854b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x776bdc, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) res_get_rc_config;
    
    // [LdrResSearchResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46b408, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f1c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75a730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6fa920, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) res_search_resource;
    
    // [LdrRscIsTypeExist]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa9090, 0x32828 bytes
    // ntoskrnl.exe .text:0x356cd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x357b04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33bf58, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) rsc_is_type_exist;
    
    // [LdrUnloadAlternateResourceModule]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12ef1c, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b888, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356d5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37cc08, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) unload_alternate_resource_module;
    
    // [LdrUnloadAlternateResourceModuleEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12ef24, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b8a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x356d74, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37cc20, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) unload_alternate_resource_module_ex;
    
    // [LdrControlFlowGuardXfgEnabled]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0x2c4f8, 0x74648 bytes
    //
    _o2(sdk::unknown_ptr) control_flow_guard_xfg_enabled;
    
    // [LdrHotPatchNotify]
    // Ldr = [ntdll.dll]
    // => Windows 11
    // ntdll.dll .text:0xd9a10, 0x74648 bytes
    //
    _o3(sdk::unknown_ptr) hot_patch_notify;
    
    // [LdrCallEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcc990, 0x6fc38 bytes
    // ntdll.dll .text:0xad180, 0x74648 bytes
    // ntdll.dll .text:0xcc910, 0x6fc38 bytes
    //
    _o4(sdk::unknown_ptr) call_enclave;
    
    // [LdrControlFlowGuardEnforced]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x24790, 0x6fc38 bytes
    // ntdll.dll .text:0x2c530, 0x74648 bytes
    // ntdll.dll .text:0x24790, 0x6fc38 bytes
    //
    _o5(sdk::function<uint8_t()>*) control_flow_guard_enforced;
    
    // [LdrControlFlowGuardEnforcedWithExportSuppression]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x24758, 0x6fc38 bytes
    // ntdll.dll .text:0x21cb0, 0x74648 bytes
    // ntdll.dll .text:0x24758, 0x6fc38 bytes
    //
    _o6(sdk::unknown_ptr) control_flow_guard_enforced_with_export_suppression;
    
    // [LdrCreateEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcc9a0, 0x6fc38 bytes
    // ntdll.dll .text:0xd84f0, 0x74648 bytes
    // ntdll.dll .text:0xcc920, 0x6fc38 bytes
    //
    _o7(sdk::unknown_ptr) create_enclave;
    
    // [LdrDeleteEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xccab0, 0x6fc38 bytes
    // ntdll.dll .text:0xd8600, 0x74648 bytes
    // ntdll.dll .text:0xcca30, 0x6fc38 bytes
    //
    _o8(sdk::unknown_ptr) delete_enclave;
    
    // [LdrInitializeEnclave]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xccb40, 0x6fc38 bytes
    // ntdll.dll .text:0xd8690, 0x74648 bytes
    // ntdll.dll .text:0xccac0, 0x6fc38 bytes
    //
    _o9(sdk::unknown_ptr) initialize_enclave;
    
    // [LdrIsEnclaveAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xccc40, 0x6fc38 bytes
    // ntdll.dll .text:0xd87a0, 0x74648 bytes
    // ntdll.dll .text:0xccbc0, 0x6fc38 bytes
    //
    _p0(sdk::unknown_ptr) is_enclave_address;
    
    // [LdrIsModuleSxsRedirected]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xcdd00, 0x6fc38 bytes
    // ntdll.dll .text:0xd9b80, 0x74648 bytes
    // ntdll.dll .text:0xcdc80, 0x6fc38 bytes
    //
    _p1(sdk::function<uint8_t(void*)>*) is_module_sxs_redirected;
    
    // [LdrLoadEnclaveModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xccce0, 0x6fc38 bytes
    // ntdll.dll .text:0xd8840, 0x74648 bytes
    // ntdll.dll .text:0xccc60, 0x6fc38 bytes
    //
    _p2(sdk::unknown_ptr) load_enclave_module;
    
    // [LdrMapAndVerifyResourceFile]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x57910, 0x6fc38 bytes
    // ntdll.dll .text:0x2e980, 0x74648 bytes
    // ntdll.dll .text:0x57910, 0x6fc38 bytes
    //
    _p3(sdk::unknown_ptr) map_and_verify_resource_file;
    
    // [LdrUpdatePackageSearchPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdea10, 0x6fc38 bytes
    // ntdll.dll .text:0x83e40, 0x74648 bytes
    // ntdll.dll .text:0xde980, 0x6fc38 bytes
    //
    _p4(sdk::unknown_ptr) update_package_search_path;
    
    // [LdrAddDllDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x901d0, 0x67960 bytes
    // ntdll.dll .text:0x8a600, 0x6fc38 bytes
    // ntdll.dll .text:0x78400, 0x74648 bytes
    // ntdll.dll .text:0x8a7a0, 0x6fc38 bytes
    //
    _p5(sdk::unknown_ptr) add_dll_directory;
    
    // [LdrAddLoadAsDataTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x79690, 0x67960 bytes
    // ntdll.dll .text:0x72a90, 0x6fc38 bytes
    // ntdll.dll .text:0x88c0, 0x74648 bytes
    // ntdll.dll .text:0x72c30, 0x6fc38 bytes
    //
    _p6(sdk::function<int32_t(void*, wchar_t*, uint64_t, void*)>*) add_load_as_data_table;
    
    // [LdrAddRefDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1f430, 0x67960 bytes
    // ntdll.dll .text:0x33e90, 0x6fc38 bytes
    // ntdll.dll .text:0x2d3d0, 0x74648 bytes
    // ntdll.dll .text:0x33e90, 0x6fc38 bytes
    //
    _p7(sdk::function<int32_t(uint32_t, void*)>*) add_ref_dll;
    
    // [LdrAppxHandleIntegrityFailure]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd0320, 0x67960 bytes
    // ntdll.dll .text:0xcb3b0, 0x6fc38 bytes
    // ntdll.dll .text:0xd6600, 0x74648 bytes
    // ntdll.dll .text:0xcb330, 0x6fc38 bytes
    //
    _p8(sdk::unknown_ptr) appx_handle_integrity_failure;
    
    // [LdrDisableThreadCalloutsForDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f3c0, 0x67960 bytes
    // ntdll.dll .text:0x31f50, 0x6fc38 bytes
    // ntdll.dll .text:0x2de20, 0x74648 bytes
    // ntdll.dll .text:0x31f50, 0x6fc38 bytes
    //
    _p9(sdk::unknown_ptr) disable_thread_callouts_for_dll;
    
    // [LdrEnsureMrdataHeapExists]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x11e10, 0x67960 bytes
    // ntdll.dll .text:0x60a28, 0x6fc38 bytes
    // ntdll.dll .text:0x819c4, 0x74648 bytes
    // ntdll.dll .text:0x60b48, 0x6fc38 bytes
    //
    _q0(sdk::unknown_ptr) ensure_mrdata_heap_exists;
    
    // [LdrEnumerateLoadedModules]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b980, 0x67960 bytes
    // ntdll.dll .text:0x80290, 0x6fc38 bytes
    // ntdll.dll .text:0x51ca0, 0x74648 bytes
    // ntdll.dll .text:0x80430, 0x6fc38 bytes
    //
    _q1(sdk::function<int32_t(uint8_t, sdk::function<void(struct ldr::data_table_entry_t*, void*, uint8_t*)>*, void*)>*) enumerate_loaded_modules;
    
    // [LdrFastFailInLoaderCallout]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1c20, 0x67960 bytes
    // ntdll.dll .text:0x83900, 0x6fc38 bytes
    // ntdll.dll .text:0x87ab0, 0x74648 bytes
    // ntdll.dll .text:0x83aa0, 0x6fc38 bytes
    //
    _q2(sdk::unknown_ptr) fast_fail_in_loader_callout;
    
    // [LdrFatalInitError]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .rdata:0x11d3d0, 0x67960 bytes
    // ntdll.dll .rdata:0x130498, 0x6fc38 bytes
    // ntdll.dll .rdata:0x136d10, 0x74648 bytes
    // ntdll.dll .rdata:0x130798, 0x6fc38 bytes
    //
    _q3(sdk::unknown_ptr) fatal_init_error;
    
    // [LdrFindEntryForAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1dad0, 0x67960 bytes
    // ntdll.dll .text:0x6ccc0, 0x6fc38 bytes
    // ntdll.dll .text:0x8cb0, 0x74648 bytes
    // ntdll.dll .text:0x6cde0, 0x6fc38 bytes
    //
    _q4(sdk::function<int32_t(void*, struct ldr::data_table_entry_t**)>*) find_entry_for_address;
    
    // [LdrFlushAlternateResourceModules]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8ce90, 0x67960 bytes
    // ntdll.dll .text:0x88340, 0x6fc38 bytes
    // ntdll.dll .text:0x87cd0, 0x74648 bytes
    // ntdll.dll .text:0x884e0, 0x6fc38 bytes
    //
    _q5(sdk::unknown_ptr) flush_alternate_resource_modules;
    
    // [LdrForkMrdata]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd439c, 0x67960 bytes
    // ntdll.dll .text:0xd5810, 0x6fc38 bytes
    // ntdll.dll .text:0xe0bb0, 0x74648 bytes
    // ntdll.dll .text:0xd5780, 0x6fc38 bytes
    //
    _q6(sdk::unknown_ptr) fork_mrdata;
    
    // [LdrGetDllDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x93b0, 0x67960 bytes
    // ntdll.dll .text:0x7dbc0, 0x6fc38 bytes
    // ntdll.dll .text:0x81f90, 0x74648 bytes
    // ntdll.dll .text:0x7dd60, 0x6fc38 bytes
    //
    _q7(sdk::function<int32_t(nt::unicode_view*)>*) get_dll_directory;
    
    // [LdrGetDllFullName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7b380, 0x67960 bytes
    // ntdll.dll .text:0x33f90, 0x6fc38 bytes
    // ntdll.dll .text:0x2d770, 0x74648 bytes
    // ntdll.dll .text:0x33f90, 0x6fc38 bytes
    //
    _q8(sdk::function<int32_t(void*, nt::unicode_view*)>*) get_dll_full_name;
    
    // [LdrGetDllHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9f80, 0x67960 bytes
    // ntdll.dll .text:0x34730, 0x6fc38 bytes
    // ntdll.dll .text:0x2b250, 0x74648 bytes
    // ntdll.dll .text:0x34730, 0x6fc38 bytes
    //
    _q9(sdk::function<int32_t(wchar_t*, uint32_t*, nt::unicode_view*, void**)>*) get_dll_handle;
    
    // [LdrGetDllHandleByMapping]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8d00, 0x67960 bytes
    // ntdll.dll .text:0x740c0, 0x6fc38 bytes
    // ntdll.dll .text:0x2de80, 0x74648 bytes
    // ntdll.dll .text:0x74260, 0x6fc38 bytes
    //
    _r0(sdk::function<int32_t(void*, void**)>*) get_dll_handle_by_mapping;
    
    // [LdrGetDllHandleByName]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7c130, 0x67960 bytes
    // ntdll.dll .text:0x31fb0, 0x6fc38 bytes
    // ntdll.dll .text:0x77190, 0x74648 bytes
    // ntdll.dll .text:0x31fb0, 0x6fc38 bytes
    //
    _r1(sdk::function<int32_t(nt::unicode_view*, nt::unicode_view*, void**)>*) get_dll_handle_by_name;
    
    // [LdrGetDllHandleEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9fb0, 0x67960 bytes
    // ntdll.dll .text:0x347b0, 0x6fc38 bytes
    // ntdll.dll .text:0x2a3b0, 0x74648 bytes
    // ntdll.dll .text:0x347b0, 0x6fc38 bytes
    //
    _r2(sdk::function<int32_t(uint32_t, wchar_t*, uint32_t*, nt::unicode_view*, void**)>*) get_dll_handle_ex;
    
    // [LdrGetDllPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x2ffb0, 0x67960 bytes
    // ntdll.dll .text:0x62680, 0x6fc38 bytes
    // ntdll.dll .text:0x31c60, 0x74648 bytes
    // ntdll.dll .text:0x627a0, 0x6fc38 bytes
    //
    _r3(sdk::unknown_ptr) get_dll_path;
    
    // [LdrGetFailureData]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1c50, 0x67960 bytes
    // ntdll.dll .text:0xcdcf0, 0x6fc38 bytes
    // ntdll.dll .text:0xd99f0, 0x74648 bytes
    // ntdll.dll .text:0xcdc70, 0x6fc38 bytes
    //
    _r4(sdk::function<struct ldr::failure_data_t*()>*) get_failure_data;
    
    // [LdrGetFileNameFromLoadAsDataTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdd3b0, 0x67960 bytes
    // ntdll.dll .text:0xe0d10, 0x6fc38 bytes
    // ntdll.dll .text:0xeb880, 0x74648 bytes
    // ntdll.dll .text:0xe0c80, 0x6fc38 bytes
    //
    _r5(sdk::function<int32_t(void*, void**)>*) get_file_name_from_load_as_data_table;
    
    // [LdrGetKnownDllSectionHandle]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84260, 0x67960 bytes
    // ntdll.dll .text:0x83560, 0x6fc38 bytes
    // ntdll.dll .text:0x868e0, 0x74648 bytes
    // ntdll.dll .text:0x83700, 0x6fc38 bytes
    //
    _r6(sdk::function<int32_t(const wchar_t*, uint8_t, void**)>*) get_known_dll_section_handle;
    
    // [LdrGetProcedureAddress]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6ea0, 0x67960 bytes
    // ntdll.dll .text:0x812b0, 0x6fc38 bytes
    // ntdll.dll .text:0x842c0, 0x74648 bytes
    // ntdll.dll .text:0x81450, 0x6fc38 bytes
    //
    _r7(sdk::function<int32_t(void*, nt::ascii_view*, uint32_t, void**)>*) get_procedure_address;
    
    // [LdrGetProcedureAddressEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x73b0, 0x67960 bytes
    // ntdll.dll .text:0x60a00, 0x6fc38 bytes
    // ntdll.dll .text:0x79780, 0x74648 bytes
    // ntdll.dll .text:0x60b20, 0x6fc38 bytes
    //
    _r8(sdk::function<int32_t(void*, nt::ascii_view*, uint32_t, void**, uint32_t)>*) get_procedure_address_ex;
    
    // [LdrGetProcedureAddressForCaller]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x46960, 0x67960 bytes
    // ntdll.dll .text:0x20df0, 0x6fc38 bytes
    // ntdll.dll .text:0x22190, 0x74648 bytes
    // ntdll.dll .text:0x20df0, 0x6fc38 bytes
    //
    _r9(sdk::function<int32_t(void*, nt::ascii_view*, uint32_t, void**, uint32_t, void**)>*) get_procedure_address_for_caller;
    
    // [LdrInitShimEngineDynamic]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd3290, 0x67960 bytes
    // ntdll.dll .text:0xd02d0, 0x6fc38 bytes
    // ntdll.dll .text:0xdcf00, 0x74648 bytes
    // ntdll.dll .text:0xd0250, 0x6fc38 bytes
    //
    _s0(sdk::unknown_ptr) init_shim_engine_dynamic;
    
    // [LdrInitState]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x1540f0, 0x67960 bytes
    // ntdll.dll .data:0x16b698, 0x6fc38 bytes
    // ntdll.dll .data:0x185220, 0x74648 bytes
    // ntdll.dll .data:0x16c688, 0x6fc38 bytes
    //
    _s1(sdk::unknown_ptr) init_state;
    
    // [LdrInitializeMrdata]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9634c, 0x67960 bytes
    // ntdll.dll .text:0xd5844, 0x6fc38 bytes
    // ntdll.dll .text:0xad940, 0x74648 bytes
    // ntdll.dll .text:0xd57b4, 0x6fc38 bytes
    //
    _s2(sdk::unknown_ptr) initialize_mrdata;
    
    // [LdrInitializeThunk]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x79f60, 0x67960 bytes
    // ntdll.dll .text:0x745c0, 0x6fc38 bytes
    // ntdll.dll .text:0x73e10, 0x74648 bytes
    // ntdll.dll .text:0x74760, 0x6fc38 bytes
    //
    _s3(sdk::function<void(nt::context*, void*)>*) initialize_thunk;
    
    // [LdrLoadAlternateResourceModule]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x86500, 0x67960 bytes
    // ntdll.dll .text:0x7c850, 0x6fc38 bytes
    // ntdll.dll .text:0x84030, 0x74648 bytes
    // ntdll.dll .text:0x7c9f0, 0x6fc38 bytes
    //
    _s4(sdk::unknown_ptr) load_alternate_resource_module;
    
    // [LdrLoadDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x9e70, 0x67960 bytes
    // ntdll.dll .text:0x34380, 0x6fc38 bytes
    // ntdll.dll .text:0x2a860, 0x74648 bytes
    // ntdll.dll .text:0x34380, 0x6fc38 bytes
    //
    _s5(sdk::function<int32_t(wchar_t*, uint32_t*, nt::unicode_view*, void**)>*) load_dll;
    
    // [LdrLockLoaderLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x16630, 0x67960 bytes
    // ntdll.dll .text:0x7be30, 0x6fc38 bytes
    // ntdll.dll .text:0x51150, 0x74648 bytes
    // ntdll.dll .text:0x7bfd0, 0x6fc38 bytes
    //
    _s6(sdk::function<int32_t(uint32_t, uint32_t*, void**)>*) lock_loader_lock;
    
    // [LdrLogNewDataDllLoad]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x798bc, 0x67960 bytes
    // ntdll.dll .text:0x72cb0, 0x6fc38 bytes
    // ntdll.dll .text:0x8c28, 0x74648 bytes
    // ntdll.dll .text:0x72e50, 0x6fc38 bytes
    //
    _s7(sdk::unknown_ptr) log_new_data_dll_load;
    
    // [LdrProcessRelocationBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdde30, 0x67960 bytes
    // ntdll.dll .text:0xe3570, 0x6fc38 bytes
    // ntdll.dll .text:0xee4c0, 0x74648 bytes
    // ntdll.dll .text:0xe34e0, 0x6fc38 bytes
    //
    _s8(sdk::function<__unaligned struct image::base_relocation_t*(uint64_t, uint32_t, wchar_t*, int64_t)>*) process_relocation_block;
    
    // [LdrProcessRelocationBlockEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdde60, 0x67960 bytes
    // ntdll.dll .text:0xe35a0, 0x6fc38 bytes
    // ntdll.dll .text:0xee4f0, 0x74648 bytes
    // ntdll.dll .text:0xe3510, 0x6fc38 bytes
    //
    _s9(sdk::unknown_ptr) process_relocation_block_ex;
    
    // [LdrProtectMrdata]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x304cc, 0x67960 bytes
    // ntdll.dll .text:0x60b38, 0x6fc38 bytes
    // ntdll.dll .text:0x32f60, 0x74648 bytes
    // ntdll.dll .text:0x60c58, 0x6fc38 bytes
    //
    _t0(sdk::unknown_ptr) protect_mrdata;
    
    // [LdrQueryImageFileExecutionOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7fee0, 0x67960 bytes
    // ntdll.dll .text:0x79c20, 0x6fc38 bytes
    // ntdll.dll .text:0x7d7e0, 0x74648 bytes
    // ntdll.dll .text:0x79dc0, 0x6fc38 bytes
    //
    _t1(sdk::function<int32_t(nt::unicode_view*, const wchar_t*, uint32_t, void*, uint32_t, uint32_t*)>*) query_image_file_execution_options;
    
    // [LdrQueryInLoadOrderModuleList]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70be0, 0x67960 bytes
    // ntdll.dll .text:0x1b60, 0x6fc38 bytes
    // ntdll.dll .text:0x15b0, 0x74648 bytes
    // ntdll.dll .text:0x1b60, 0x6fc38 bytes
    //
    _t2(sdk::unknown_ptr) query_in_load_order_module_list;
    
    // [LdrQueryInLoadOrderModuleList32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70c10, 0x67960 bytes
    // ntdll.dll .text:0xcdd40, 0x6fc38 bytes
    // ntdll.dll .text:0x2c30, 0x74648 bytes
    // ntdll.dll .text:0xcdcc0, 0x6fc38 bytes
    //
    _t3(sdk::unknown_ptr) query_in_load_order_module_list32;
    
    // [LdrQueryModuleInfoFromLdrEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x709c0, 0x67960 bytes
    // ntdll.dll .text:0x1220, 0x6fc38 bytes
    // ntdll.dll .text:0x1130, 0x74648 bytes
    // ntdll.dll .text:0x1220, 0x6fc38 bytes
    //
    _t4(sdk::unknown_ptr) query_module_info_from_ldr_entry;
    
    // [LdrQueryModuleInfoFromLdrEntry32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70020, 0x67960 bytes
    // ntdll.dll .text:0xcddf0, 0x6fc38 bytes
    // ntdll.dll .text:0xd9bc0, 0x74648 bytes
    // ntdll.dll .text:0xcdd70, 0x6fc38 bytes
    //
    _t5(sdk::unknown_ptr) query_module_info_from_ldr_entry32;
    
    // [LdrQueryModuleInfoLocalLoaderLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71050, 0x67960 bytes
    // ntdll.dll .text:0x1bb0, 0x6fc38 bytes
    // ntdll.dll .text:0x2d50, 0x74648 bytes
    // ntdll.dll .text:0x1bb0, 0x6fc38 bytes
    //
    _t6(sdk::unknown_ptr) query_module_info_local_loader_lock;
    
    // [LdrQueryModuleInfoLocalLoaderLock32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0x89160, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _t7(sdk::unknown_ptr) query_module_info_local_loader_lock32;
    
    // [LdrQueryModuleInfoLocalLoaderUnlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x71030, 0x67960 bytes
    // ntdll.dll .text:0x1b90, 0x6fc38 bytes
    // ntdll.dll .text:0x2cf0, 0x74648 bytes
    // ntdll.dll .text:0x1b90, 0x6fc38 bytes
    //
    _t8(sdk::unknown_ptr) query_module_info_local_loader_unlock;
    
    // [LdrQueryModuleInfoLocalLoaderUnlock32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0x89160, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _t9(sdk::unknown_ptr) query_module_info_local_loader_unlock32;
    
    // [LdrQueryModuleServiceTags]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1c60, 0x67960 bytes
    // ntdll.dll .text:0xcdef0, 0x6fc38 bytes
    // ntdll.dll .text:0xd9cc0, 0x74648 bytes
    // ntdll.dll .text:0xcde70, 0x6fc38 bytes
    //
    _u0(sdk::function<int32_t(void*, uint32_t*, uint32_t*)>*) query_module_service_tags;
    
    // [LdrQueryNextListEntry]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70920, 0x67960 bytes
    // ntdll.dll .text:0x1200, 0x6fc38 bytes
    // ntdll.dll .text:0x1110, 0x74648 bytes
    // ntdll.dll .text:0x1200, 0x6fc38 bytes
    //
    _u1(sdk::unknown_ptr) query_next_list_entry;
    
    // [LdrQueryNextListEntry32]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70410, 0x67960 bytes
    // ntdll.dll .text:0xcdfa0, 0x6fc38 bytes
    // ntdll.dll .text:0xd9d70, 0x74648 bytes
    // ntdll.dll .text:0xcdf20, 0x6fc38 bytes
    //
    _u2(sdk::unknown_ptr) query_next_list_entry32;
    
    // [LdrQueryOptionalDelayLoadedAPI]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd22f0, 0x67960 bytes
    // ntdll.dll .text:0xce6f0, 0x6fc38 bytes
    // ntdll.dll .text:0xda8e0, 0x74648 bytes
    // ntdll.dll .text:0xce670, 0x6fc38 bytes
    //
    _u3(sdk::unknown_ptr) query_optional_delay_loaded_api;
    
    // [LdrQueryProcessModuleInformation]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x6fff0, 0x67960 bytes
    // ntdll.dll .text:0x1430, 0x6fc38 bytes
    // ntdll.dll .text:0xd9db0, 0x74648 bytes
    // ntdll.dll .text:0x1430, 0x6fc38 bytes
    //
    _u4(sdk::function<int32_t(struct rtl::process_modules_t*, uint32_t, uint32_t*)>*) query_process_module_information;
    
    // [LdrQueryProcessModuleInformationEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x70630, 0x67960 bytes
    // ntdll.dll .text:0x1458, 0x6fc38 bytes
    // ntdll.dll .text:0x1614, 0x74648 bytes
    // ntdll.dll .text:0x1458, 0x6fc38 bytes
    //
    _u5(sdk::unknown_ptr) query_process_module_information_ex;
    
    // [LdrQueryProcessModuleInformationEx2]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd1d04, 0x67960 bytes
    // ntdll.dll .text:0xcdfd8, 0x6fc38 bytes
    // ntdll.dll .text:0xd9dd8, 0x74648 bytes
    // ntdll.dll .text:0xcdf58, 0x6fc38 bytes
    //
    _u6(sdk::unknown_ptr) query_process_module_information_ex2;
    
    // [LdrRegisterDllNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x87b60, 0x67960 bytes
    // ntdll.dll .text:0x83ad0, 0x6fc38 bytes
    // ntdll.dll .text:0x1f00, 0x74648 bytes
    // ntdll.dll .text:0x83c70, 0x6fc38 bytes
    //
    _u7(sdk::function<int32_t(uint32_t, sdk::function<void(uint32_t, union ldr::dll_notification_data_t*, void*)>*, void*, void**)>*) register_dll_notification;
    
    // [LdrRemoveDllDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xdb460, 0x67960 bytes
    // ntdll.dll .text:0x8ad10, 0x6fc38 bytes
    // ntdll.dll .text:0x78610, 0x74648 bytes
    // ntdll.dll .text:0x8aeb0, 0x6fc38 bytes
    //
    _u8(sdk::unknown_ptr) remove_dll_directory;
    
    // [LdrRemoveLoadAsDataTable]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x798e0, 0x67960 bytes
    // ntdll.dll .text:0x73280, 0x6fc38 bytes
    // ntdll.dll .text:0x8560, 0x74648 bytes
    // ntdll.dll .text:0x73420, 0x6fc38 bytes
    //
    _u9(sdk::function<int32_t(void*, void**, uint64_t*, uint32_t)>*) remove_load_as_data_table;
    
    // [LdrResRelease]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x89350, 0x67960 bytes
    // ntdll.dll .text:0x88df0, 0x6fc38 bytes
    // ntdll.dll .text:0xeecd0, 0x74648 bytes
    // ntdll.dll .text:0x88f90, 0x6fc38 bytes
    //
    _v0(sdk::unknown_ptr) res_release;
    
    // [LdrResolveDelayLoadedAPI]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x465e0, 0x67960 bytes
    // ntdll.dll .text:0x340d0, 0x6fc38 bytes
    // ntdll.dll .text:0x2c020, 0x74648 bytes
    // ntdll.dll .text:0x340d0, 0x6fc38 bytes
    //
    _v1(sdk::function<void*(void*, const struct image::delayload_descriptor_t*, sdk::function<void*(uint32_t, struct win::delayload_info_t*)>*, sdk::function<void*(const char*, const char*)>*, struct image::thunk_data64_t*, uint32_t)>*) resolve_delay_loaded_api;
    
    // [LdrResolveDelayLoadsFromDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd23d0, 0x67960 bytes
    // ntdll.dll .text:0xce7b0, 0x6fc38 bytes
    // ntdll.dll .text:0xda9a0, 0x74648 bytes
    // ntdll.dll .text:0xce730, 0x6fc38 bytes
    //
    _v2(sdk::function<int32_t(void*, const char*, uint32_t)>*) resolve_delay_loads_from_dll;
    
    // [LdrSetAppCompatDllRedirectionCallback]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85b80, 0x67960 bytes
    // ntdll.dll .text:0x83550, 0x6fc38 bytes
    // ntdll.dll .text:0xda200, 0x74648 bytes
    // ntdll.dll .text:0x836f0, 0x6fc38 bytes
    //
    _v3(sdk::unknown_ptr) set_app_compat_dll_redirection_callback;
    
    // [LdrSetDefaultDllDirectories]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x751f0, 0x67960 bytes
    // ntdll.dll .text:0x7e8a0, 0x6fc38 bytes
    // ntdll.dll .text:0x789b0, 0x74648 bytes
    // ntdll.dll .text:0x7ea40, 0x6fc38 bytes
    //
    _v4(sdk::function<int32_t(uint32_t)>*) set_default_dll_directories;
    
    // [LdrSetDllDirectory]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x1540, 0x67960 bytes
    // ntdll.dll .text:0x7e8e0, 0x6fc38 bytes
    // ntdll.dll .text:0x78880, 0x74648 bytes
    // ntdll.dll .text:0x7ea80, 0x6fc38 bytes
    //
    _v5(sdk::function<int32_t(nt::unicode_view*)>*) set_dll_directory;
    
    // [LdrSetDllManifestProber]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x85e90, 0x67960 bytes
    // ntdll.dll .text:0x830a0, 0x6fc38 bytes
    // ntdll.dll .text:0x86320, 0x74648 bytes
    // ntdll.dll .text:0x83240, 0x6fc38 bytes
    //
    _v6(sdk::unknown_ptr) set_dll_manifest_prober;
    
    // [LdrSetImplicitPathOptions]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd20a0, 0x67960 bytes
    // ntdll.dll .text:0xce390, 0x6fc38 bytes
    // ntdll.dll .text:0xda210, 0x74648 bytes
    // ntdll.dll .text:0xce310, 0x6fc38 bytes
    //
    _v7(sdk::function<int32_t(uint32_t)>*) set_implicit_path_options;
    
    // [LdrSetMUICacheType]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8dd60, 0x67960 bytes
    // ntdll.dll .text:0x8aed0, 0x6fc38 bytes
    // ntdll.dll .text:0x8e2e0, 0x74648 bytes
    // ntdll.dll .text:0x8b070, 0x6fc38 bytes
    //
    _v8(sdk::unknown_ptr) set_mui_cache_type;
    
    // [LdrShutdownProcess]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x7f20, 0x67960 bytes
    // ntdll.dll .text:0x63b80, 0x6fc38 bytes
    // ntdll.dll .text:0x515c0, 0x74648 bytes
    // ntdll.dll .text:0x63ca0, 0x6fc38 bytes
    //
    _v9(sdk::function<int32_t()>*) shutdown_process;
    
    // [LdrShutdownThread]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x278c0, 0x67960 bytes
    // ntdll.dll .text:0x35570, 0x6fc38 bytes
    // ntdll.dll .text:0x29470, 0x74648 bytes
    // ntdll.dll .text:0x35570, 0x6fc38 bytes
    //
    _w0(sdk::function<int32_t()>*) shutdown_thread;
    
    // [LdrStandardizeSystemPath]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x84e50, 0x67960 bytes
    // ntdll.dll .text:0x7ec40, 0x6fc38 bytes
    // ntdll.dll .text:0x9df90, 0x74648 bytes
    // ntdll.dll .text:0x7ede0, 0x6fc38 bytes
    //
    _w1(sdk::function<nt::unicode_view*(nt::unicode_view*)>*) standardize_system_path;
    
    // [LdrSystemDllInitBlock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .mrdata:0x1642a0, 0x67960 bytes
    // ntdll.dll .mrdata:0x17f2d0, 0x6fc38 bytes
    // ntdll.dll .mrdata:0x199300, 0x74648 bytes
    // ntdll.dll .mrdata:0x1802d0, 0x6fc38 bytes
    //
    _w2(sdk::function<struct ps::system_dll_init_block_t*()>*) system_dll_init_block;
    
    // [LdrUnloadDll]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x4edb0, 0x67960 bytes
    // ntdll.dll .text:0x33940, 0x6fc38 bytes
    // ntdll.dll .text:0x2d570, 0x74648 bytes
    // ntdll.dll .text:0x33940, 0x6fc38 bytes
    //
    _w3(sdk::function<int32_t(void*)>*) unload_dll;
    
    // [LdrUnlockLoaderLock]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x13350, 0x67960 bytes
    // ntdll.dll .text:0x7ccf0, 0x6fc38 bytes
    // ntdll.dll .text:0x51050, 0x74648 bytes
    // ntdll.dll .text:0x7ce90, 0x6fc38 bytes
    //
    _w4(sdk::function<int32_t(uint32_t, void*)>*) unlock_loader_lock;
    
    // [LdrUnregisterDllNotification]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd2110, 0x67960 bytes
    // ntdll.dll .text:0xce400, 0x6fc38 bytes
    // ntdll.dll .text:0xda280, 0x74648 bytes
    // ntdll.dll .text:0xce380, 0x6fc38 bytes
    //
    _w5(sdk::function<int32_t(void*)>*) unregister_dll_notification;
    
    // [LdrVerifyImageMatchesChecksum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xd21c0, 0x67960 bytes
    // ntdll.dll .text:0xce4b0, 0x6fc38 bytes
    // ntdll.dll .text:0xda330, 0x74648 bytes
    // ntdll.dll .text:0xce430, 0x6fc38 bytes
    //
    _w6(sdk::function<int32_t(void*, sdk::function<void(void*, char*)>*, void*, wchar_t*)>*) verify_image_matches_checksum;
    
    // [LdrVerifyImageMatchesChecksumEx]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0x8b9a0, 0x67960 bytes
    // ntdll.dll .text:0x89a80, 0x6fc38 bytes
    // ntdll.dll .text:0x8d060, 0x74648 bytes
    // ntdll.dll .text:0x89c20, 0x6fc38 bytes
    //
    _w7(sdk::function<int32_t(void*, struct ldr::verify_image_info_t*)>*) verify_image_matches_checksum_ex;
    
    // [LdrVerifyMappedImageMatchesChecksum]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .text:0xec308, 0x67960 bytes
    // ntdll.dll .text:0xf534c, 0x6fc38 bytes
    // ntdll.dll .text:0x101470, 0x74648 bytes
    // ntdll.dll .text:0xf52fc, 0x6fc38 bytes
    //
    _w8(sdk::function<uint8_t(void*, uint64_t, uint32_t)>*) verify_mapped_image_matches_checksum;
};
#include "magic/api.end.hpp"
