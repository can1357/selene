#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/filetime_t.hpp"

#include "magic/statstg_t.start.hpp"
namespace tag
{
    // [struct tagSTATSTG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct statstg_t                                    
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 wchar_t*               pwcs_name;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pwcsName
        _m01 uint32_t               type;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .type
        _m02 uint64_t               cb_size;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbSize
        _m03 struct win::filetime_t mtime;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .mtime
        _m04 struct win::filetime_t ctime;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ctime
        _m05 struct win::filetime_t atime;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .atime
        _m06 uint32_t               grf_mode;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .grfMode
        _m07 uint32_t               grf_locks_supported;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .grfLocksSupported
        _m08 struct nt::guid_t      clsid;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .clsid
        _m09 uint32_t               grf_state_bits;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .grfStateBits
                                                        
        SDK_MAGIC_PROPERTIES( "tagSTATSTG.$", 0x50, true, 0xab91d39602d3e2da );                    
        SDK_FIXED_SIZE( statstg_t, 0x50 );                    
    };                                                  
};
#include "magic/statstg_t.end.hpp"
SDK_VERIFY( struct tag::statstg_t, 0x50 );
