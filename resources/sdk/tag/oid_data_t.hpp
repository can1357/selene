#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/oid_data_t.start.hpp"
namespace tag
{
    // [struct tagOIDData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct oid_data_t                        
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 const struct nt::guid_t* pmoid;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pmoid
        _m01 uint32_t                 apt_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .aptID
                                             
        SDK_MAGIC_PROPERTIES( "tagOIDData.$", 0x10, true, 0x813345928091083c );       
        SDK_FIXED_SIZE( oid_data_t, 0x10 );       
    };                                       
};
#include "magic/oid_data_t.end.hpp"
SDK_VERIFY( struct tag::oid_data_t, 0x10 );
