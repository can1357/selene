#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpnpresentpath
{
    // [??0DMMVIDPNPRESENTPATH@@QEAA@AEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x5abc, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [IsVidPnVirtualRefreshRateMatch@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1e0234, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) is_vid_pn_virtual_refresh_rate_match;
    
    // [GetDisplayModeFromPath@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x13a978, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2098, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13c5a4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_display_mode_from_path;
    
    // [GetTargetModeRefreshRate@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e42ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8ca0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e401c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_target_mode_refresh_rate;
    
    // [IsPathSupportVirtualMode@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b2e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x119c70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0xebb48, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) is_path_support_virtual_mode;
    
    // [IsVidPnPathSyncLockMatch@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e432c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8d9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e409c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) is_vid_pn_path_sync_lock_match;
    
    // [SetDriverGammaRamp@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x129180, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x163fcc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdfe40, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) set_driver_gamma_ramp;
    
    // [_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1017e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19c024, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10d7b0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) set_is_support_set_target_path_properties;
    
    // [SetTargetAnalogCopyProtection@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e44c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a903c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4230, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) set_target_analog_copy_protection;
    
    // [SetTargetContentType@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e4680, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a91b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e43f0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) set_target_content_type;
    
    // [SetTargetGamma@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e4800, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16404c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e4570, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) set_target_gamma;
    
    // [UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x129200, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16413c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdfec0, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) update_active_vid_pn_present_path;
    
    // [UpdateGammaRamp@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x12b26c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x164774, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127ee0, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) update_gamma_ramp;
    
    // [??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x52c4, 0x60098 bytes
    // dxgkrnl.sys .text:0x12a90, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6a068, 0x84380 bytes
    // dxgkrnl.sys .text:0x13320, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) construct_instance_;
    
    // [??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5594, 0x60098 bytes
    // dxgkrnl.sys .text:0x3634, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa14c, 0x84380 bytes
    // dxgkrnl.sys .text:0x49d4, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) construct_instance__;
    
    // [??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@QEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x50a0, 0x60098 bytes
    // dxgkrnl.sys .text:0x92dc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c6c0, 0x84380 bytes
    // dxgkrnl.sys .text:0xa1b4, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) construct_instance___;
    
    // [??1DMMVIDPNPRESENTPATH@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5cac, 0x60098 bytes
    // dxgkrnl.sys .text:0x37d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x9d44, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b74, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) destroy_instance;
    
    // [DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5848, 0x60098 bytes
    // dxgkrnl.sys .text:0x63a8, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa384, 0x84380 bytes
    // dxgkrnl.sys .text:0x7758, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) do_source_target_resolutions_match;
    
    // [GetContentRotationHw@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b640, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12953c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x164624, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe01fc, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) get_content_rotation_hw;
    
    // [GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x336bc, 0x60098 bytes
    // dxgkrnl.sys .text:0x5a7cc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6a588, 0x84380 bytes
    // dxgkrnl.sys .text:0x5a95c, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) get_macro_vision_trigger_bits;
    
    // [GetRotationSupport@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5568, 0x60098 bytes
    // dxgkrnl.sys .text:0xab60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5004, 0x84380 bytes
    // dxgkrnl.sys .text:0x253c, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) get_rotation_support;
    
    // [GetScalingSupport@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x553c, 0x60098 bytes
    // dxgkrnl.sys .text:0xab90, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5034, 0x84380 bytes
    // dxgkrnl.sys .text:0x256c, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) get_scaling_support;
    
    // [IsConstructed@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3080, 0x60098 bytes
    // dxgkrnl.sys .text:0x17a00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c190, 0x84380 bytes
    // dxgkrnl.sys .text:0x18190, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) is_constructed;
    
    // [IsCopyProtectionSchemeSupported@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5c44, 0x60098 bytes
    // dxgkrnl.sys .text:0x12d18, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f2bc, 0x84380 bytes
    // dxgkrnl.sys .text:0x135a8, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) is_copy_protection_scheme_supported;
    
    // [IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b3e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e46c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19bed8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a49c, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) is_driver_aspect_ratio_centered_max_supported;
    
    // [IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b3e8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e4c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19bf34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a4f8, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) is_driver_custom_scaling_supported;
    
    // [IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b364, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e3d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19c354, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a400, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) is_driver_support_path_independent_rotation;
    
    // [IsFunctional@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5200, 0x60098 bytes
    // dxgkrnl.sys .text:0xa9b4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4e28, 0x84380 bytes
    // dxgkrnl.sys .text:0x261c, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) is_functional;
    
    // [IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xcf28, 0x60098 bytes
    // dxgkrnl.sys .text:0x9e1c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d88, 0x84380 bytes
    // dxgkrnl.sys .text:0x30d4, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) is_functional_content_rotation_type;
    
    // [IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5a18, 0x60098 bytes
    // dxgkrnl.sys .text:0x6544, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb014, 0x84380 bytes
    // dxgkrnl.sys .text:0x78f4, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) is_functional_content_scaling_type;
    
    // [IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b3f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10de70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a6338, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x119ea0, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) is_miniport_driver_ccd_support;
    
    // [IsPrimaryClonePath@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1ab58c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x12d834, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8d10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12a51c, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) is_primary_clone_path;
    
    // [IsScalingTransformationSupported@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x59b0, 0x60098 bytes
    // dxgkrnl.sys .text:0x64d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xafb0, 0x84380 bytes
    // dxgkrnl.sys .text:0x7884, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) is_scaling_transformation_supported;
    
    // [IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5930, 0x60098 bytes
    // dxgkrnl.sys .text:0x3874, 0x762b0 bytes
    // dxgkrnl.sys .text:0x9b7c, 0x84380 bytes
    // dxgkrnl.sys .text:0x4c14, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) is_source_and_target_pinned;
    
    // [IsValidContentScaling@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x57fc, 0x60098 bytes
    // dxgkrnl.sys .text:0x6210, 0x762b0 bytes
    // dxgkrnl.sys .text:0xaf5c, 0x84380 bytes
    // dxgkrnl.sys .text:0x75c0, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) is_valid_content_scaling;
    
    // [IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b674, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1303ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dbdd8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xdd8e0, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) is_vid_pn_path_mode_match;
    
    // [PinContentRotation@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5a44, 0x60098 bytes
    // dxgkrnl.sys .text:0xaa80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4f84, 0x84380 bytes
    // dxgkrnl.sys .text:0x259c, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) pin_content_rotation;
    
    // [PinContentScaling@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5758, 0x60098 bytes
    // dxgkrnl.sys .text:0x6164, 0x762b0 bytes
    // dxgkrnl.sys .text:0xaea4, 0x84380 bytes
    // dxgkrnl.sys .text:0x7514, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) pin_content_scaling;
    
    // [Serialize@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b55c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x129578, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x164658, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xe0238, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) serialize;
    
    // [SerializeFunctionalPath@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b1e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13a494, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8f08, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13b994, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) serialize_functional_path;
    
    // [SetConstructionStatus@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12b30, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a860, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20310, 0x84380 bytes
    // dxgkrnl.sys .text:0x1aee0, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) set_construction_status;
    
    // [SetContentType@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5c18, 0x60098 bytes
    // dxgkrnl.sys .text:0x12c94, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6979c, 0x84380 bytes
    // dxgkrnl.sys .text:0x13524, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) set_content_type;
    
    // [SetCopyProtectionScheme@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5c6c, 0x60098 bytes
    // dxgkrnl.sys .text:0x12cc8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f264, 0x84380 bytes
    // dxgkrnl.sys .text:0x13558, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) set_copy_protection_scheme;
    
    // [SetGammaRamp@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7b44c, 0x60098 bytes
    // dxgkrnl.sys .text:0xae1c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2d00, 0x84380 bytes
    // dxgkrnl.sys .text:0xad84, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) set_gamma_ramp;
    
    // [SetImportanceOrdinal@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x56e0, 0x60098 bytes
    // dxgkrnl.sys .text:0x12c68, 0x762b0 bytes
    // dxgkrnl.sys .text:0x697fc, 0x84380 bytes
    // dxgkrnl.sys .text:0x134f8, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) set_importance_ordinal;
    
    // [SetRotationSupport@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x54b4, 0x60098 bytes
    // dxgkrnl.sys .text:0x6264, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa080, 0x84380 bytes
    // dxgkrnl.sys .text:0x7614, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) set_rotation_support;
    
    // [SetScalingSupport@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x54f0, 0x60098 bytes
    // dxgkrnl.sys .text:0x6114, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa0c8, 0x84380 bytes
    // dxgkrnl.sys .text:0x74c4, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) set_scaling_support;
    
    // [UnpinContentRotation@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5710, 0x60098 bytes
    // dxgkrnl.sys .text:0x19b18, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f1a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a26c, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) unpin_content_rotation;
    
    // [UnpinContentScaling@DMMVIDPNPRESENTPATH]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5734, 0x60098 bytes
    // dxgkrnl.sys .text:0x6584, 0x762b0 bytes
    // dxgkrnl.sys .text:0x67fc, 0x84380 bytes
    // dxgkrnl.sys .text:0x7934, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) unpin_content_scaling;
};
#include "magic/api.end.hpp"
