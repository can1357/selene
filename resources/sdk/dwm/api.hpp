#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dwm
{
    // [DwmAsyncChildClipRgnChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x59410, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) async_child_clip_rgn_change;
    
    // [DwmAsyncChildMoveSize]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x568c8, 0x13864 bytes
    //
    _m1(sdk::unknown_ptr) async_child_move_size;
    
    // [DwmAsyncCreateDCompositionVisualBitmapForHwnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2748c0, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) async_create_d_composition_visual_bitmap_for_hwnd;
    
    // [DwmAsyncNotifyIsInMoveSizeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x27539c, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) async_notify_is_in_move_size_change;
    
    // [DwmAsyncNotifySpriteMonitorChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x3d158, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) async_notify_sprite_monitor_change;
    
    // [DwmAsyncNotifyWindowFrameMarginsChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x10195c, 0x1659e bytes
    //
    _m5(sdk::unknown_ptr) async_notify_window_frame_margins_change;
    
    // [DwmAsyncSetBlurredWallpaperSurface]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x2758f0, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) async_set_blurred_wallpaper_surface;
    
    // [_DwmAsyncSetCompositionAttribute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xb2128, 0x1659e bytes
    //
    _m7(sdk::unknown_ptr) async_set_composition_attribute;
    
    // [DwmNotifyWindowsMarginsChangeByTheme]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x1e4548, 0x1659e bytes
    //
    _m8(sdk::unknown_ptr) notify_windows_margins_change_by_theme;
    
    // [DwmSetProcessBreakOnTerminate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xd1810, 0x1eb80 bytes
    //
    _m9(sdk::unknown_ptr) set_process_break_on_terminate;
    
    // [DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x274da4, 0x1596d bytes
    // win32kfull.sys .text:0x274bc8, 0x1659e bytes
    // win32kfull.sys .text:0x274d14, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) async_magn_set_desktop_magnifier_offsets_dwm_updated;
    
    // [DwmAsyncMagnSetDesktopSamplingMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x274e60, 0x1596d bytes
    // win32kfull.sys .text:0x274c84, 0x1659e bytes
    // win32kfull.sys .text:0x274dd0, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) async_magn_set_desktop_sampling_mode;
    
    // [DwmAsyncMagnSetFullscreenMagnifierOffsetsDWMUpdated]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x274ff4, 0x1596d bytes
    // win32kfull.sys .text:0x274e18, 0x1659e bytes
    // win32kfull.sys .text:0x274f64, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) async_magn_set_fullscreen_magnifier_offsets_dwm_updated;
    
    // [DwmAsyncMagnSetSamplingMode]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2750d0, 0x1596d bytes
    // win32kfull.sys .text:0x274ef4, 0x1659e bytes
    // win32kfull.sys .text:0x275040, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) async_magn_set_sampling_mode;
    
    // [DwmAsyncMagnSetSlicerDestinationTextures]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x25dc14, 0x13864 bytes
    // win32kfull.sys .text:0x275194, 0x1596d bytes
    // win32kfull.sys .text:0x275104, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) async_magn_set_slicer_destination_textures;
    
    // [DwmAsyncMagnSetWindowSlicer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x25e038, 0x13864 bytes
    // win32kfull.sys .text:0x27561c, 0x1596d bytes
    // win32kfull.sys .text:0x27558c, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) async_magn_set_window_slicer;
    
    // [DwmAsyncNotifySpriteDPIChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x5d014, 0x13864 bytes
    // win32kfull.sys .text:0x73b94, 0x1596d bytes
    // win32kfull.sys .text:0x74704, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) async_notify_sprite_dpi_change;
    
    // [DwmAsyncProcessSurfaceComplete]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27589c, 0x1596d bytes
    // win32kfull.sys .text:0x2754ec, 0x1659e bytes
    // win32kfull.sys .text:0x27580c, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) async_process_surface_complete;
    
    // [DwmAsyncSetChildRootVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x275dd0, 0x1596d bytes
    // win32kfull.sys .text:0x2759b0, 0x1659e bytes
    // win32kfull.sys .text:0x275d40, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) async_set_child_root_visual;
    
    // [DwmAsyncSetDesktopColorTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x275e60, 0x1596d bytes
    // win32kfull.sys .text:0x275a40, 0x1659e bytes
    // win32kfull.sys .text:0x275dd0, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) async_set_desktop_color_transform;
    
    // [DwmAsyncUpdateLargeVisRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2760d0, 0x1596d bytes
    // win32kfull.sys .text:0x275cb0, 0x1659e bytes
    // win32kfull.sys .text:0x276040, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) async_update_large_vis_rgn;
    
    // [DwmAsyncUpdateVisRgn]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4ee30, 0x1596d bytes
    // win32kfull.sys .text:0xbc034, 0x1659e bytes
    // win32kfull.sys .text:0x4f250, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) async_update_vis_rgn;
    
    // [_DwmCheckProcessSession]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x29a10, 0x243e0 bytes
    // win32kbase.sys .text:0xbed50, 0x27ef0 bytes
    // win32kbase.sys .text:0x7c570, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) check_process_session;
    
    // [_DwmLockScreenUpdates]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x125ad0, 0x13864 bytes
    // win32kfull.sys .text:0x126cc0, 0x1596d bytes
    // win32kfull.sys .text:0x127c00, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) lock_screen_updates;
    
    // [DwmSyncFlushWindowChanges]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd4aa4, 0x1596d bytes
    // win32kfull.sys .text:0xcffdc, 0x1659e bytes
    // win32kfull.sys .text:0xd5764, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) sync_flush_window_changes;
    
    // [DwmVisRgnDirty]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c4f8, 0x243e0 bytes
    // win32kbase.sys .rdata:0x280128, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a538, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) vis_rgn_dirty;
    
    // [DwmVisRgnUpdate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x22c6c8, 0x243e0 bytes
    // win32kbase.sys .rdata:0x280308, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a708, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) vis_rgn_update;
    
    // [DwmAsyncActivationChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x3d3a0, 0x13864 bytes
    // win32kfull.sys .text:0x221dc, 0x1596d bytes
    // win32kfull.sys .text:0x97d5c, 0x1659e bytes
    // win32kfull.sys .text:0x225ec, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) async_activation_change;
    
    // [DwmAsyncCancelRotationDelay]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d8bc, 0x13864 bytes
    // win32kfull.sys .text:0x274aa8, 0x1596d bytes
    // win32kfull.sys .text:0x27483c, 0x1659e bytes
    // win32kfull.sys .text:0x274a18, 0x1596d bytes
    //
    _o8(sdk::unknown_ptr) async_cancel_rotation_delay;
    
    // [DwmAsyncChildCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xdf1c, 0x13864 bytes
    // win32kfull.sys .text:0xbdc54, 0x1596d bytes
    // win32kfull.sys .text:0x8232c, 0x1659e bytes
    // win32kfull.sys .text:0xbe7c4, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) async_child_create;
    
    // [DwmAsyncChildDestroy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x609dc, 0x13864 bytes
    // win32kfull.sys .text:0xbde10, 0x1596d bytes
    // win32kfull.sys .text:0x3e640, 0x1659e bytes
    // win32kfull.sys .text:0xbe980, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) async_child_destroy;
    
    // [DwmAsyncChildLink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xdcd0, 0x13864 bytes
    // win32kfull.sys .text:0xbd840, 0x1596d bytes
    // win32kfull.sys .text:0x52eec, 0x1659e bytes
    // win32kfull.sys .text:0xbe3b0, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) async_child_link;
    
    // [DwmAsyncChildStyleChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x47cd0, 0x13864 bytes
    // win32kfull.sys .text:0xccfd4, 0x1596d bytes
    // win32kfull.sys .text:0xbaf3c, 0x1659e bytes
    // win32kfull.sys .text:0xcdc94, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) async_child_style_change;
    
    // [DwmAsyncChildUnlink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5ca50, 0x13864 bytes
    // win32kfull.sys .text:0xbd904, 0x1596d bytes
    // win32kfull.sys .text:0x53a18, 0x1659e bytes
    // win32kfull.sys .text:0xbe474, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) async_child_unlink;
    
    // [DwmAsyncChildZBandChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10fbac, 0x13864 bytes
    // win32kfull.sys .text:0xcb5b8, 0x1596d bytes
    // win32kfull.sys .text:0xe3e40, 0x1659e bytes
    // win32kfull.sys .text:0xcc278, 0x1596d bytes
    //
    _p4(sdk::unknown_ptr) async_child_z_band_change;
    
    // [DwmAsyncCreateDCompositionHwndTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x72a80, 0x1eb80 bytes
    // win32kfull.sys .text:0x113c34, 0x1596d bytes
    // win32kfull.sys .text:0x106818, 0x1659e bytes
    // win32kfull.sys .text:0x114b64, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) async_create_d_composition_hwnd_target;
    
    // [DwmAsyncCreateSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x49afc, 0x13864 bytes
    // win32kfull.sys .text:0xcf42c, 0x1596d bytes
    // win32kfull.sys .text:0xb2ff4, 0x1659e bytes
    // win32kfull.sys .text:0xd00ec, 0x1596d bytes
    //
    _p6(sdk::unknown_ptr) async_create_sprite;
    
    // [DwmAsyncDesktopCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe084, 0x13864 bytes
    // win32kfull.sys .text:0xbdeac, 0x1596d bytes
    // win32kfull.sys .text:0x8ac48, 0x1659e bytes
    // win32kfull.sys .text:0xbea1c, 0x1596d bytes
    //
    _p7(sdk::unknown_ptr) async_desktop_create;
    
    // [DwmAsyncDesktopFree]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xca50, 0x13864 bytes
    // win32kfull.sys .text:0xbd4a4, 0x1596d bytes
    // win32kfull.sys .text:0x81c90, 0x1659e bytes
    // win32kfull.sys .text:0xbe014, 0x1596d bytes
    //
    _p8(sdk::unknown_ptr) async_desktop_free;
    
    // [DwmAsyncDestroyDCompositionHwndTarget]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x72b40, 0x1eb80 bytes
    // win32kfull.sys .text:0x11c6f4, 0x1596d bytes
    // win32kfull.sys .text:0x10a184, 0x1659e bytes
    // win32kfull.sys .text:0x11d624, 0x1596d bytes
    //
    _p9(sdk::unknown_ptr) async_destroy_d_composition_hwnd_target;
    
    // [DwmAsyncDestroySprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4a0d8, 0x13864 bytes
    // win32kfull.sys .text:0xcd324, 0x1596d bytes
    // win32kfull.sys .text:0xbb48c, 0x1659e bytes
    // win32kfull.sys .text:0xcdfe4, 0x1596d bytes
    //
    _q0(sdk::unknown_ptr) async_destroy_sprite;
    
    // [DwmAsyncDirtySprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1246e8, 0x13864 bytes
    // win32kfull.sys .text:0x45eb8, 0x1596d bytes
    // win32kfull.sys .text:0xb9208, 0x1659e bytes
    // win32kfull.sys .text:0x462c8, 0x1596d bytes
    //
    _q1(sdk::unknown_ptr) async_dirty_sprite;
    
    // [DwmAsyncDxBindSwapChain]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13bd04, 0x13864 bytes
    // win32kfull.sys .text:0x14d328, 0x1596d bytes
    // win32kfull.sys .text:0x14170c, 0x1659e bytes
    // win32kfull.sys .text:0x14e268, 0x1596d bytes
    //
    _q2(sdk::unknown_ptr) async_dx_bind_swap_chain;
    
    // [DwmAsyncGhostChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1393bc, 0x13864 bytes
    // win32kfull.sys .text:0x4318, 0x1596d bytes
    // win32kfull.sys .text:0x138bb8, 0x1659e bytes
    // win32kfull.sys .text:0x46d0, 0x1596d bytes
    //
    _q3(sdk::unknown_ptr) async_ghost_change;
    
    // [DwmAsyncIconChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4c218, 0x13864 bytes
    // win32kfull.sys .text:0xd0338, 0x1596d bytes
    // win32kfull.sys .text:0xb3e60, 0x1659e bytes
    // win32kfull.sys .text:0xd0ff8, 0x1596d bytes
    //
    _q4(sdk::unknown_ptr) async_icon_change;
    
    // [DwmAsyncMagnCreate]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d924, 0x13864 bytes
    // win32kfull.sys .text:0x274b2c, 0x1596d bytes
    // win32kfull.sys .text:0x274950, 0x1659e bytes
    // win32kfull.sys .text:0x274a9c, 0x1596d bytes
    //
    _q5(sdk::unknown_ptr) async_magn_create;
    
    // [DwmAsyncMagnDestroy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25d9e0, 0x13864 bytes
    // win32kfull.sys .text:0x274c04, 0x1596d bytes
    // win32kfull.sys .text:0x274a28, 0x1659e bytes
    // win32kfull.sys .text:0x274b74, 0x1596d bytes
    //
    _q6(sdk::unknown_ptr) async_magn_destroy;
    
    // [DwmAsyncMagnSetDesktopColorTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25da84, 0x13864 bytes
    // win32kfull.sys .text:0x274cb4, 0x1596d bytes
    // win32kfull.sys .text:0x274ad8, 0x1659e bytes
    // win32kfull.sys .text:0x274c24, 0x1596d bytes
    //
    _q7(sdk::unknown_ptr) async_magn_set_desktop_color_transform;
    
    // [DwmAsyncMagnSetDesktopTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25db5c, 0x13864 bytes
    // win32kfull.sys .text:0x274f20, 0x1596d bytes
    // win32kfull.sys .text:0x274d44, 0x1659e bytes
    // win32kfull.sys .text:0x274e90, 0x1596d bytes
    //
    _q8(sdk::unknown_ptr) async_magn_set_desktop_transform;
    
    // [DwmAsyncMagnSetWindowColorTransform]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25dd44, 0x13864 bytes
    // win32kfull.sys .text:0x2752dc, 0x1596d bytes
    // win32kfull.sys .text:0x274fb8, 0x1659e bytes
    // win32kfull.sys .text:0x27524c, 0x1596d bytes
    //
    _q9(sdk::unknown_ptr) async_magn_set_window_color_transform;
    
    // [DwmAsyncMagnSetWindowFilterList]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25de2c, 0x13864 bytes
    // win32kfull.sys .text:0x2753dc, 0x1596d bytes
    // win32kfull.sys .text:0x2750b8, 0x1659e bytes
    // win32kfull.sys .text:0x27534c, 0x1596d bytes
    //
    _r0(sdk::unknown_ptr) async_magn_set_window_filter_list;
    
    // [DwmAsyncMagnSetWindowSharedTextures]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25df24, 0x13864 bytes
    // win32kfull.sys .text:0x2754ec, 0x1596d bytes
    // win32kfull.sys .text:0x2751cc, 0x1659e bytes
    // win32kfull.sys .text:0x27545c, 0x1596d bytes
    //
    _r1(sdk::unknown_ptr) async_magn_set_window_shared_textures;
    
    // [DwmAsyncNotifyAnimationChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x279a0, 0x13864 bytes
    // win32kfull.sys .text:0xc8b34, 0x1596d bytes
    // win32kfull.sys .text:0xcf390, 0x1659e bytes
    // win32kfull.sys .text:0xc97f4, 0x1596d bytes
    //
    _r2(sdk::unknown_ptr) async_notify_animation_change;
    
    // [DwmAsyncNotifyDigitizerActiveContacts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e0fc, 0x13864 bytes
    // win32kfull.sys .text:0x2756f8, 0x1596d bytes
    // win32kfull.sys .text:0x2752f8, 0x1659e bytes
    // win32kfull.sys .text:0x275668, 0x1596d bytes
    //
    _r3(sdk::unknown_ptr) async_notify_digitizer_active_contacts;
    
    // [DwmAsyncNotifyDigitizerActiveContactsWrap]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1ca0b0, 0x13864 bytes
    // win32kfull.sys .text:0x1eeed0, 0x1596d bytes
    // win32kfull.sys .text:0x1eb2b0, 0x1659e bytes
    // win32kfull.sys .text:0x1eed30, 0x1596d bytes
    //
    _r4(sdk::unknown_ptr) async_notify_digitizer_active_contacts_wrap;
    
    // [DwmAsyncNotifyDisplayModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1234f0, 0x13864 bytes
    // win32kfull.sys .text:0x120200, 0x1596d bytes
    // win32kfull.sys .text:0x1117e0, 0x1659e bytes
    // win32kfull.sys .text:0x121140, 0x1596d bytes
    //
    _r5(sdk::unknown_ptr) async_notify_display_mode_change;
    
    // [DwmAsyncNotifyInputActivity]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x107158, 0x13864 bytes
    // win32kfull.sys .text:0x53014, 0x1596d bytes
    // win32kfull.sys .text:0xff684, 0x1659e bytes
    // win32kfull.sys .text:0x53434, 0x1596d bytes
    //
    _r6(sdk::unknown_ptr) async_notify_input_activity;
    
    // [DwmAsyncNotifyRotationModeChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e194, 0x13864 bytes
    // win32kfull.sys .text:0x27579c, 0x1596d bytes
    // win32kfull.sys .text:0x275468, 0x1659e bytes
    // win32kfull.sys .text:0x27570c, 0x1596d bytes
    //
    _r7(sdk::unknown_ptr) async_notify_rotation_mode_change;
    
    // [DwmAsyncNotifySessionConnected]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x126240, 0x13864 bytes
    // win32kfull.sys .text:0x127530, 0x1596d bytes
    // win32kfull.sys .text:0x116cc0, 0x1659e bytes
    // win32kfull.sys .text:0x128470, 0x1596d bytes
    //
    _r8(sdk::unknown_ptr) async_notify_session_connected;
    
    // [DwmAsyncNotifyWallpaperChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12075c, 0x13864 bytes
    // win32kfull.sys .text:0x120c60, 0x1596d bytes
    // win32kfull.sys .text:0x90758, 0x1659e bytes
    // win32kfull.sys .text:0x121ba0, 0x1596d bytes
    //
    _r9(sdk::unknown_ptr) async_notify_wallpaper_change;
    
    // [DwmAsyncNotifyWindowShadowChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e20c, 0x13864 bytes
    // win32kfull.sys .text:0x275820, 0x1596d bytes
    // win32kfull.sys .text:0x14a5fc, 0x1659e bytes
    // win32kfull.sys .text:0x275790, 0x1596d bytes
    //
    _s0(sdk::unknown_ptr) async_notify_window_shadow_change;
    
    // [DwmAsyncOwnerChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x60944, 0x13864 bytes
    // win32kfull.sys .text:0x4e574, 0x1596d bytes
    // win32kfull.sys .text:0x3e6dc, 0x1659e bytes
    // win32kfull.sys .text:0x4e994, 0x1596d bytes
    //
    _s1(sdk::unknown_ptr) async_owner_change;
    
    // [DwmAsyncRegisterSharedThumbnailVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe68, 0x13864 bytes
    // win32kfull.sys .text:0x7ca0, 0x1596d bytes
    // win32kfull.sys .text:0x3ed4, 0x1659e bytes
    // win32kfull.sys .text:0x8050, 0x1596d bytes
    //
    _s2(sdk::unknown_ptr) async_register_shared_thumbnail_visual;
    
    // [DwmAsyncRegisterSharedThumbnailVisualApiExt]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xbe30, 0x13864 bytes
    // win32kfull.sys .text:0x7c60, 0x1596d bytes
    // win32kfull.sys .text:0x3e90, 0x1659e bytes
    // win32kfull.sys .text:0x8010, 0x1596d bytes
    //
    _s3(sdk::unknown_ptr) async_register_shared_thumbnail_visual_api_ext;
    
    // [DwmAsyncRegisterSharedVirtualDesktopVisual]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e280, 0x13864 bytes
    // win32kfull.sys .text:0x275b10, 0x1596d bytes
    // win32kfull.sys .text:0x275760, 0x1659e bytes
    // win32kfull.sys .text:0x275a80, 0x1596d bytes
    //
    _s4(sdk::unknown_ptr) async_register_shared_virtual_desktop_visual;
    
    // [DwmAsyncSendTouchContacts]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e320, 0x13864 bytes
    // win32kfull.sys .text:0x275bc0, 0x1596d bytes
    // win32kfull.sys .text:0x15ded8, 0x1659e bytes
    // win32kfull.sys .text:0x275b30, 0x1596d bytes
    //
    _s5(sdk::unknown_ptr) async_send_touch_contacts;
    
    // [DwmAsyncSendWindowArrangingData]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e43c, 0x13864 bytes
    // win32kfull.sys .text:0x275cf0, 0x1596d bytes
    // win32kfull.sys .text:0x275810, 0x1659e bytes
    // win32kfull.sys .text:0x275c60, 0x1596d bytes
    //
    _s6(sdk::unknown_ptr) async_send_window_arranging_data;
    
    // [DwmAsyncSetCompositionAttribute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x44228, 0x13864 bytes
    // win32kfull.sys .text:0x101574, 0x1596d bytes
    // win32kfull.sys .text:0xb2198, 0x1659e bytes
    // win32kfull.sys .text:0x1024a4, 0x1596d bytes
    //
    _s7(sdk::unknown_ptr) async_set_composition_attribute_;
    
    // [DwmAsyncSetTransition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x118278, 0x13864 bytes
    // win32kfull.sys .text:0x114b78, 0x1596d bytes
    // win32kfull.sys .text:0x108588, 0x1659e bytes
    // win32kfull.sys .text:0x115aa8, 0x1596d bytes
    //
    _s8(sdk::unknown_ptr) async_set_transition;
    
    // [DwmAsyncShellWindowChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xd72c, 0x13864 bytes
    // win32kfull.sys .text:0xbccd4, 0x1596d bytes
    // win32kfull.sys .text:0x8a460, 0x1659e bytes
    // win32kfull.sys .text:0xbd844, 0x1596d bytes
    //
    _s9(sdk::unknown_ptr) async_shell_window_change;
    
    // [DwmAsyncShowSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x110b8c, 0x13864 bytes
    // win32kfull.sys .text:0x10d7a8, 0x1596d bytes
    // win32kfull.sys .text:0x102258, 0x1659e bytes
    // win32kfull.sys .text:0x10e6d8, 0x1596d bytes
    //
    _t0(sdk::unknown_ptr) async_show_sprite;
    
    // [DwmAsyncSignalGhost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x138a7c, 0x13864 bytes
    // win32kfull.sys .text:0x36c8, 0x1596d bytes
    // win32kfull.sys .text:0x138010, 0x1659e bytes
    // win32kfull.sys .text:0x36c8, 0x1596d bytes
    //
    _t1(sdk::unknown_ptr) async_signal_ghost;
    
    // [DwmAsyncSnapshotWindow]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e4f8, 0x13864 bytes
    // win32kfull.sys .text:0x275f50, 0x1596d bytes
    // win32kfull.sys .text:0x275b30, 0x1659e bytes
    // win32kfull.sys .text:0x275ec0, 0x1596d bytes
    //
    _t2(sdk::unknown_ptr) async_snapshot_window;
    
    // [DwmAsyncTextChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4be24, 0x13864 bytes
    // win32kfull.sys .text:0xd0204, 0x1596d bytes
    // win32kfull.sys .text:0xb0810, 0x1659e bytes
    // win32kfull.sys .text:0xd0ec4, 0x1596d bytes
    //
    _t3(sdk::unknown_ptr) async_text_change;
    
    // [DwmAsyncTopLevelMouseLeave]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1248dc, 0x13864 bytes
    // win32kfull.sys .text:0x127eb8, 0x1596d bytes
    // win32kfull.sys .text:0x117758, 0x1659e bytes
    // win32kfull.sys .text:0x128df8, 0x1596d bytes
    //
    _t4(sdk::unknown_ptr) async_top_level_mouse_leave;
    
    // [DwmAsyncUpdateDefaultDesktopThumbnail]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e59c, 0x13864 bytes
    // win32kfull.sys .text:0x276004, 0x1596d bytes
    // win32kfull.sys .text:0x275be4, 0x1659e bytes
    // win32kfull.sys .text:0x275f74, 0x1596d bytes
    //
    _t5(sdk::unknown_ptr) async_update_default_desktop_thumbnail;
    
    // [DwmAsyncUpdateSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x63418, 0x13864 bytes
    // win32kfull.sys .text:0xc8950, 0x1596d bytes
    // win32kfull.sys .text:0xebd10, 0x1659e bytes
    // win32kfull.sys .text:0xc9610, 0x1596d bytes
    //
    _t6(sdk::unknown_ptr) async_update_sprite;
    
    // [DwmAsyncZorderSprite]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x5cd58, 0x13864 bytes
    // win32kfull.sys .text:0x73d6c, 0x1596d bytes
    // win32kfull.sys .text:0xefe28, 0x1659e bytes
    // win32kfull.sys .text:0x748dc, 0x1596d bytes
    //
    _t7(sdk::unknown_ptr) async_zorder_sprite;
    
    // [DwmChildRectChange]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x566a4, 0x13864 bytes
    // win32kfull.sys .text:0xa4748, 0x1596d bytes
    // win32kfull.sys .text:0x52528, 0x1659e bytes
    // win32kfull.sys .text:0xa52b8, 0x1596d bytes
    //
    _t8(sdk::unknown_ptr) child_rect_change;
    
    // [DwmDestroyDeviceSpecificResources]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x366d0, 0x13864 bytes
    // win32kfull.sys .text:0x2cfd0, 0x1596d bytes
    // win32kfull.sys .text:0xc7fd0, 0x1659e bytes
    // win32kfull.sys .text:0x2d3e0, 0x1596d bytes
    //
    _t9(sdk::unknown_ptr) destroy_device_specific_resources;
    
    // [DwmGetClassStyle]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xe028, 0x13864 bytes
    // win32kfull.sys .text:0xbdd98, 0x1596d bytes
    // win32kfull.sys .text:0x82478, 0x1659e bytes
    // win32kfull.sys .text:0xbe908, 0x1596d bytes
    //
    _u0(sdk::unknown_ptr) get_class_style;
    
    // [DWMGetRgnEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109ee0, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c048, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27fbd8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a088, 0x243e0 bytes
    //
    _u1(sdk::unknown_ptr) get_rgn_event;
    
    // [DwmManipulationFrameRouted]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109370, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c7b8, 0x243e0 bytes
    // win32kbase.sys .rdata:0x280408, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a7f8, 0x243e0 bytes
    //
    _u2(sdk::unknown_ptr) manipulation_frame_routed;
    
    // [DwmManipulationFrameStart]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109380, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22bb40, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f6a0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229b80, 0x243e0 bytes
    //
    _u3(sdk::unknown_ptr) manipulation_frame_start;
    
    // [DwmMovePointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x243c0, 0x13864 bytes
    // win32kfull.sys .text:0x1159e4, 0x1596d bytes
    // win32kfull.sys .text:0x145ca4, 0x1659e bytes
    // win32kfull.sys .text:0x116914, 0x1596d bytes
    //
    _u4(sdk::unknown_ptr) move_pointer;
    
    // [DwmNotifyChildrenAddRemove]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xda50, 0x13864 bytes
    // win32kfull.sys .text:0xbd544, 0x1596d bytes
    // win32kfull.sys .text:0x81d30, 0x1659e bytes
    // win32kfull.sys .text:0xbe0b4, 0x1596d bytes
    //
    _u5(sdk::unknown_ptr) notify_children_add_remove;
    
    // [DwmNotifyChildrenCreateDestroy]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xdd78, 0x13864 bytes
    // win32kfull.sys .text:0xbd99c, 0x1596d bytes
    // win32kfull.sys .text:0x8205c, 0x1659e bytes
    // win32kfull.sys .text:0xbe50c, 0x1596d bytes
    //
    _u6(sdk::unknown_ptr) notify_children_create_destroy;
    
    // [DwmNotifyChildrenLinkUnlink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xda90, 0x13864 bytes
    // win32kfull.sys .text:0xbd588, 0x1596d bytes
    // win32kfull.sys .text:0x81d74, 0x1659e bytes
    // win32kfull.sys .text:0xbe0f8, 0x1596d bytes
    //
    _u7(sdk::unknown_ptr) notify_children_link_unlink;
    
    // [DwmSetPointerShape]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x23d98, 0x13864 bytes
    // win32kfull.sys .text:0x11564c, 0x1596d bytes
    // win32kfull.sys .text:0x14590c, 0x1659e bytes
    // win32kfull.sys .text:0x11657c, 0x1596d bytes
    //
    _u8(sdk::unknown_ptr) set_pointer_shape;
    
    // [DwmSpriteCreateEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109f50, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c398, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27ff68, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a3d8, 0x243e0 bytes
    //
    _u9(sdk::unknown_ptr) sprite_create_event;
    
    // [DwmSpriteDestroyEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109f30, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c228, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27fdf8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a268, 0x243e0 bytes
    //
    _v0(sdk::unknown_ptr) sprite_destroy_event;
    
    // [DwmSpriteLogicalSurfBindEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109f20, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c1e8, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27fdb8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a228, 0x243e0 bytes
    //
    _v1(sdk::unknown_ptr) sprite_logical_surf_bind_event;
    
    // [DwmSpriteLogicalSurfUnBindEvent]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109de8, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22b8c0, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f3f0, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229900, 0x243e0 bytes
    //
    _v2(sdk::unknown_ptr) sprite_logical_surf_un_bind_event;
    
    // [DwmSyncCaptureSurfaceBits]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2800c, 0x13864 bytes
    // win32kfull.sys .text:0xd5a9c, 0x1596d bytes
    // win32kfull.sys .text:0xcfb5c, 0x1659e bytes
    // win32kfull.sys .text:0xd675c, 0x1596d bytes
    //
    _v3(sdk::unknown_ptr) sync_capture_surface_bits;
    
    // [DwmSyncDesktopSwitch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2607c, 0x13864 bytes
    // win32kfull.sys .text:0x2d5b4, 0x1596d bytes
    // win32kfull.sys .text:0xcde14, 0x1659e bytes
    // win32kfull.sys .text:0x2d9c4, 0x1596d bytes
    //
    _v4(sdk::unknown_ptr) sync_desktop_switch;
    
    // [DwmSyncFlushAndWaitForBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xcfa00, 0x1eb80 bytes
    // win32kbase.sys .text:0x15a2c0, 0x243e0 bytes
    // win32kbase.sys .text:0x18ce50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1586b0, 0x243e0 bytes
    //
    _v5(sdk::unknown_ptr) sync_flush_and_wait_for_batch;
    
    // [DwmSyncFlushForceRenderAndWaitForBatch]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1449a0, 0x13864 bytes
    // win32kfull.sys .text:0xd4b10, 0x1596d bytes
    // win32kfull.sys .text:0xd0040, 0x1659e bytes
    // win32kfull.sys .text:0xd57d0, 0x1596d bytes
    //
    _v6(sdk::unknown_ptr) sync_flush_force_render_and_wait_for_batch;
    
    // [DwmSyncFlushForceRenderAndWaitForBatchBegin]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109160, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22be58, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27f9c8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x229e98, 0x243e0 bytes
    //
    _v7(sdk::unknown_ptr) sync_flush_force_render_and_wait_for_batch_begin;
    
    // [DwmSyncFlushForceRenderAndWaitForBatchEnd]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .rdata:0x109150, 0x1eb80 bytes
    // win32kbase.sys .rdata:0x22c1d8, 0x243e0 bytes
    // win32kbase.sys .rdata:0x27fda8, 0x27ef0 bytes
    // win32kbase.sys .rdata:0x22a218, 0x243e0 bytes
    //
    _v8(sdk::unknown_ptr) sync_flush_force_render_and_wait_for_batch_end;
    
    // [DwmSyncGetCompositionAttribute]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x13a6d0, 0x13864 bytes
    // win32kfull.sys .text:0xd4c10, 0x1596d bytes
    // win32kfull.sys .text:0x1406e8, 0x1659e bytes
    // win32kfull.sys .text:0xd58d0, 0x1596d bytes
    //
    _v9(sdk::unknown_ptr) sync_get_composition_attribute;
    
    // [DwmSyncGetTitleBarInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2621c, 0x13864 bytes
    // win32kfull.sys .text:0xd57a8, 0x1596d bytes
    // win32kfull.sys .text:0xcfdd0, 0x1659e bytes
    // win32kfull.sys .text:0xd6468, 0x1596d bytes
    //
    _w0(sdk::unknown_ptr) sync_get_title_bar_info;
    
    // [DwmSyncHitTestQuery]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x263c0, 0x13864 bytes
    // win32kfull.sys .text:0xc0f58, 0x1596d bytes
    // win32kfull.sys .text:0xcdb40, 0x1659e bytes
    // win32kfull.sys .text:0xc1ac8, 0x1596d bytes
    //
    _w1(sdk::unknown_ptr) sync_hit_test_query;
    
    // [DwmSyncMagnUpdateWindowSharedTextures]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e654, 0x13864 bytes
    // win32kfull.sys .text:0x276180, 0x1596d bytes
    // win32kfull.sys .text:0x275d60, 0x1659e bytes
    // win32kfull.sys .text:0x2760f0, 0x1596d bytes
    //
    _w2(sdk::unknown_ptr) sync_magn_update_window_shared_textures;
    
    // [DwmSyncNotifyMinimizing]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x27a2c, 0x13864 bytes
    // win32kfull.sys .text:0xc57ac, 0x1596d bytes
    // win32kfull.sys .text:0xcf448, 0x1659e bytes
    // win32kfull.sys .text:0xc646c, 0x1596d bytes
    //
    _w3(sdk::unknown_ptr) sync_notify_minimizing;
    
    // [DwmSyncSignalGhost]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x25e868, 0x13864 bytes
    // win32kfull.sys .text:0x2763ac, 0x1596d bytes
    // win32kfull.sys .text:0x275f70, 0x1659e bytes
    // win32kfull.sys .text:0x27631c, 0x1596d bytes
    //
    _w4(sdk::unknown_ptr) sync_signal_ghost;
    
    // [DwmUpdateProxyWindow]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7b0a0, 0x17e70 bytes
    // dxgi.dll .text:0x7b1d0, 0x17e70 bytes
    // dxgi.dll .text:0x86738, 0x18b10 bytes
    // dxgi.dll .text:0x7c600, 0x17e70 bytes
    //
    _w5(sdk::unknown_ptr) update_proxy_window;
};
#include "magic/api.end.hpp"
