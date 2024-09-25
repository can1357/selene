#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _COPYFILE2_MESSAGE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class copyfile2_message_type_t : int32_t
    {                                            
        none =            0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chunk_started =   0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        chunk_finished =  0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stream_started =  0x3,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        stream_finished = 0x4,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        poll_continue =   0x5,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        error =           0x6,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =             0x7,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
