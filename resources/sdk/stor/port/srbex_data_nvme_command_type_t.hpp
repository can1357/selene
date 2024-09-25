#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum SRBEX_DATA_NVME_COMMAND_TYPE]
    //  Windows 11
    //
    enum class srbex_data_nvme_command_type_t : int32_t
    {                                                  
        nvm =   0x0,                                     // Windows 11
        admin = 0x1,                                     // Windows 11
    };                                                 
};
