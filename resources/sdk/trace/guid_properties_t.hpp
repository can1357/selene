#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/guid_properties_t.start.hpp"
namespace trace
{
    // [struct _TRACE_GUID_PROPERTIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct guid_properties_t                
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                  
        _m00 struct nt::guid_t guid;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Guid
        _m01 uint32_t          guid_type;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .GuidType
        _m02 uint32_t          logger_id;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .LoggerId
        _m03 uint32_t          enable_level;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EnableLevel
        _m04 uint32_t          enable_flags;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .EnableFlags
        _m05 uint8_t           is_enable;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IsEnable
                                            
        SDK_MAGIC_PROPERTIES( "_TRACE_GUID_PROPERTIES.$", 0x24, true, 0xdb6b8cca3960b708 );             
        SDK_FIXED_SIZE( guid_properties_t, 0x24 );             
    };                                      
};
#include "magic/guid_properties_t.end.hpp"
SDK_VERIFY( struct trace::guid_properties_t, 0x24 );
