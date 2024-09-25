#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace gxp
{
    // [GxpAdjustRectangleToFrameBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x397654, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3af138, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x398b14, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) adjust_rectangle_to_frame_buffer;
    
    // [GxpGetRotatedPixelOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5bf548, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x65bd98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5be3b8, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) get_rotated_pixel_offset;
    
    // [GxpBitsToBytes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x127e28, 0x32828 bytes
    // ntoskrnl.exe .text:0x397bfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b1708, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3990bc, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) bits_to_bytes;
    
    // [GxpReadFrameBufferPixels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEBGFX:0x728d4c, 0x32828 bytes
    // ntoskrnl.exe PAGEBGFX:0x9efa40, 0x1fe000 bytes
    // ntoskrnl.exe PAGEBGFX:0xad8548, 0x1fd000 bytes
    // ntoskrnl.exe PAGEBGFX:0x9eea40, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) read_frame_buffer_pixels;
    
    // [GxpWriteFrameBufferPixels]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12594c, 0x32828 bytes
    // ntoskrnl.exe .text:0x397428, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aeeec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3988e8, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) write_frame_buffer_pixels;
};
#include "magic/api.end.hpp"
