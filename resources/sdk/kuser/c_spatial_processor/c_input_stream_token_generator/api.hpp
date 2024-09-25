#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_spatial_processor::c_input_stream_token_generator
{
    // [GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xe8fd0, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) get_next_input_stream_token;
    
    // [nextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2a89e0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) next_input_stream_token;
};
#include "magic/api.end.hpp"
