#pragma once
#include <sdkgen/support_library.hpp>

namespace iop
{
    // [enum _IOP_MC_BUFFER_ENTRY_FLAGS]
    //  Windows 11
    //
    enum class mc_buffer_entry_flags_t : int32_t
    {                                           
        unlock =         0x1,                     // Windows 11
        signal_rundown = 0x2,                     // Windows 11
        cleaned_up =     0x4,                     // Windows 11
    };                                          
};
