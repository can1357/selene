#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxDeviceCallbackFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_callback_flags_t : int32_t       
    {                                                  
        fxdevice_callback_in_prepare_hardware = 0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
