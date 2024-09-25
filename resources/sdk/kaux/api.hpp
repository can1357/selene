#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kaux
{
    // [AuxKlibInitialize]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x27f38, 0x1a48 bytes
    // hidclass.sys PAGE:0x36524, 0x2bf0 bytes
    // hidclass.sys PAGE:0x3ab10, 0x2bf0 bytes
    // hidclass.sys PAGE:0x36524, 0x2bf0 bytes
    //
    _m0(sdk::function<int32_t()>*) klib_initialize;
    
    // [AuxKlibQueryModuleInformation]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x27f90, 0x1a48 bytes
    // hidclass.sys PAGE:0x36594, 0x2bf0 bytes
    // hidclass.sys PAGE:0x3ab80, 0x2bf0 bytes
    // hidclass.sys PAGE:0x36594, 0x2bf0 bytes
    //
    _m1(sdk::function<int32_t(uint32_t*, uint32_t, void*)>*) klib_query_module_information;
};
#include "magic/api.end.hpp"
