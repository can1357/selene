#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace pix
{
    // [PIXBeginCapture]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x65020, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) begin_capture;
    
    // [PIXEndCapture]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x65030, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) end_capture;
    
    // [PIXGetCaptureState]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x65040, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) get_capture_state;
};
#include "magic/api.end.hpp"
