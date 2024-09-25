#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/sdbentryinfo_t.start.hpp"
namespace tag
{
    // [struct tagSDBENTRYINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sdbentryinfo_t               
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                              
        _m00 struct nt::guid_t guid_id;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guidID
        _m01 uint32_t          dw_flags;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwFlags
        _m02 uint32_t          ti_data;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .tiData
        _m03 struct nt::guid_t guid_db;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .guidDB
                                        
        SDK_MAGIC_PROPERTIES( "tagSDBENTRYINFO.$", 0x28, true, 0xd40c6d8af2675c05 );         
        SDK_FIXED_SIZE( sdbentryinfo_t, 0x28 );         
    };                                  
};
#include "magic/sdbentryinfo_t.end.hpp"
SDK_VERIFY( struct tag::sdbentryinfo_t, 0x28 );
