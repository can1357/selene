#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::net_setup_property_bag
{
    // [??0NetSetupPropertyBag@@QEAA@AEAVKRegKey@@@Z]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xf8458, 0x1d2c0 bytes
    // ndis.sys PAGE:0x100048, 0x1e858 bytes
    // ndis.sys PAGE:0xf8958, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [OpenPropertyKey@NetSetupPropertyBag]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x1015a4, 0x1d2c0 bytes
    // ndis.sys PAGE:0x110140, 0x1e858 bytes
    // ndis.sys PAGE:0x101ac4, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) open_property_key;
    
    // [ReadBoolean@NetSetupPropertyBag]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x101804, 0x1d2c0 bytes
    // ndis.sys PAGE:0x110284, 0x1e858 bytes
    // ndis.sys PAGE:0x101d24, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) read_boolean;
    
    // [ReadGuid@NetSetupPropertyBag]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x100a24, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10f7e4, 0x1e858 bytes
    // ndis.sys PAGE:0x100f44, 0x1d2c0 bytes
    //
    _m3(sdk::unknown_ptr) read_guid;
    
    // [ReadString@NetSetupPropertyBag]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x100ae8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10ff88, 0x1e858 bytes
    // ndis.sys PAGE:0x101008, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) read_string;
    
    // [ReadStringArray@NetSetupPropertyBag]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x12222c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12d234, 0x1e858 bytes
    // ndis.sys PAGE:0x12272c, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) read_string_array;
    
    // [ReadUint32@NetSetupPropertyBag]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x10161c, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1101b8, 0x1e858 bytes
    // ndis.sys PAGE:0x101b3c, 0x1d2c0 bytes
    //
    _m6(sdk::unknown_ptr) read_uint32;
    
    // [ReadUint64@NetSetupPropertyBag]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x100210, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10e694, 0x1e858 bytes
    // ndis.sys PAGE:0x100730, 0x1d2c0 bytes
    //
    _m7(sdk::unknown_ptr) read_uint64;
};
#include "magic/api.end.hpp"
