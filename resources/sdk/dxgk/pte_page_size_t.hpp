#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk
{
    // [enum _DXGK_PTE_PAGE_SIZE]
    //  WDK 10
    //
    enum class pte_page_size_t : int32_t
    {                                   
        page_4kb =  0x0,                  // WDK 10
        page_64kb = 0x1,                  // WDK 10
    };                                  
};
