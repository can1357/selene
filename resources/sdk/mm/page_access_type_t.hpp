#pragma once
#include <sdkgen/support_library.hpp>

namespace mm
{
    // [enum _MM_PAGE_ACCESS_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class page_access_type_t : int32_t
    {                                      
        pte_access_type =          0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cc_read_ahead_type =       0x1,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pfn_repurpose_type =       0x2,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        maximum_page_access_type = 0x3,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
