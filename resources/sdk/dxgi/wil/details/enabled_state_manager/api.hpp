#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details::enabled_state_manager
{
    // [EnsureSubscribedToUsageFlush@EnabledStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x182f8, 0x17e70 bytes
    // dxgi.dll .text:0x18558, 0x17e70 bytes
    // dxgi.dll .text:0x13a68, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) ensure_subscribed_to_usage_flush;
    
    // [QueueBackgroundUsageReporting@EnabledStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x1847c, 0x17e70 bytes
    // dxgi.dll .text:0x186dc, 0x17e70 bytes
    // dxgi.dll .text:0x13bec, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) queue_background_usage_reporting;
    
    // [EnsureSubscribedToFeatureConfigurationChangesImpl@EnabledStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x18d18, 0x17e70 bytes
    // dxgi.dll .text:0x18f78, 0x17e70 bytes
    // dxgi.dll .text:0xbb1c, 0x18b10 bytes
    // dxgi.dll .text:0x14488, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) ensure_subscribed_to_feature_configuration_changes_impl;
    
    // [OnStateChange@EnabledStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x450c0, 0x17e70 bytes
    // dxgi.dll .text:0x451b0, 0x17e70 bytes
    // dxgi.dll .text:0x50630, 0x18b10 bytes
    // dxgi.dll .text:0x46294, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) on_state_change;
    
    // [OnTimer@EnabledStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1837c, 0x17e70 bytes
    // dxgi.dll .text:0x185dc, 0x17e70 bytes
    // dxgi.dll .text:0xa9fc, 0x18b10 bytes
    // dxgi.dll .text:0x13aec, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) on_timer;
    
    // [RecordCachedUsageUnderLock@EnabledStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1a3a4, 0x17e70 bytes
    // dxgi.dll .text:0x1a654, 0x17e70 bytes
    // dxgi.dll .text:0xa830, 0x18b10 bytes
    // dxgi.dll .text:0x15bd4, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) record_cached_usage_under_lock;
    
    // [SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1897c, 0x17e70 bytes
    // dxgi.dll .text:0x18bdc, 0x17e70 bytes
    // dxgi.dll .text:0x17590, 0x18b10 bytes
    // dxgi.dll .text:0x140ec, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) subscribe_feature_state_cache_to_configuration_changes;
};
#include "magic/api.end.hpp"
