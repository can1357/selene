#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::display_source
{
    // [GetPlaneAllocationUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x2c1b68, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_plane_allocation_unsafe;
    
    // [GetAllocationsForAllPlanesUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20d84c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20d9ec, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_allocations_for_all_planes_unsafe;
    
    // [GetDDIEnabledPlanesUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20de60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20e000, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_ddi_enabled_planes_unsafe;
    
    // [CheckSessionOwnership@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd9e54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1634d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x131034, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) check_session_ownership;
    
    // [ClearAllDisplayState@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147228, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d7ebc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b258, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) clear_all_display_state;
    
    // [ClearAllQueryStateUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147638, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d8270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b668, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) clear_all_query_state_unsafe;
    
    // [ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20ba84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bfc84, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20bc24, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) clear_query_state_for_plane_unsafe;
    
    // [ClearQueryStateForPostCompositionUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20bae8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bfd14, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20bc88, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) clear_query_state_for_post_composition_unsafe;
    
    // [CreateNewPlaneConfig@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x150108, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d4328, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15314c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) create_new_plane_config;
    
    // [CreateNewPostCompositionConfig@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20c1cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c01ec, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20c36c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) create_new_post_composition_config;
    
    // [DisableOverlayPlanesUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x105138, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x195f18, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x111108, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) disable_overlay_planes_unsafe;
    
    // [GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20e008, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c1838, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e1a8, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) get_enabled_plane_count_unsafe;
    
    // [GetLatestPlaneAttributesUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20e174, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c19f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e314, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) get_latest_plane_attributes_unsafe;
    
    // [GetLatestPlaneConfigInternal@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147324, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e12cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b354, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) get_latest_plane_config_internal;
    
    // [GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x147664, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d829c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14b694, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) get_latest_post_composition_config_internal;
    
    // [GetPresentDiagHistory@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b280, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4d1f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b4d0, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) get_present_diag_history;
    
    // [GetPristineCursor@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20e334, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21e7f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e4d4, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) get_pristine_cursor;
    
    // [InitializeQueryStateUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20e478, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15f530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20e618, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) initialize_query_state_unsafe;
    
    // [RecordPresentDiagHistory@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x244d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2c3c8, 0x84380 bytes
    // dxgkrnl.sys .text:0x25160, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) record_present_diag_history;
    
    // [SetMultiplaneOverlayConfigUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x105240, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x196030, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x111210, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) set_multiplane_overlay_config_unsafe;
    
    // [SetPostCompositionConfigUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20fba4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c31f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20fd44, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) set_post_composition_config_unsafe;
    
    // [SetQueryPlaneStateUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20fc5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15e034, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20fdfc, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) set_query_plane_state_unsafe;
    
    // [SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x20fd68, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c32d8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20ff08, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) set_query_post_composition_state_unsafe;
    
    // [UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x15a148, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b7104, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15cf98, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) update_independent_flip_state_unsafe;
    
    // [??0DISPLAY_SOURCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xed330, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17e3b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20f820, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x181520, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) construct_instance;
    
    // [??1DISPLAY_SOURCE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14a8c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20b590, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2bf760, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20b730, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) destroy_instance;
    
    // [GetClippedCursor@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8fabc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20dd14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ad9a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20deb4, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) get_clipped_cursor;
    
    // [GetSavedCursor@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8fb78, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13cdbc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ada64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1332fc, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) get_saved_cursor;
    
    // [Initialize@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xed284, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x165ac0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x208b34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x177c40, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) initialize;
    
    // [Reset@DISPLAY_SOURCE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c194, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x20f9e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2c3034, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x20fb88, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) reset;
};
#include "magic/api.end.hpp"
