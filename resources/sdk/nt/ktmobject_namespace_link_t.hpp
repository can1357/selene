#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_links_t.hpp"

#include "magic/ktmobject_namespace_link_t.start.hpp"
namespace nt
{
    // [struct _KTMOBJECT_NAMESPACE_LINK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktmobject_namespace_link_t             
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                        
        _m00 struct rtl::balanced_links_t links;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 uint8_t                      expired;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Expired
                                                  
        SDK_MAGIC_PROPERTIES( "_KTMOBJECT_NAMESPACE_LINK.$", 0x28, true, 0xba19538dbf13f6cf );        
        SDK_FIXED_SIZE( ktmobject_namespace_link_t, 0x28 );        
    };                                            
};
#include "magic/ktmobject_namespace_link_t.end.hpp"
SDK_VERIFY( struct nt::ktmobject_namespace_link_t, 0x28 );
