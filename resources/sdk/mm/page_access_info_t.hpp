#pragma once
#include <sdkgen/support_library.hpp>
#include "page_access_info_flags_t.hpp"

#include "magic/page_access_info_t.start.hpp"
namespace mm
{
    // [struct _MM_PAGE_ACCESS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct page_access_info_t                                     
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                        
        _m00 union mm::page_access_info_flags_t flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint64_t                           file_offset;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m02 void*                              virtual_address;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m03 void*                              pointer_proto_pte;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PointerProtoPte
                                                                  
        SDK_MAGIC_PROPERTIES( "_MM_PAGE_ACCESS_INFO.$", 0x8, true, 0x8f4a83aee72960e8 );                  
        SDK_FIXED_SIZE( page_access_info_t, 0x8 );                  
    };                                                            
};
#include "magic/page_access_info_t.end.hpp"
SDK_VERIFY( struct mm::page_access_info_t, 0x8 );
