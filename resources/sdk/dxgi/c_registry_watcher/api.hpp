#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::c_registry_watcher
{
    // [Cleanup@CRegistryWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xdc8c, 0x17e70 bytes
    // dxgi.dll .text:0xdcbc, 0x17e70 bytes
    // dxgi.dll .text:0x17a60, 0x18b10 bytes
    // dxgi.dll .text:0x9174, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) cleanup;
    
    // [??1CRegistryWatcher@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7ab68, 0x17e70 bytes
    // dxgi.dll .text:0x7ac98, 0x17e70 bytes
    // dxgi.dll .text:0x861f4, 0x18b10 bytes
    // dxgi.dll .text:0x7c0c8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [SetDWORDWatch@CRegistryWatcher]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xdc24, 0x17e70 bytes
    // dxgi.dll .text:0xdc54, 0x17e70 bytes
    // dxgi.dll .text:0x179f8, 0x18b10 bytes
    // dxgi.dll .text:0x910c, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) set_dword_watch;
};
#include "magic/api.end.hpp"
