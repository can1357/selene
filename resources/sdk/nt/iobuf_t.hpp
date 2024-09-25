#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iobuf_t.start.hpp"
namespace nt
{
    // [struct _iobuf]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct iobuf_t            
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                    
        _m00 char*   ptr;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | ._ptr
        _m01 int32_t cnt;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | ._cnt
        _m02 char*   base;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | ._base
        _m03 int32_t flag;      //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | ._flag
        _m04 int32_t file;      //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | ._file
        _m05 int32_t charbuf;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | ._charbuf
        _m06 int32_t bufsiz;    //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | ._bufsiz
        _m07 char*   tmpfname;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | ._tmpfname
                              
        SDK_NONVOL_PROPERTIES( "_iobuf.$", 0x30, true, 0xde06feefdbeeb386 );         
        SDK_FIXED_SIZE( iobuf_t, 0x30 );         
    };                        
};
#include "magic/iobuf_t.end.hpp"
SDK_VERIFY( struct nt::iobuf_t, 0x30 );
