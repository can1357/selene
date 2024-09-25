#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/find_info_t.hpp"
#include "sdbmsilookupstate_t.hpp"

#include "magic/sdbmsifindinfo_t.start.hpp"
namespace tag
{
    // [struct tagSDBMSIFINDINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sdbmsifindinfo_t                                 
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 uint32_t                      tr_match;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .trMatch
        _m01 struct nt::guid_t             guid_id;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .guidID
        _m02 struct win::find_info_t       sdb_find_info;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .sdbFindInfo
        _m03 enum tag::sdbmsilookupstate_t sdb_lookup_state;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .sdbLookupState
        _m04 uint32_t                      dw_custom_index;   //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .dwCustomIndex
                                                            
        SDK_MAGIC_PROPERTIES( "tagSDBMSIFINDINFO.$", 0x48, true, 0x839884ed59b9fefa );                 
        SDK_FIXED_SIZE( sdbmsifindinfo_t, 0x48 );                 
    };                                                      
};
#include "magic/sdbmsifindinfo_t.end.hpp"
SDK_VERIFY( struct tag::sdbmsifindinfo_t, 0x48 );
