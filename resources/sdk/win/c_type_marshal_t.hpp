#pragma once
#include <sdkgen/support_library.hpp>
#include "midl_stub_desc_t.hpp"

#include "magic/c_type_marshal_t.start.hpp"
namespace win
{
    // [class CTypeMarshal]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_type_marshal_t                                
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                
        _m00 int32_t                      c_refs;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cRefs
        _m01 uint32_t                     offset;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._offset
        _m02 uint32_t                     length;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._length
        _m03 const uint8_t*               p_format_string;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pFormatString
        _m04 struct win::midl_stub_desc_t stub_desc;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._StubDesc
                                                          
        SDK_MAGIC_PROPERTIES( "CTypeMarshal.$", 0xc0, true, 0x7f0156576c6c3be0 );                
        SDK_FIXED_SIZE( c_type_marshal_t, 0xc0 );                
    };                                                    
};
#include "magic/c_type_marshal_t.end.hpp"
SDK_VERIFY( class win::c_type_marshal_t, 0xc0 );
