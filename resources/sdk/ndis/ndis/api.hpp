#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::ndis
{
    // [UpperBindValueName@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys .rdata:0x75238, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) upper_bind_value_name;
    
    // [FilterListValueName@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x75060, 0x1c8a8 bytes
    // ndis.sys .rdata:0xc71d8, 0x1d2c0 bytes
    // ndis.sys .rdata:0xcd2b8, 0x1e858 bytes
    // ndis.sys .rdata:0xc71d8, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) filter_list_value_name;
    
    // [ProtocolListValueName@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .rdata:0x75050, 0x1c8a8 bytes
    // ndis.sys .rdata:0xc71c8, 0x1d2c0 bytes
    // ndis.sys .rdata:0xcd2a8, 0x1e858 bytes
    // ndis.sys .rdata:0xc71c8, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) protocol_list_value_name;
};
#include "magic/api.end.hpp"
