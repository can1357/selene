#pragma once
#include <sdkgen/support_library.hpp>

namespace rtlp { struct curdir_ref_t; }

#include "magic/relative_name_u_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RELATIVE_NAME_U]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct relative_name_u_t                                 
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                   
        _m00 nt::unicode_view           relative_name;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RelativeName
        _m01 void*                      containing_directory;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ContainingDirectory
        _m02 struct rtlp::curdir_ref_t* cur_dir_ref;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CurDirRef
                                                             
        SDK_NONVOL_PROPERTIES( "_RTL_RELATIVE_NAME_U.$", 0x20, true, 0x13c93bb5e9044236 );                     
        SDK_FIXED_SIZE( relative_name_u_t, 0x20 );                     
    };                                                       
};
#include "magic/relative_name_u_t.end.hpp"
SDK_VERIFY( struct rtl::relative_name_u_t, 0x20 );
