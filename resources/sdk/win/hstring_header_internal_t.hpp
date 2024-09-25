#pragma once
#include <sdkgen/support_library.hpp>
#include "windows_runtime_hstring_flags_t.hpp"

#include "magic/hstring_header_internal_t.start.hpp"
namespace win
{
    // [struct HSTRING_HEADER_INTERNAL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hstring_header_internal_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                        
        _m00 enum win::windows_runtime_hstring_flags_t flags;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .flags
        _m01 uint32_t                                  length;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .length
        _m02 uint32_t                                  padding1;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .padding1
        _m03 uint32_t                                  padding2;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .padding2
        _m04 const wchar_t*                            string_ref;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .stringRef
                                                                  
        SDK_MAGIC_PROPERTIES( "HSTRING_HEADER_INTERNAL.$", 0x18, true, 0x11cbddc29608c94d );           
        SDK_FIXED_SIZE( hstring_header_internal_t, 0x18 );           
    };                                                            
};
#include "magic/hstring_header_internal_t.end.hpp"
SDK_VERIFY( struct win::hstring_header_internal_t, 0x18 );
