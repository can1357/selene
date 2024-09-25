#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::pdo_base_enum
{
    // [??0PDOBaseEnum@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9a0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3728, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9adc, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [CountPDOs@PDOBaseEnum]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x156390, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e48e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1591e0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) count_pd_os;
    
    // [EnumPDOs@PDOBaseEnum]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b9dd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2e3ae0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b9ea0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) enum_pd_os;
};
#include "magic/api.end.hpp"
