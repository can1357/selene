#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_loader
{
    // [??0KLoader@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x112480, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [DereferenceKModule@KLoader]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x13435c, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) dereference_k_module;
    
    // [DereferenceModule@KLoader]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x13446c, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) dereference_module;
    
    // [FindModuleByGuidLocked@KLoader]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x134510, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) find_module_by_guid_locked;
    
    // [ReferenceKModule@KLoader]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1349b4, 0x1e858 bytes
    //
    _m4(sdk::unknown_ptr) reference_k_module;
    
    // [ReferenceModule@KLoader]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x134b24, 0x1e858 bytes
    //
    _m5(sdk::unknown_ptr) reference_module;
    
    // [RegisterModule@KLoader]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x134c8c, 0x1e858 bytes
    //
    _m6(sdk::unknown_ptr) register_module;
};
#include "magic/api.end.hpp"
