#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/jobobject_container_identifier_v2_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_CONTAINER_IDENTIFIER_V2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_container_identifier_v2_t        
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                            
        _m00 struct nt::guid_t container_id;            //{ +0x0000    +0x0000    +0x0000    } | .ContainerId
        _m01 struct nt::guid_t container_telemetry_id;  //{ +0x0010    +0x0010    +0x0010    } | .ContainerTelemetryId
        _m02 uint32_t          job_id;                  //{ +0x0020    +0x0020    +0x0020    } | .JobId
                                                      
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_CONTAINER_IDENTIFIER_V2.$", 0x24, true, 0x8d3720d7683f167d );                       
        SDK_FIXED_SIZE( jobobject_container_identifier_v2_t, 0x24 );                       
    };                                                
};
#include "magic/jobobject_container_identifier_v2_t.end.hpp"
SDK_VERIFY( struct win::jobobject_container_identifier_v2_t, 0x24 );
