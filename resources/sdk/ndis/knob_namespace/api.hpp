#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::knob_namespace
{
    // [AddKnobCollection@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x112d34, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) add_knob_collection;
    
    // [BuildCollection@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x112e04, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) build_collection;
    
    // [ClearKnobEphemeralValue@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x132870, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) clear_knob_ephemeral_value;
    
    // [ClearKnobStoreValue@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x132904, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) clear_knob_store_value;
    
    // [??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x11447c, 0x1e858 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [??1KnobNamespace@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x132734, 0x1e858 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [EnumerateKnobs@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x132a78, 0x1e858 bytes
    //
    _m6(sdk::unknown_ptr) enumerate_knobs;
    
    // [FindById@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x132b14, 0x1e858 bytes
    //
    _m7(sdk::unknown_ptr) find_by_id;
    
    // [FindKnobByName@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x132b64, 0x1e858 bytes
    //
    _m8(sdk::unknown_ptr) find_knob_by_name;
    
    // [InitializeSubsystem@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys INIT:0x152078, 0x1e858 bytes
    //
    _m9(sdk::unknown_ptr) initialize_subsystem;
    
    // [Ioctl@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x132bf4, 0x1e858 bytes
    //
    _n0(sdk::unknown_ptr) ioctl;
    
    // [QueryKnobInformation@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x132f48, 0x1e858 bytes
    //
    _n1(sdk::unknown_ptr) query_knob_information;
    
    // [SetKnobEphemeralValue@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x133014, 0x1e858 bytes
    //
    _n2(sdk::unknown_ptr) set_knob_ephemeral_value;
    
    // [SetKnobStoreValue@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1330ec, 0x1e858 bytes
    //
    _n3(sdk::unknown_ptr) set_knob_store_value;
    
    // [UpdateKnobs@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1331d0, 0x1e858 bytes
    //
    _n4(sdk::unknown_ptr) update_knobs;
    
    // [UpdateSingleKnob@KnobNamespace]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1332bc, 0x1e858 bytes
    //
    _n5(sdk::unknown_ptr) update_single_knob;
};
#include "magic/api.end.hpp"
