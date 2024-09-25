#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::cdxgi_mutex_in_separate_thread
{
    // [??1CDXGIMutexInSeparateThread@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x8054, 0x17e70 bytes
    // dxgi.dll .text:0x8054, 0x17e70 bytes
    // dxgi.dll .text:0xc0f0, 0x18b10 bytes
    // dxgi.dll .text:0x1cc04, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyMutex@CDXGIMutexInSeparateThread]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x808c, 0x17e70 bytes
    // dxgi.dll .text:0x808c, 0x17e70 bytes
    // dxgi.dll .text:0xc078, 0x18b10 bytes
    // dxgi.dll .text:0x1cc3c, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) destroy_mutex;
    
    // [InitMutex@CDXGIMutexInSeparateThread]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4945c, 0x17e70 bytes
    // dxgi.dll .text:0x4954c, 0x17e70 bytes
    // dxgi.dll .text:0x546ec, 0x18b10 bytes
    // dxgi.dll .text:0x4a9dc, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) init_mutex;
    
    // [ProcessCommand@CDXGIMutexInSeparateThread]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x496e0, 0x17e70 bytes
    // dxgi.dll .text:0x497d0, 0x17e70 bytes
    // dxgi.dll .text:0x54980, 0x18b10 bytes
    // dxgi.dll .text:0x4ac60, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) process_command;
};
#include "magic/api.end.hpp"
