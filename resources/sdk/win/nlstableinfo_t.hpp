#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/cptableinfo_t.hpp"

#include "magic/nlstableinfo_t.start.hpp"
namespace win
{
    // [struct _NLSTABLEINFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct nlstableinfo_t                              
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                             
        _m00 struct nt::cptableinfo_t oem_table_info;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OemTableInfo
        _m01 struct nt::cptableinfo_t ansi_table_info;   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .AnsiTableInfo
        _m02 wchar_t*                 upper_case_table;  //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .UpperCaseTable
        _m03 wchar_t*                 lower_case_table;  //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .LowerCaseTable
                                                       
        SDK_NONVOL_PROPERTIES( "_NLSTABLEINFO.$", 0x90, true, 0x1d79fd81429ecdf0 );                 
        SDK_FIXED_SIZE( nlstableinfo_t, 0x90 );                 
    };                                                 
};
#include "magic/nlstableinfo_t.end.hpp"
SDK_VERIFY( struct win::nlstableinfo_t, 0x90 );
