#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details::feature_state_manager
{
    // [EnsureSubscribedToStateChangesUnderLock@FeatureStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x19470, 0x17e70 bytes
    // dxgi.dll .text:0x196d8, 0x17e70 bytes
    // dxgi.dll .text:0x14be8, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) ensure_subscribed_to_state_changes_under_lock;
    
    // [RecordFeatureUsage@FeatureStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x18634, 0x17e70 bytes
    // dxgi.dll .text:0x18894, 0x17e70 bytes
    // dxgi.dll .text:0x13da4, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) record_feature_usage;
    
    // [EnsureStateData@FeatureStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x187fc, 0x17e70 bytes
    // dxgi.dll .text:0x18a5c, 0x17e70 bytes
    // dxgi.dll .text:0xb140, 0x18b10 bytes
    // dxgi.dll .text:0x13f6c, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) ensure_state_data;
    
    // [EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1a2f0, 0x17e70 bytes
    // dxgi.dll .text:0x1a5a0, 0x17e70 bytes
    // dxgi.dll .text:0xbaa4, 0x18b10 bytes
    // dxgi.dll .text:0x15b18, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) ensure_subscribed_to_process_wide_usage_flush_under_lock;
    
    // [QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x451c0, 0x17e70 bytes
    // dxgi.dll .text:0x452b0, 0x17e70 bytes
    // dxgi.dll .text:0x506bc, 0x18b10 bytes
    // dxgi.dll .text:0x46394, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) queue_background_srum_usage_reporting;
    
    // [SubscribeToEnabledStateChanges@FeatureStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x199c8, 0x17e70 bytes
    // dxgi.dll .text:0x19c78, 0x17e70 bytes
    // dxgi.dll .text:0xb1e8, 0x18b10 bytes
    // dxgi.dll .text:0x15188, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) subscribe_to_enabled_state_changes;
    
    // [SubscribeToUsageFlush@FeatureStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1a240, 0x17e70 bytes
    // dxgi.dll .text:0x1a4f0, 0x17e70 bytes
    // dxgi.dll .text:0xaa84, 0x18b10 bytes
    // dxgi.dll .text:0x15a68, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) subscribe_to_usage_flush;
};
#include "magic/api.end.hpp"
