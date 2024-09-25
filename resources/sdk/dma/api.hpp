#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dma
{
    // [DmaDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d650, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4bcc8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc63db0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4bca8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) dispatch;
    
    // [DmaNonworkingListDev]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys .data:0x247c9, 0x1d08 bytes
    // pci.sys .data:0x35bea, 0x1cf0 bytes
    // pci.sys .data:0x39c8a, 0x1cf0 bytes
    // pci.sys .data:0x33bea, 0x1cf0 bytes
    //
    _m1(sdk::unknown_ptr) nonworking_list_dev;
};
#include "magic/api.end.hpp"
