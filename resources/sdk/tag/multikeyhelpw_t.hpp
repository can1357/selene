#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/multikeyhelpw_t.start.hpp"
namespace tag
{
    // [struct tagMULTIKEYHELPW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct multikeyhelpw_t                       
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 uint32_t               mk_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mkSize
        _m01 wchar_t                mk_keylist;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .mkKeylist
        _m02 sdk::array<wchar_t, 1> sz_keyphrase;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .szKeyphrase
                                                 
        SDK_MAGIC_PROPERTIES( "tagMULTIKEYHELPW.$", 0x8, true, 0x6e514e204104bf46 );             
        SDK_FIXED_SIZE( multikeyhelpw_t, 0x8 );             
    };                                           
};
#include "magic/multikeyhelpw_t.end.hpp"
SDK_VERIFY( struct tag::multikeyhelpw_t, 0x8 );
