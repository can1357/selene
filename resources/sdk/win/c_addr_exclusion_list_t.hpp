#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_addr_exclusion_list_t.start.hpp"
namespace win
{
    // [class CAddrExclusionList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_addr_exclusion_list_t     
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                            
        _m00 int32_t   l_refs;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._lRefs
        _m01 uint32_t  dw_cursor;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._dwCursor
        _m02 uint32_t  dw_num_strings;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._dwNumStrings
        _m03 wchar_t** ppsz_strings;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._ppszStrings
                                      
        SDK_MAGIC_PROPERTIES( "CAddrExclusionList.$", 0x20, true, 0x97a9a6706bf92f8d );               
        SDK_FIXED_SIZE( c_addr_exclusion_list_t, 0x20 );               
    };                                
};
#include "magic/c_addr_exclusion_list_t.end.hpp"
SDK_VERIFY( class win::c_addr_exclusion_list_t, 0x20 );
