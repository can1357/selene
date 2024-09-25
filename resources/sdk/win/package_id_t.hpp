#pragma once
#include <sdkgen/support_library.hpp>
#include "package_version_t.hpp"

#include "magic/package_id_t.start.hpp"
namespace win
{
    // [struct PACKAGE_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct package_id_t                                           
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                        
        _m00 uint32_t                      processor_architecture;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .processorArchitecture
        _m01 struct win::package_version_t version;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .version
        _m02 wchar_t*                      name;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .name
        _m03 wchar_t*                      publisher;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .publisher
        _m04 wchar_t*                      resource_id;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .resourceId
        _m05 wchar_t*                      publisher_id;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .publisherId
                                                                  
        SDK_MAGIC_PROPERTIES( "PACKAGE_ID.$", 0x30, true, 0xe7c22ac105ed1107 );                       
        SDK_FIXED_SIZE( package_id_t, 0x30 );                       
    };                                                            
};
#include "magic/package_id_t.end.hpp"
SDK_VERIFY( struct win::package_id_t, 0x30 );
