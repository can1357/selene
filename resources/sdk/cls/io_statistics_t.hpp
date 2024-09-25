#pragma once
#include <sdkgen/support_library.hpp>
#include "io_statistics_header_t.hpp"

#include "magic/io_statistics_t.start.hpp"
namespace cls
{
    // [struct _CLS_IO_STATISTICS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct io_statistics_t                                    
    {                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                    
        _m00 struct cls::io_statistics_header_t hdr_io_stats;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .hdrIoStats
        _m01 uint64_t                           c_flush;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .cFlush
        _m02 uint64_t                           cb_flush;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .cbFlush
        _m03 uint64_t                           c_meta_flush;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .cMetaFlush
        _m04 uint64_t                           cb_meta_flush;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .cbMetaFlush
                                                              
        SDK_NONVOL_PROPERTIES( "_CLS_IO_STATISTICS.$", 0x30, true, 0xa164bc5bac9df659 );              
        SDK_FIXED_SIZE( io_statistics_t, 0x30 );              
    };                                                        
};
#include "magic/io_statistics_t.end.hpp"
SDK_VERIFY( struct cls::io_statistics_t, 0x30 );
