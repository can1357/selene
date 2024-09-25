#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_D3COLD_INTERFACE_REQUEST]
    //  Windows 11
    //
    enum class d3cold_interface_request_t : int32_t 
    {                                               
        interface_request_uninitialized =    0x0,     // Windows 11
        support_interface_request_disabled = 0x1,     // Windows 11
        support_interface_request_enabled =  0x2,     // Windows 11
    };                                              
};
