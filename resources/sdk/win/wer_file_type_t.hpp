#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _WER_FILE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wer_file_type_t : int32_t
    {                                   
        microdump =      0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        minidump =       0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        heapdump =       0x3,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_document =  0x4,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        other =          0x5,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        triagedump =     0x6,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        custom_dump =    0x7,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        auxiliary_dump = 0x8,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        etl_trace =      0x9,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =            0xa,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
