#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_driver_store_copy
{
    // [??0CDriverStoreCopy@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25c328, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30256c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25c488, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CDriverStoreCopy@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25c378, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3025bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25c4d8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [EnumDirectory@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25d748, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x303b90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25d8a8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) enum_directory;
    
    // [EnumDriverFileLinks@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25d908, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x303d40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25da68, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) enum_driver_file_links;
    
    // [EnumSingleDriverKey@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25dc2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x304044, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25dd8c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) enum_single_driver_key;
    
    // [EnumSingleRegistry@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25dcd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3040f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25de38, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) enum_single_registry;
    
    // [GetNextHardLink@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25ddb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3041cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25df18, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_next_hard_link;
    
    // [InitializeSystem32Links@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25de4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x304264, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25dfac, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) initialize_system32_links;
    
    // [ProcessNextDirectory@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25e070, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3044a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25e1d0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) process_next_directory;
    
    // [ProcessNextFile@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25e128, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x304550, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25e288, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) process_next_file;
    
    // [ReadCurrentFile@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25e5ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3049f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25e74c, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) read_current_file;
    
    // [SetRootDirectory@CDriverStoreCopy]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x25e7ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x304b9c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25e90c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) set_root_directory;
};
#include "magic/api.end.hpp"
