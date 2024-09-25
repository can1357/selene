#pragma once
#include <sdkgen/support_library.hpp>
#include "../clfs/iostats_class_t.hpp"

#include "magic/io_statistics_header_t.start.hpp"
namespace cls
{
    // [struct _CLS_IO_STATISTICS_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct io_statistics_header_t                        
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 uint8_t                    ub_major_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ubMajorVersion
        _m01 uint8_t                    ub_minor_version;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .ubMinorVersion
        _m02 enum clfs::iostats_class_t e_stats_class;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .eStatsClass
        _m03 uint16_t                   cb_length;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .cbLength
        _m04 uint32_t                   coff_data;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .coffData
                                                         
        SDK_NONVOL_PROPERTIES( "_CLS_IO_STATISTICS_HEADER.$", 0x10, true, 0x6d7772d758863b12 );                 
        SDK_FIXED_SIZE( io_statistics_header_t, 0x10 );                 
    };                                                   
};
#include "magic/io_statistics_header_t.end.hpp"
SDK_VERIFY( struct cls::io_statistics_header_t, 0x10 );
