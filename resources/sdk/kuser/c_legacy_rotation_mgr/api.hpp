#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_legacy_rotation_mgr
{
    // [AutoRotationUpdateRegistry@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a0d0, 0x1596d bytes
    // win32kfull.sys .text:0xd41c0, 0x1659e bytes
    // win32kfull.sys .text:0x11b000, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) auto_rotation_update_registry;
    
    // [CacheRotationInfo@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a130, 0x1596d bytes
    // win32kfull.sys .text:0xd4220, 0x1659e bytes
    // win32kfull.sys .text:0x11b060, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) cache_rotation_info;
    
    // [GetDockedOrientationValue@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1818, 0x1596d bytes
    // win32kfull.sys .text:0x1cfc00, 0x1659e bytes
    // win32kfull.sys .text:0x1d16b8, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) get_docked_orientation_value;
    
    // [IsOrientationWithinPreferences@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1a24, 0x1596d bytes
    // win32kfull.sys .text:0x1cfe08, 0x1659e bytes
    // win32kfull.sys .text:0x1d18c4, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) is_orientation_within_preferences;
    
    // [QueryAutoRotationRegistrySetting@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a2e4, 0x1596d bytes
    // win32kfull.sys .text:0xd43e8, 0x1659e bytes
    // win32kfull.sys .text:0x11b214, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) query_auto_rotation_registry_setting;
    
    // [QueryAutoRotationState@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd63f0, 0x1596d bytes
    // win32kfull.sys .text:0xd0cd0, 0x1659e bytes
    // win32kfull.sys .text:0xd70b0, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) query_auto_rotation_state;
    
    // [QueryDockedOrientationRegistrySetting@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1af0, 0x1596d bytes
    // win32kfull.sys .text:0x1cfedc, 0x1659e bytes
    // win32kfull.sys .text:0x1d1990, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) query_docked_orientation_registry_setting;
    
    // [RotationLockTogglePressed@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1c00, 0x1596d bytes
    // win32kfull.sys .text:0x1cfff0, 0x1659e bytes
    // win32kfull.sys .text:0x1d1aa0, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) rotation_lock_toggle_pressed;
    
    // [RotationRequired@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1c68, 0x1596d bytes
    // win32kfull.sys .text:0x1d0058, 0x1659e bytes
    // win32kfull.sys .text:0x1d1b08, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) rotation_required;
    
    // [UpdateAutoRotationRegistrySetting@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a408, 0x1596d bytes
    // win32kfull.sys .text:0xd450c, 0x1659e bytes
    // win32kfull.sys .text:0x11b338, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) update_auto_rotation_registry_setting;
    
    // [xxxApplyDockedOrientation@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1dd8, 0x1596d bytes
    // win32kfull.sys .text:0x1d01c8, 0x1659e bytes
    // win32kfull.sys .text:0x1d1c78, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) xxx_apply_docked_orientation;
    
    // [xxxApplyOrientationPreference@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd63b4, 0x1596d bytes
    // win32kfull.sys .text:0xd0c94, 0x1659e bytes
    // win32kfull.sys .text:0xd7074, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) xxx_apply_orientation_preference;
    
    // [xxxAutoRotateScreen@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d1ed0, 0x1596d bytes
    // win32kfull.sys .text:0x1d02c0, 0x1659e bytes
    // win32kfull.sys .text:0x1d1d70, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) xxx_auto_rotate_screen;
    
    // [xxxRefreshDisplayOrientation@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd6290, 0x1596d bytes
    // win32kfull.sys .text:0xd0ab0, 0x1659e bytes
    // win32kfull.sys .text:0xd6f50, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) xxx_refresh_display_orientation;
    
    // [xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d2008, 0x1596d bytes
    // win32kfull.sys .text:0x1d03f8, 0x1659e bytes
    // win32kfull.sys .text:0x1d1ea8, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) xxx_restore_slate_autorotation_preferences;
    
    // [xxxRotateScreen@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d2048, 0x1596d bytes
    // win32kfull.sys .text:0x1d0438, 0x1659e bytes
    // win32kfull.sys .text:0x1d1ee8, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) xxx_rotate_screen;
    
    // [xxxSetAutoRotationState@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d2370, 0x1596d bytes
    // win32kfull.sys .text:0x1d0740, 0x1659e bytes
    // win32kfull.sys .text:0x1d2210, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) xxx_set_auto_rotation_state;
    
    // [xxxSetAutoRotationStateInternal@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d23a4, 0x1596d bytes
    // win32kfull.sys .text:0x1d0774, 0x1659e bytes
    // win32kfull.sys .text:0x1d2244, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) xxx_set_auto_rotation_state_internal;
    
    // [xxxSetSensorPresence@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d2470, 0x1596d bytes
    // win32kfull.sys .text:0x1d0830, 0x1659e bytes
    // win32kfull.sys .text:0x1d2310, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) xxx_set_sensor_presence;
    
    // [xxxSetSlateAutoRotationState@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d2558, 0x1596d bytes
    // win32kfull.sys .text:0x1d090c, 0x1659e bytes
    // win32kfull.sys .text:0x1d23f8, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) xxx_set_slate_auto_rotation_state;
    
    // [xxxSmoothRotateScreen@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d2634, 0x1596d bytes
    // win32kfull.sys .text:0x1d09dc, 0x1659e bytes
    // win32kfull.sys .text:0x1d24d4, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) xxx_smooth_rotate_screen;
    
    // [xxxUserReinitializeAutoRotation@CLegacyRotationMgr]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a1d0, 0x1596d bytes
    // win32kfull.sys .text:0xd42c0, 0x1659e bytes
    // win32kfull.sys .text:0x11b100, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) xxx_user_reinitialize_auto_rotation;
};
#include "magic/api.end.hpp"
