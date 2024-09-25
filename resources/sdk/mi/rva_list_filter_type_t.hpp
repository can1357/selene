#pragma once
#include <sdkgen/support_library.hpp>

namespace mi
{
    // [enum _MI_RVA_LIST_FILTER_TYPE]
    //  Windows 11
    //
    enum class rva_list_filter_type_t : int32_t
    {                                          
        cfg_first = 0x0,                         // Windows 11
        cfg_valid = 0x0,                         // Windows 11
        cfg_last =  0x1,                         // Windows 11
        invalid =   0x2,                         // Windows 11
    };                                         
};
