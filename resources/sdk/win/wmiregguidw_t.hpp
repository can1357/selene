#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/wmiregguidw_t.start.hpp"
namespace win
{
    // [struct WMIREGGUIDW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmiregguidw_t                          
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 struct nt::guid_t guid;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Guid
        _m01 uint32_t          flags;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m02 uint32_t          instance_count;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .InstanceCount
        _m03 uint32_t          instance_name_list;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InstanceNameList
        _m04 uint32_t          base_name_offset;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BaseNameOffset
        _m05 uint64_t          pdo;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Pdo
        _m06 uint64_t          instance_info;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InstanceInfo
                                                  
        SDK_MAGIC_PROPERTIES( "WMIREGGUIDW.$", 0x20, true, 0xb4a98a0fd6513440 );                   
        SDK_FIXED_SIZE( wmiregguidw_t, 0x20 );                   
    };                                            
};
#include "magic/wmiregguidw_t.end.hpp"
SDK_VERIFY( struct win::wmiregguidw_t, 0x20 );
