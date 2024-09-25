#pragma once
#include <sdkgen/support_library.hpp>
#include "db_header_t.hpp"
#include "zdb_compression_algorithm_t.hpp"

#include "magic/zdb_header_t.start.hpp"
namespace win
{
    // [struct _ZDB_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct zdb_header_t                                               
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                            
        _m00 struct win::db_header_t               sdb_header;          //{ +0x0000    +0x0000    +0x0000    } | .SdbHeader
        _m01 enum win::zdb_compression_algorithm_t compression_method;  //{ +0x000c    +0x000c    +0x000c    } | .CompressionMethod
        _m02 uint32_t                              dw_expanded_size;    //{ +0x0010    +0x0010    +0x0010    } | .dwExpandedSize
                                                                      
        SDK_MAGIC_PROPERTIES( "_ZDB_HEADER.$", 0x14, true, 0x50581bd5bfbc4771 );                   
        SDK_FIXED_SIZE( zdb_header_t, 0x14 );                         
    };                                                                
};
#include "magic/zdb_header_t.end.hpp"
SDK_VERIFY( struct win::zdb_header_t, 0x14 );
