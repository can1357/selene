#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace x86bios
{
    // [x86BiosAllocateBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15570, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c6460, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e1540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7330, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) allocate_buffer;
    
    // [x86BiosBufferAllocated]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db08, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507dc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a58c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507dc, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) buffer_allocated;
    
    // [x86BiosCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7810, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e2a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392d70, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) call;
    
    // [x86BiosExecuteInterruptShadowed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x785c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x391d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39e2f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x392dc0, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) execute_interrupt_shadowed;
    
    // [x86BiosFrameBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ad10, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a578, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62328, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a558, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) frame_buffer;
    
    // [x86BiosFreeBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x155b0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c64b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e1b60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7380, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) free_buffer;
    
    // [x86BiosGetPciBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x388d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c9630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7a70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca520, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) get_pci_bus_data;
    
    // [x86BiosInitializeBiosEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7644, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c0050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d43d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0e60, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) initialize_bios_ex;
    
    // [x86BiosInitialized]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4d73a, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4c2b1, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc643a1, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c291, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) initialized;
    
    // [x86BiosIoMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ad30, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a598, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62348, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a578, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) io_memory;
    
    // [x86BiosIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ad08, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a570, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62320, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a550, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) io_space;
    
    // [x86BiosLowMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ad40, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a5a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62360, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a580, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) low_memory;
    
    // [x86BiosReadCmosPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x388f8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8034, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b97e0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) read_cmos_port;
    
    // [x86BiosReadCmosPortByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38970, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9990, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f80b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9860, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) read_cmos_port_byte;
    
    // [x86BiosReadIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x9410, 0x11e8 bytes
    // ntoskrnl.exe .text:0x395030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396090, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) read_io_space;
    
    // [x86BiosReadMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7ef0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3ba910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cd400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bb2c0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) read_memory;
    
    // [x86BiosReadPciAddressPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x389b8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b99dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8104, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b98ac, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) read_pci_address_port;
    
    // [x86BiosReadPciDataPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38a3c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c50ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3df60c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5e5c, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) read_pci_data_port;
    
    // [x86BiosScratchMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4ad18, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc4a580, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc62330, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4a560, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) scratch_memory;
    
    // [x86BiosSetPciBusData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38ac0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9940, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) set_pci_bus_data;
    
    // [x86BiosTransferLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db04, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a588, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507d8, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) transfer_length;
    
    // [x86BiosTransferMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4db10, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc507e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a590, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc507e0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) transfer_memory;
    
    // [x86BiosTranslateAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8730, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3934d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39fd00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x394530, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) translate_address;
    
    // [x86BiosWriteCmosPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38ae8, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9a98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f81b8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9968, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) write_cmos_port;
    
    // [x86BiosWriteCmosPortByte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38b58, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9b10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b99e0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) write_cmos_port_byte;
    
    // [x86BiosWriteIoSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x8170, 0x11e8 bytes
    // ntoskrnl.exe .text:0x394f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a31c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395f80, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) write_io_space;
    
    // [x86BiosWriteMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x7c30, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3bfd20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d5f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c0b30, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) write_memory;
    
    // [x86BiosWritePciAddressPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38ba0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c6864, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e2b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c7734, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) write_pci_address_port;
    
    // [x86BiosWritePciDataPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x38c20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b9b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f8284, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b9a30, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) write_pci_data_port;
};
#include "magic/api.end.hpp"
