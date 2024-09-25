#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxUsbPipeMaxTransferSize]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class usb_pipe_max_transfer_size_t : int32_t
    {                                                
        control_max_transfer_size =    0x1000,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low_speed_max_transfer_size =  0x40000,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        high_speed_max_transfer_size = 0x200000,       // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
