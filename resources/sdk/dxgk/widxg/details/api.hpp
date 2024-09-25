#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::widxg::details
{
    // [DereferenceObject@details@widxg]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1ee70, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) dereference_object;
};
#include "magic/api.end.hpp"
