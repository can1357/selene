#pragma once
#include <sdkgen/support_library.hpp>
#include "mmsecure_flags_t.hpp"

#include "magic/mmaddress_list_t.start.hpp"
namespace nt
{
    // [struct _MMADDRESS_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct mmaddress_list_t                         
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2           
        //                                          
        _m00 struct nt::mmsecure_flags_t flags;       //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                    flags_long;  //{ +0x0000    +0x0000    +0x0000    } | .FlagsLong
        _m02 void*                       start_va;    //{ +0x0000    +0x0000    +0x0000    } | .StartVa
        _m03 void*                       end_va;      //{ +0x0008    +0x0008    +0x0008    } | .EndVa
                                                    
        SDK_MAGIC_PROPERTIES( "_MMADDRESS_LIST.$", 0x10, true, 0x9785f571717faad6 );           
        SDK_FIXED_SIZE( mmaddress_list_t, 0x10 );           
    };                                              
};
#include "magic/mmaddress_list_t.end.hpp"
SDK_VERIFY( struct nt::mmaddress_list_t, 0x10 );
