#pragma once
#include <sdkgen/support_library.hpp>
#include "syskind_t.hpp"
#include "../nt/guid_t.hpp"

#include "magic/tlibattr_t.start.hpp"
namespace tag
{
    // [struct tagTLIBATTR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tlibattr_t                            
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                       
        _m00 struct nt::guid_t   guid;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guid
        _m01 uint32_t            lcid;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lcid
        _m02 enum tag::syskind_t syskind;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .syskind
        _m03 uint16_t            w_major_ver_num;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .wMajorVerNum
        _m04 uint16_t            w_minor_ver_num;  //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .wMinorVerNum
        _m05 uint16_t            w_lib_flags;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .wLibFlags
                                                 
        SDK_MAGIC_PROPERTIES( "tagTLIBATTR.$", 0x20, true, 0x156db453e2a3b0b2 );                
        SDK_FIXED_SIZE( tlibattr_t, 0x20 );                
    };                                           
};
#include "magic/tlibattr_t.end.hpp"
SDK_VERIFY( struct tag::tlibattr_t, 0x20 );
