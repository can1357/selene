#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _FILE_KNOWN_FOLDER_TYPE]
    //  Windows 11
    //
    enum class file_known_folder_type_t : int32_t
    {                                            
        none =      0x0,                           // Windows 11
        desktop =   0x1,                           // Windows 11
        documents = 0x2,                           // Windows 11
        downloads = 0x3,                           // Windows 11
        music =     0x4,                           // Windows 11
        pictures =  0x5,                           // Windows 11
        videos =    0x6,                           // Windows 11
        max =       0x7,                           // Windows 11
        other =     0x7,                           // Windows 11
    };                                           
};
