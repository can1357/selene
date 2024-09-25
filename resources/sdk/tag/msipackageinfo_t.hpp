#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/msipackageinfo_t.start.hpp"
namespace tag
{
    // [struct tagMSIPACKAGEINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct msipackageinfo_t                        
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 struct nt::guid_t guid_id;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guidID
        _m01 struct nt::guid_t guid_msi_package_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .guidMsiPackageID
        _m02 struct nt::guid_t guid_database_id;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .guidDatabaseID
        _m03 uint32_t          dw_package_flags;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwPackageFlags
                                                   
        SDK_MAGIC_PROPERTIES( "tagMSIPACKAGEINFO.$", 0x34, true, 0xf85739618de19450 );                    
        SDK_FIXED_SIZE( msipackageinfo_t, 0x34 );                    
    };                                             
};
#include "magic/msipackageinfo_t.end.hpp"
SDK_VERIFY( struct tag::msipackageinfo_t, 0x34 );
