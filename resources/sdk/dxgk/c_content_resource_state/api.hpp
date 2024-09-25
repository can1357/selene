#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_content_resource_state
{
    // [ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6b790, 0x762b0 bytes
    // dxgkrnl.sys .text:0x813d4, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b920, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) apply_present_attribute_metadata_to_update_token;
    
    // [CancelPendingUpdates@CContentResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1abc0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20670, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b240, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) cancel_pending_updates;
    
    // [CommitPendingUpdates@CContentResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x698e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f810, 0x84380 bytes
    // dxgkrnl.sys .text:0x69a70, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) commit_pending_updates;
    
    // [CreateUpdateTokens@CContentResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bb74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81534, 0x84380 bytes
    // dxgkrnl.sys .text:0x6bd04, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) create_update_tokens;
    
    // [??1CContentResourceState@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6b754, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81398, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b8e4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [Remarshal@CContentResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a850, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80a90, 0x84380 bytes
    // dxgkrnl.sys .text:0x6a9e0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) remarshal;
    
    // [Remove@CContentResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a8a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80ab0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6aa30, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) remove;
    
    // [SetBoundBuffer@CContentResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bcb8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81634, 0x84380 bytes
    // dxgkrnl.sys .text:0x6be48, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) set_bound_buffer;
    
    // [SetBoundPropertySet@CContentResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bd14, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81690, 0x84380 bytes
    // dxgkrnl.sys .text:0x6bea4, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) set_bound_property_set;
};
#include "magic/api.end.hpp"
