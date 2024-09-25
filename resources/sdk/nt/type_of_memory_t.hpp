#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _TYPE_OF_MEMORY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class type_of_memory_t : int32_t
    {                                    
        exception_block =        0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_block =           0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        free =                   0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bad =                    0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        loaded_program =         0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firmware_temporary =     0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firmware_permanent =     0x6,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        osloader_heap =          0x7,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        osloader_stack =         0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        system_code =            0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hal_code =               0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        boot_driver =            0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        console_in_driver =      0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        console_out_driver =     0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        startup_dpc_stack =      0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        startup_kernel_stack =   0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        startup_panic_stack =    0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        startup_pcr_page =       0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        startup_pdr_page =       0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        registry_data =          0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        memory_data =            0x14,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        nls_data =               0x15,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        special_memory =         0x16,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        bbt_memory =             0x17,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        zero =                   0x18,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        xip_rom =                0x19,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        hal_cached_memory =      0x1a,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        large_page_filler =      0x1b,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error_log_memory =       0x1c,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        vsm_memory =             0x1d,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firmware_code =          0x1e,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firmware_data =          0x1f,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firmware_reserved =      0x20,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enclave_memory =         0x21,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        firmware_ksr =           0x22,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enclave_ksr =            0x23,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //maximum =              0x23,     // Windows 10 v1607
        sk_memory =              0x24,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sk_firmware_reserved =   0x25,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_space_memory_zeroed = 0x26,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_space_memory_free =   0x27,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_space_memory_ksr =    0x28,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_shadow_stack =    0x29,     // Windows 11
        maximum =                0x29,     // Windows 10 v2004, Windows 10 v20H2
        isolated_host_visible =  0x2a,     // Windows 11
        isolated_ksr =           0x2b,     // Windows 11
        //maximum =              0x2c,     // Windows 11
    };                                   
};
