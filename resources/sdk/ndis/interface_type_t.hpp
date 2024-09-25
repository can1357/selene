#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_INTERFACE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class interface_type_t : int32_t      
    {                                          
        interface_internal =           0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_isa =                0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_eisa =               0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_mca =                0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_turbo_channel =      0x4,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_pci =                0x5,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_pc_mcia =            0x8,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_c_bus =              0x9,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_mpi_bus =            0xa,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_mpsa_bus =           0xb,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_processor_internal = 0xc,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_internal_power_bus = 0xd,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_pnpisa_bus =         0xe,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_pnp_bus =            0xf,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_usb =                0x10,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface_irda =               0x11,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface1394 =                0x12,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_interface_type =       0x13,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
