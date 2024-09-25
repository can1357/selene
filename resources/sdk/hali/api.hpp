#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace hali
{
    // [HaliWheaInitProcessorGenericSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x507858, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) whea_init_processor_generic_section;
    
    // [HaliInitializePlatformDebugTriggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d7470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5159f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d7360, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) initialize_platform_debug_triggers;
    
    // [HaliRunPlatformDebugTriggers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4d7520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x515aa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d7410, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) run_platform_debug_triggers;
    
    // [HaliAcpiMachineStateInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a680, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b06e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868520, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8270, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) acpi_machine_state_init;
    
    // [HaliAcpiQueryFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5acb0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x709df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711840, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) acpi_query_flags;
    
    // [HaliAcpiSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x5e20, 0x11e8 bytes
    // ntoskrnl.exe .text:0x381d50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x515b50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x382b10, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) acpi_sleep;
    
    // [HaliAcpiTimerCarry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) acpi_timer_carry;
    
    // [HaliAddInterruptRemapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x59f70, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x742f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed1e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74ab70, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) add_interrupt_remapping;
    
    // [HaliGetDmaAdapter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0xbcb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3751f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f4ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376570, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) get_dma_adapter;
    
    // [HaliGetInterruptTranslator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5a940, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7b49a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86eec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bc5e0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) get_interrupt_translator;
    
    // [HaliHaltSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29a40, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4b8910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4f6910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4b87e0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) halt_system;
    
    // [HaliHandlePCIConfigSpaceAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x29830, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4d0f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50f3a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4d0e10, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) handle_pci_config_space_access;
    
    // [HaliInitPnpDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5abf0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x7820d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x837410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78be70, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) init_pnp_driver;
    
    // [HaliInitPowerManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58400, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x78bcc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x795a60, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) init_power_management;
    
    // [HaliLocateHiberRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5f910, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x992da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa81b20, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x991db0, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) locate_hiber_ranges;
    
    // [HaliPciInterfaceReadConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3520, 0x11e8 bytes
    // ntoskrnl.exe .text:0x253450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303290, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) pci_interface_read_config;
    
    // [HaliPciInterfaceWriteConfig]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14950, 0x11e8 bytes
    // ntoskrnl.exe .text:0x379030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35a000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37a3b0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) pci_interface_write_config;
    
    // [HaliQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x58070, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x98cc40, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa737d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98b9e0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) query_system_information;
    
    // [HaliRemoveInterruptRemapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5cba0, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x741b30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x92f270, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749770, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) remove_interrupt_remapping;
    
    // [HaliSetMaxLegacyPciBusNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x14ff0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3a0000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a14c0, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) set_max_legacy_pci_bus_number;
    
    // [HaliSetPciErrorHandlerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x163f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) set_pci_error_handler_callback;
    
    // [HaliSetSystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5d0ec, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x8636c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x868c48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x861af4, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) set_system_information;
    
    // [HaliSetWakeAlarm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x5fef0, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x994e30, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa82380, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x993e40, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) set_wake_alarm;
};
#include "magic/api.end.hpp"
