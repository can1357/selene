#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/filetime_t.hpp"

#include "magic/statpropsetstg_t.start.hpp"
namespace tag
{
    // [struct tagSTATPROPSETSTG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct statpropsetstg_t                       
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 struct nt::guid_t      fmtid;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fmtid
        _m01 struct nt::guid_t      clsid;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .clsid
        _m02 uint32_t               grf_flags;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .grfFlags
        _m03 struct win::filetime_t mtime;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .mtime
        _m04 struct win::filetime_t ctime;          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ctime
        _m05 struct win::filetime_t atime;          //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .atime
        _m06 uint32_t               dw_os_version;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .dwOSVersion
                                                  
        SDK_MAGIC_PROPERTIES( "tagSTATPROPSETSTG.$", 0x40, true, 0xce81f4a17aad6678 );              
        SDK_FIXED_SIZE( statpropsetstg_t, 0x40 );              
    };                                            
};
#include "magic/statpropsetstg_t.end.hpp"
SDK_VERIFY( struct tag::statpropsetstg_t, 0x40 );
