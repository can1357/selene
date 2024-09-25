#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace bapdp
{
    // [BapdpProcessBCDCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb23bc8, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) process_bcd_cache;
    
    // [BapdpProcessSiData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe INIT:0x795ecc, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) process_si_data;
    
    // [BapdpProcessSpacesBootInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3a9840, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) process_spaces_boot_information;
    
    // [BapdpKsrCancelScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5abf60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f09b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5abde0, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) ksr_cancel_scenario;
    
    // [BapdpKsrComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5abfb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f0a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5abe30, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) ksr_complete;
    
    // [BapdpKsrCompleteScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ac000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f0a50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5abe80, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) ksr_complete_scenario;
    
    // [BapdpKsrCompleteScenarioPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ac040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f0a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5abec0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) ksr_complete_scenario_phase0;
    
    // [BapdpKsrInitiateScenarioPhase0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ac080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f0ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5abf00, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) ksr_initiate_scenario_phase0;
    
    // [BapdpKsrpInitiateScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ac0d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f0b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5abf50, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) ksrp_initiate_scenario;
    
    // [BapdpMarshallBootDataToRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3af484, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9678, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aaedc, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) marshall_boot_data_to_registry;
    
    // [BapdpProcessVsmKeyBlobs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa43574, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2405c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d90c, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) process_vsm_key_blobs;
    
    // [BapdpRegisterWbclData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa43788, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb23f44, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3db20, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) register_wbcl_data;
    
    // [BapdpParseEventParts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1309e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a3540, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9d8c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397d2c, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) parse_event_parts;
    
    // [BapdpProcessBitlockerStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x795e00, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa434a4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb23d9c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d83c, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) process_bitlocker_status;
    
    // [BapdpProcessBootMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x796388, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa431a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb23754, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d540, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) process_boot_metadata;
    
    // [BapdpProcessEDrvHintInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x795ab8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42f94, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2354c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d32c, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) process_e_drv_hint_info;
    
    // [BapdpProcessEtwEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a6f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af368, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9908, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aadc0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) process_etw_events;
    
    // [BapdpProcessFwUpdateResults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x795b40, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa43024, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb235dc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d3bc, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) process_fw_update_results;
    
    // [BapdpProcessHSTIResults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x795bc8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa43254, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb23e70, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d5ec, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) process_hsti_results;
    
    // [BapdpProcessResumeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x795d34, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa433d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb23cc8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d76c, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) process_resume_information;
    
    // [BapdpProcessWmdResults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x795c50, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa430b4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2366c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3d44c, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) process_wmd_results;
    
    // [BapdpQueryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x795f98, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4389c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb24270, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3dc34, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) query_data;
    
    // [BapdpRecordIumStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7962c4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa43c14, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb23990, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3dfac, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) record_ium_status;
    
    // [BapdpRegisterBitlockerStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x796060, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa43978, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb22914, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3dd10, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) register_bitlocker_status;
    
    // [BapdpRegisterEDrvHintInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7be2d4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa92c48, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb835d8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91e2c, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) register_e_drv_hint_info;
    
    // [BapdpRegisterFwUpdateResults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7be424, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa92db0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb83740, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa91f94, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) register_fw_update_results;
    
    // [BapdpRegisterResumeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x796198, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa43acc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb227cc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3de64, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) register_resume_information;
    
    // [BapdpRegisterWmdResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7be614, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa92fc0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb83950, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa921a4, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) register_wmd_result;
    
    // [BapdpWriteEventDataToRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2ee8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9979e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74e5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994b24, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) write_event_data_to_registry;
};
#include "magic/api.end.hpp"
