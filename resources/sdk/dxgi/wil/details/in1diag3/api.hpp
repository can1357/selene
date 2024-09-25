#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details::in1diag3
{
    // [Return_Win32@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7d0dc, 0x17e70 bytes
    // dxgi.dll .text:0x7d25c, 0x17e70 bytes
    // dxgi.dll .text:0x7dcb4, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) return_win32;
    
    // [_FailFast_GetLastError@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45fa4, 0x17e70 bytes
    // dxgi.dll .text:0x46094, 0x17e70 bytes
    // dxgi.dll .text:0x51480, 0x18b10 bytes
    // dxgi.dll .text:0x47464, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) fail_fast_get_last_error;
    
    // [_FailFast_Hr@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5aff4, 0x17e70 bytes
    // dxgi.dll .text:0x5b0e4, 0x17e70 bytes
    // dxgi.dll .text:0x66d0c, 0x18b10 bytes
    // dxgi.dll .text:0x5c5b4, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) fail_fast_hr;
    
    // [_FailFastImmediate_Unexpected@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45f94, 0x17e70 bytes
    // dxgi.dll .text:0x46084, 0x17e70 bytes
    // dxgi.dll .text:0x51470, 0x18b10 bytes
    // dxgi.dll .text:0x47454, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) fail_fast_immediate_unexpected;
    
    // [FailFast_Unexpected@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4427c, 0x17e70 bytes
    // dxgi.dll .text:0x4436c, 0x17e70 bytes
    // dxgi.dll .text:0x4f64c, 0x18b10 bytes
    // dxgi.dll .text:0x453dc, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) fail_fast_unexpected;
    
    // [_FailFast_Unexpected@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x45fc4, 0x17e70 bytes
    // dxgi.dll .text:0x460b4, 0x17e70 bytes
    // dxgi.dll .text:0x4f64c, 0x18b10 bytes
    // dxgi.dll .text:0x47484, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) fail_fast_unexpected_;
    
    // [_Log_Hr@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7b3d0, 0x17e70 bytes
    // dxgi.dll .text:0x7b500, 0x17e70 bytes
    // dxgi.dll .text:0x86c60, 0x18b10 bytes
    // dxgi.dll .text:0x7c930, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) log_hr;
    
    // [Return_GetLastError@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x456d4, 0x17e70 bytes
    // dxgi.dll .text:0x457c4, 0x17e70 bytes
    // dxgi.dll .text:0x50a84, 0x18b10 bytes
    // dxgi.dll .text:0x46b94, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) return_get_last_error;
    
    // [Return_Hr@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x456f4, 0x17e70 bytes
    // dxgi.dll .text:0x457e4, 0x17e70 bytes
    // dxgi.dll .text:0x50aa4, 0x18b10 bytes
    // dxgi.dll .text:0x46bb4, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) return_hr;
    
    // [Return_NtStatus@in1diag3@details@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7d0b8, 0x17e70 bytes
    // dxgi.dll .text:0x7d238, 0x17e70 bytes
    // dxgi.dll .text:0x8d9ac, 0x18b10 bytes
    // dxgi.dll .text:0x7dc90, 0x17e70 bytes
    //
    _m9(sdk::unknown_ptr) return_nt_status;
};
#include "magic/api.end.hpp"
