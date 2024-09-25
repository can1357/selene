#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace efi
{
    // [EfiBootVariablesGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286b10, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x3a5e0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x12500, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3a920, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) boot_variables_guid;
    
    // [EfiDriverVariablesGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x286b20, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x3a5d0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x46b10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x3a910, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) driver_variables_guid;
    
    // [EfiCertRsa2048Guid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x312c0, 0x13a78 bytes
    // ci.dll .rdata:0x2a2f8, 0x13a78 bytes
    // ci.dll .rdata:0x312d8, 0x13a78 bytes
    //
    _m2(sdk::unknown_ptr) cert_rsa2048_guid;
    
    // [EfiCertSha256Guid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x31280, 0x13a78 bytes
    // ci.dll .rdata:0x2a2b8, 0x13a78 bytes
    // ci.dll .rdata:0x31298, 0x13a78 bytes
    //
    _m3(sdk::unknown_ptr) cert_sha256_guid;
    
    // [EfiCertSha384Guid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x312e0, 0x13a78 bytes
    // ci.dll .rdata:0x2a318, 0x13a78 bytes
    // ci.dll .rdata:0x312f8, 0x13a78 bytes
    //
    _m4(sdk::unknown_ptr) cert_sha384_guid;
    
    // [EfiCertSha512Guid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x312d0, 0x13a78 bytes
    // ci.dll .rdata:0x2a308, 0x13a78 bytes
    // ci.dll .rdata:0x312e8, 0x13a78 bytes
    //
    _m5(sdk::unknown_ptr) cert_sha512_guid;
    
    // [EfiCertX509Guid]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x312b0, 0x13a78 bytes
    // ci.dll .rdata:0x2a2e8, 0x13a78 bytes
    // ci.dll .rdata:0x312c8, 0x13a78 bytes
    //
    _m6(sdk::unknown_ptr) cert_x509_guid;
    
    // [EfiGlobalVariable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x312a0, 0x13a78 bytes
    // ci.dll .rdata:0x2a2d8, 0x13a78 bytes
    // ci.dll .rdata:0x312b8, 0x13a78 bytes
    //
    _m7(sdk::unknown_ptr) global_variable;
    
    // [EfiImageSecurityDatabaseVariable]
    // Ldr = [ci.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ci.dll .rdata:0x31290, 0x13a78 bytes
    // ci.dll .rdata:0x2a2c8, 0x13a78 bytes
    // ci.dll .rdata:0x312a8, 0x13a78 bytes
    //
    _m8(sdk::unknown_ptr) image_security_database_variable;
};
#include "magic/api.end.hpp"
