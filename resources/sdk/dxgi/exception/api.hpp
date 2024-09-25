#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::exception
{
    // [??0exception@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2c028, 0x18b10 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0exception@@QEAA@AEBQEBD@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24c89, 0x17e70 bytes
    // dxgi.dll .text:0x24f89, 0x17e70 bytes
    // dxgi.dll .text:0x2c1c7, 0x18b10 bytes
    // dxgi.dll .text:0x25da9, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??0exception@@QEAA@AEBV0@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24af8, 0x17e70 bytes
    // dxgi.dll .text:0x24df8, 0x17e70 bytes
    // dxgi.dll .text:0x2c034, 0x18b10 bytes
    // dxgi.dll .text:0x25c18, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance__;
    
    // [??1exception@@UEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24aec, 0x17e70 bytes
    // dxgi.dll .text:0x24dec, 0x17e70 bytes
    // dxgi.dll .text:0x2c01c, 0x18b10 bytes
    // dxgi.dll .text:0x25c0c, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [what@exception]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24bf0, 0x17e70 bytes
    // dxgi.dll .text:0x24ef0, 0x17e70 bytes
    // dxgi.dll .text:0x2c130, 0x18b10 bytes
    // dxgi.dll .text:0x25d10, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) what;
};
#include "magic/api.end.hpp"
