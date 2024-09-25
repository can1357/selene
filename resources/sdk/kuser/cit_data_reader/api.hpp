#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::cit_data_reader
{
    // [Read@CIT_DATA_READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfbad4, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) read;
    
    // [ReadOverflowUseData@CIT_DATA_READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfbb60, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) read_overflow_use_data;
    
    // [ReadProgramEntry@CIT_DATA_READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfbc18, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) read_program_entry;
    
    // [ReadProgramId@CIT_DATA_READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfbcb4, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) read_program_id;
    
    // [ReadProgramUseData@CIT_DATA_READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfbd60, 0x1eb80 bytes
    //
    _m4(sdk::unknown_ptr) read_program_use_data;
    
    // [ReadSystemData@CIT_DATA_READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfbdec, 0x1eb80 bytes
    //
    _m5(sdk::unknown_ptr) read_system_data;
    
    // [ValidateRange@CIT_DATA_READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfbea8, 0x1eb80 bytes
    //
    _m6(sdk::unknown_ptr) validate_range;
    
    // [ValidateString@CIT_DATA_READER]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xfbed4, 0x1eb80 bytes
    //
    _m7(sdk::unknown_ptr) validate_string;
};
#include "magic/api.end.hpp"
