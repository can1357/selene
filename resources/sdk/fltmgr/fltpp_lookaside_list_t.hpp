#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct npaged_lookaside_list_t; }

#include "magic/fltpp_lookaside_list_t.start.hpp"
namespace fltmgr
{
    // [struct _FLTPP_LOOKASIDE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fltpp_lookaside_list_t                  
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                                         
        _m00 struct nt::npaged_lookaside_list_t* p;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .P
        _m01 struct nt::npaged_lookaside_list_t* l;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .L
                                                   
        SDK_MAGIC_PROPERTIES( "_FLTPP_LOOKASIDE_LIST.$", 0x10, true, 0x8aace7e4b3835d68 );  
        SDK_FIXED_SIZE( fltpp_lookaside_list_t, 0x10 );  
    };                                             
};
#include "magic/fltpp_lookaside_list_t.end.hpp"
SDK_VERIFY( struct fltmgr::fltpp_lookaside_list_t, 0x10 );
