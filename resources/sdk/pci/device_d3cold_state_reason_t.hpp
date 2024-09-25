#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum PCI_DEVICE_D3COLD_STATE_REASON]
    //  Windows 11
    //
    enum class device_d3cold_state_reason_t : int32_t               
    {                                                               
        state_disabled_bit_index =                           0x1,     // Windows 11
        state_enabled_bit_index =                            0x2,     // Windows 11
        state_parent_root_port_s0_wake_supported_bit_index = 0x3,     // Windows 11
        reason_default_state_bit_index =                     0x8,     // Windows 11
        reason_inf_bit_index =                               0x9,     // Windows 11
        reason_interface_api_bit_index =                     0xa,     // Windows 11
    };                                                              
};
