#pragma once
#include <sdkgen/support_library.hpp>
#include "kmutant_t.hpp"
#include "../rtl/avl_table_t.hpp"

#include "magic/ktmobject_namespace_t.start.hpp"
namespace nt
{
    // [struct _KTMOBJECT_NAMESPACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktmobject_namespace_t                  
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 struct rtl::avl_table_t table;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Table
        _m01 struct nt::kmutant_t    mutex;         //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Mutex
        _m02 uint16_t                links_offset;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .LinksOffset
        _m03 uint16_t                guid_offset;   //{ +0x00a2    +0x00a2    +0x00a2    +0x00a2    } | .GuidOffset
        _m04 uint8_t                 expired;       //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .Expired
                                                  
        SDK_MAGIC_PROPERTIES( "_KTMOBJECT_NAMESPACE.$", 0xa8, true, 0x72c93d0a8ed22d7 );             
        SDK_FIXED_SIZE( ktmobject_namespace_t, 0xa8 );             
    };                                            
};
#include "magic/ktmobject_namespace_t.end.hpp"
SDK_VERIFY( struct nt::ktmobject_namespace_t, 0xa8 );
