#pragma once
#include <sdkgen/support_library.hpp>
#include "windows_runtime_hstring_flags_t.hpp"

#include "magic/string_opaque_t.start.hpp"
namespace win
{
    // [struct STRING_OPAQUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct string_opaque_t                                        
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                        
        _m00 enum win::windows_runtime_hstring_flags_t flags;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .flags
        _m01 uint32_t                                  length;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .length
        _m02 uint32_t                                  padding1;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .padding1
        _m03 uint32_t                                  padding2;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .padding2
        _m04 const wchar_t*                            string_ref;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .stringRef
        _m05 volatile int32_t                          refcount;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .refcount
        _m06 sdk::array<wchar_t, 1>                    string;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .string
                                                                  
        SDK_MAGIC_PROPERTIES( "STRING_OPAQUE.$", 0x20, true, 0xb40f8747a66ac576 );           
        SDK_FIXED_SIZE( string_opaque_t, 0x20 );                  
    };                                                            
};
#include "magic/string_opaque_t.end.hpp"
SDK_VERIFY( struct win::string_opaque_t, 0x20 );
