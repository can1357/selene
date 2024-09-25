#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::s_adapter_desc
{
    // [PerfClass@SAdapterDesc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x11f5c, 0x17e70 bytes
    // dxgi.dll .text:0x126b8, 0x17e70 bytes
    // dxgi.dll .text:0xdbc0, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) perf_class;
    
    // [Class@SAdapterDesc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x11608, 0x17e70 bytes
    // dxgi.dll .text:0x11638, 0x17e70 bytes
    // dxgi.dll .text:0x13a98, 0x18b10 bytes
    // dxgi.dll .text:0xcae8, 0x17e70 bytes
    //
    _m1(sdk::unknown_ptr) _class;
    
    // [??0SAdapterDesc@@QEAA@AEBU0@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x14fec, 0x17e70 bytes
    // dxgi.dll .text:0x1524c, 0x17e70 bytes
    // dxgi.dll .text:0x10300, 0x18b10 bytes
    // dxgi.dll .text:0x1075c, 0x17e70 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??0SAdapterDesc@@QEAA@$$QEAU0@@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x118b4, 0x17e70 bytes
    // dxgi.dll .text:0x118e4, 0x17e70 bytes
    // dxgi.dll .text:0x13d88, 0x18b10 bytes
    // dxgi.dll .text:0xcd94, 0x17e70 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance_;
    
    // [??0SAdapterDesc@@QEAA@PEAU_D3DKMT_ADAPTERINFO@@AEBUUserPreferredAdapterId@@_NP6AJPEBU_D3DKMT_QUERYADAPTERINFO@@@ZP6AJPEAU_D3DKMT_QUERYVIDEOMEMORYINFO@@@ZKK@Z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x153f0, 0x17e70 bytes
    // dxgi.dll .text:0x15650, 0x17e70 bytes
    // dxgi.dll .text:0x10740, 0x18b10 bytes
    // dxgi.dll .text:0x10b60, 0x17e70 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance__;
    
    // [??1SAdapterDesc@@QEAA@XZ]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5dc88, 0x17e70 bytes
    // dxgi.dll .text:0x5dd78, 0x17e70 bytes
    // dxgi.dll .text:0x69918, 0x18b10 bytes
    // dxgi.dll .text:0x5f1ac, 0x17e70 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [FillInDesc@SAdapterDesc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x15b40, 0x17e70 bytes
    // dxgi.dll .text:0x15da0, 0x17e70 bytes
    // dxgi.dll .text:0x10ea0, 0x18b10 bytes
    // dxgi.dll .text:0x112b0, 0x17e70 bytes
    //
    _m6(sdk::unknown_ptr) fill_in_desc;
    
    // [GetAdapterIndexByGpuPreference@SAdapterDesc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x75b08, 0x17e70 bytes
    // dxgi.dll .text:0x75c18, 0x17e70 bytes
    // dxgi.dll .text:0x80d74, 0x18b10 bytes
    // dxgi.dll .text:0x77048, 0x17e70 bytes
    //
    _m7(sdk::unknown_ptr) get_adapter_index_by_gpu_preference;
    
    // [IsSoftware@SAdapterDesc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x167f8, 0x17e70 bytes
    // dxgi.dll .text:0x16a58, 0x17e70 bytes
    // dxgi.dll .text:0x1b708, 0x18b10 bytes
    // dxgi.dll .text:0x11f68, 0x17e70 bytes
    //
    _m8(sdk::unknown_ptr) is_software;
};
#include "magic/api.end.hpp"
