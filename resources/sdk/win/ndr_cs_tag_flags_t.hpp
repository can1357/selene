#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr_cs_tag_flags_t.start.hpp"
namespace win
{
    // [struct _NDR_CS_TAG_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_cs_tag_flags_t
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 uint1_t s_tag;    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .STag
        _m01 uint1_t dr_tag;   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DRTag
        _m02 uint1_t r_tag;    //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .RTag
                             
        SDK_MAGIC_PROPERTIES( "_NDR_CS_TAG_FLAGS.$", 0x1, true, 0xd112c85032e4e1ad );       
        SDK_FIXED_SIZE( ndr_cs_tag_flags_t, 0x1 );       
    };                       
};
#include "magic/ndr_cs_tag_flags_t.end.hpp"
SDK_VERIFY( struct win::ndr_cs_tag_flags_t, 0x1 );
