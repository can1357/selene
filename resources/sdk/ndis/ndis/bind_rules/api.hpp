#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::ndis::bind_rules
{
    // [CheckMissingModifyingFilter@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xfc694, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109708, 0x1e858 bytes
    // ndis.sys PAGE:0xfcbbc, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) check_missing_modifying_filter;
    
    // [PauseMiniportStack@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xfb4c0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x108598, 0x1e858 bytes
    // ndis.sys PAGE:0xfb9e8, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) pause_miniport_stack;
    
    // [Apply@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa626c, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfb404, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1084dc, 0x1e858 bytes
    // ndis.sys PAGE:0xfb92c, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) apply;
    
    // [CheckForDriverLoaded@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa76e4, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfcac8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109b28, 0x1e858 bytes
    // ndis.sys PAGE:0xfcff0, 0x1d2c0 bytes
    //
    _m3(sdk::unknown_ptr) check_for_driver_loaded;
    
    // [CheckForVBusDependency@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7618, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfc9e8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109a50, 0x1e858 bytes
    // ndis.sys PAGE:0xfcf10, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) check_for_v_bus_dependency;
    
    // [CheckMissingMandatoryFilter@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7078, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfc308, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109354, 0x1e858 bytes
    // ndis.sys PAGE:0xfc830, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) check_missing_mandatory_filter;
    
    // [CoalesceFilterAttachDuringBoot@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa6f04, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfc1b0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1091d8, 0x1e858 bytes
    // ndis.sys PAGE:0xfc6d8, 0x1d2c0 bytes
    //
    _m6(sdk::unknown_ptr) coalesce_filter_attach_during_boot;
    
    // [MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa6940, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfbac8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x108e80, 0x1e858 bytes
    // ndis.sys PAGE:0xfbff0, 0x1d2c0 bytes
    //
    _m7(sdk::unknown_ptr) make_optional_filters_mandatory_during_boot;
    
    // [PauseNeededForBind@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa6514, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfb684, 0x1d2c0 bytes
    // ndis.sys PAGE:0x108780, 0x1e858 bytes
    // ndis.sys PAGE:0xfbbac, 0x1d2c0 bytes
    //
    _m8(sdk::unknown_ptr) pause_needed_for_bind;
    
    // [ReEnableTemporaryUnbind@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa7a28, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfce34, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109e94, 0x1e858 bytes
    // ndis.sys PAGE:0xfd35c, 0x1d2c0 bytes
    //
    _m9(sdk::unknown_ptr) re_enable_temporary_unbind;
    
    // [ReStartTemporaryPause@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa78a8, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfccb0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109d10, 0x1e858 bytes
    // ndis.sys PAGE:0xfd1d8, 0x1d2c0 bytes
    //
    _n0(sdk::unknown_ptr) re_start_temporary_pause;
    
    // [RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa72d8, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfc55c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1095a4, 0x1e858 bytes
    // ndis.sys PAGE:0xfca84, 0x1d2c0 bytes
    //
    _n1(sdk::unknown_ptr) retry_protocol_bindings_after_miniport_change;
    
    // [UnbindIncompatibleDriversForMacChange@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa741c, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfc7bc, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109830, 0x1e858 bytes
    // ndis.sys PAGE:0xfcce4, 0x1d2c0 bytes
    //
    _n2(sdk::unknown_ptr) unbind_incompatible_drivers_for_mac_change;
    
    // [UnbindMiniportStack@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa6750, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfb8b8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x108bd4, 0x1e858 bytes
    // ndis.sys PAGE:0xfbde0, 0x1d2c0 bytes
    //
    _n3(sdk::unknown_ptr) unbind_miniport_stack;
    
    // [UnbindOnAttach@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa6cc0, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfbf00, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10895c, 0x1e858 bytes
    // ndis.sys PAGE:0xfc428, 0x1d2c0 bytes
    //
    _n4(sdk::unknown_ptr) unbind_on_attach;
    
    // [UnbindOnDetach@BindRules@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa6b5c, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfbd9c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x109074, 0x1e858 bytes
    // ndis.sys PAGE:0xfc2c4, 0x1d2c0 bytes
    //
    _n5(sdk::unknown_ptr) unbind_on_detach;
};
#include "magic/api.end.hpp"
