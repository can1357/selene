#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/find_info_t.start.hpp"
namespace win
{
    // [struct _FIND_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct find_info_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                   
        _m00 uint32_t           ti_index;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .tiIndex
        _m01 uint32_t           ti_current;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .tiCurrent
        _m02 uint32_t           ti_end_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .tiEndIndex
        _m03 uint16_t           t_name;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .tName
        _m04 uint32_t           dw_index_rec;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwIndexRec
        _m05 uint32_t           dw_flags;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwFlags
        _m06 uint64_t           ull_key;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ullKey
        _m07 const wchar_t*     sz_name;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .szName
        _m08 uint32_t           dw_name;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwName
        _m09 struct nt::guid_t* pguid_name;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pguidName
                                             
        SDK_MAGIC_PROPERTIES( "_FIND_INFO.$", 0x28, true, 0x1eabad5358b4df1b );             
        SDK_FIXED_SIZE( find_info_t, 0x28 );             
    };                                       
};
#include "magic/find_info_t.end.hpp"
SDK_VERIFY( struct win::find_info_t, 0x28 );
