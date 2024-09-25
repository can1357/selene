#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::wil::details_abi
{
    // [g_pProcessLocalData@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe38, 0x17e70 bytes
    // dxgi.dll .data:0xcbe38, 0x17e70 bytes
    // dxgi.dll .data:0xcaed8, 0x18b10 bytes
    // dxgi.dll .data:0xccea8, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) g_p_process_local_data;
    
    // [GetThreadLocalDataCache@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x44990, 0x17e70 bytes
    // dxgi.dll .text:0x44a80, 0x17e70 bytes
    // dxgi.dll .text:0x4fe04, 0x18b10 bytes
    // dxgi.dll .text:0x45af0, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) get_thread_local_data_cache;
    
    // [RecordWnfUsageIndex@details_abi@wil]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ad70, 0x17e70 bytes
    // dxgi.dll .text:0x1b080, 0x17e70 bytes
    // dxgi.dll .text:0x9948, 0x18b10 bytes
    // dxgi.dll .text:0x16600, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) record_wnf_usage_index;
};
#include "magic/api.end.hpp"
