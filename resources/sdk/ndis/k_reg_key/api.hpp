#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::k_reg_key
{
    // [QueryValueGuid@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xa8e1c, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) query_value_guid;
    
    // [QueryValueUlong64@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x112c30, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) query_value_ulong64;
    
    // [SetValueBlob@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xe3894, 0x1c8a8 bytes
    //
    _m2(sdk::unknown_ptr) set_value_blob;
    
    // [SetValueUlong64@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x12cbd8, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) set_value_ulong64;
    
    // [??1KRegKey@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // ndis.sys PAGE:0xf8420, 0x1d2c0 bytes
    // ndis.sys PAGE:0xf8920, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [DeleteValue@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xe3824, 0x1c8a8 bytes
    // ndis.sys PAGE:0x121d38, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12cb48, 0x1e858 bytes
    // ndis.sys PAGE:0x122238, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) delete_value;
    
    // [GetSubkeyName@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa8f80, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1085b8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x110fa4, 0x1e858 bytes
    // ndis.sys PAGE:0x108ad8, 0x1d2c0 bytes
    //
    _m6(sdk::unknown_ptr) get_subkey_name;
    
    // [Open@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa8a6c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x101958, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10e318, 0x1e858 bytes
    // ndis.sys PAGE:0x101e78, 0x1d2c0 bytes
    //
    _m7(sdk::unknown_ptr) open;
    
    // [QueryValueBoolean@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa89c8, 0x1c8a8 bytes
    // ndis.sys PAGE:0x108048, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10e084, 0x1e858 bytes
    // ndis.sys PAGE:0x108568, 0x1d2c0 bytes
    //
    _m8(sdk::unknown_ptr) query_value_boolean;
    
    // [QueryValueString@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa8e98, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1000c0, 0x1d2c0 bytes
    // ndis.sys PAGE:0x104afc, 0x1e858 bytes
    // ndis.sys PAGE:0x1005e0, 0x1d2c0 bytes
    //
    _m9(sdk::unknown_ptr) query_value_string;
    
    // [QueryValueUlong@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa8f0c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1074f8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10e0e4, 0x1e858 bytes
    // ndis.sys PAGE:0x107a98, 0x1d2c0 bytes
    //
    _n0(sdk::unknown_ptr) query_value_ulong;
    
    // [QueryValueUshort@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa8d80, 0x1c8a8 bytes
    // ndis.sys PAGE:0x107610, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10dc38, 0x1e858 bytes
    // ndis.sys PAGE:0x107bb0, 0x1d2c0 bytes
    //
    _n1(sdk::unknown_ptr) query_value_ushort;
    
    // [SetValueUlong@KRegKey]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xe3920, 0x1c8a8 bytes
    // ndis.sys PAGE:0x121dd4, 0x1d2c0 bytes
    // ndis.sys PAGE:0x111944, 0x1e858 bytes
    // ndis.sys PAGE:0x1222d4, 0x1d2c0 bytes
    //
    _n2(sdk::unknown_ptr) set_value_ulong;
};
#include "magic/api.end.hpp"
