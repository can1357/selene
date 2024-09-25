#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxChildListIteratorIndexValues]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class child_list_iterator_index_values_t : int32_t
    {                                                      
        description_index =  0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        modification_index = 0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
