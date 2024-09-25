#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum NDIS_DATA_PATH_TYPE]
    //  Windows 11
    //
    enum class data_path_type_t : int32_t
    {                                    
        send_path =             0x0,       // Windows 11
        send_complete_path =    0x1,       // Windows 11
        receive_path =          0x2,       // Windows 11
        receive_complete_path = 0x3,       // Windows 11
        data_path_count =       0x4,       // Windows 11
    };                                   
};
