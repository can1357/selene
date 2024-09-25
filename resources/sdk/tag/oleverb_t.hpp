#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/oleverb_t.start.hpp"
namespace tag
{
    // [struct tagOLEVERB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct oleverb_t                 
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 int32_t  l_verb;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lVerb
        _m01 wchar_t* lpsz_verb_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpszVerbName
        _m02 uint32_t fu_flags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .fuFlags
        _m03 uint32_t grf_attribs;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .grfAttribs
                                     
        SDK_MAGIC_PROPERTIES( "tagOLEVERB.$", 0x18, true, 0x47dbe98100201a47 );               
        SDK_FIXED_SIZE( oleverb_t, 0x18 );               
    };                               
};
#include "magic/oleverb_t.end.hpp"
SDK_VERIFY( struct tag::oleverb_t, 0x18 );
