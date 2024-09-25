#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace rpc
{
    // [_RpcTransferSyntax_2_0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x17710, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) transfer_syntax_2_0;
    
    // [RpcNrpGetAddrInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1488, 0x15e38 bytes
    // afd.sys .text:0x4104, 0x15fb8 bytes
    // afd.sys .text:0x14504, 0x187f8 bytes
    // afd.sys .text:0x4104, 0x15fb8 bytes
    //
    _m1(sdk::unknown_ptr) nrp_get_addr_info;
    
    // [RpcNrpGetNameInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1c248, 0x15e38 bytes
    // afd.sys .text:0x1cf70, 0x15fb8 bytes
    // afd.sys .text:0x4c290, 0x187f8 bytes
    // afd.sys .text:0x1cf70, 0x15fb8 bytes
    //
    _m2(sdk::unknown_ptr) nrp_get_name_info;
    
    // [RpcStatusToNrpNtStatus]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1470, 0x15e38 bytes
    // afd.sys .text:0x40e4, 0x15fb8 bytes
    // afd.sys .text:0x144e4, 0x187f8 bytes
    // afd.sys .text:0x40e4, 0x15fb8 bytes
    //
    _m3(sdk::unknown_ptr) status_to_nrp_nt_status;
};
#include "magic/api.end.hpp"
