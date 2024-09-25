#pragma once
#include <sdkgen/support_library.hpp>
#include "getcoldesc_dbg_t.hpp"

#include "magic/device_desc_t.start.hpp"
namespace hidp
{
    struct report_ids_t;
    struct collection_desc_t;

    // [struct _HIDP_DEVICE_DESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_desc_t                                            
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                          
        _m00 struct hidp::collection_desc_t* collection_desc;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CollectionDesc
        _m01 uint32_t                        collection_desc_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CollectionDescLength
        _m02 struct hidp::report_ids_t*      report_i_ds;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReportIDs
        _m03 uint32_t                        report_i_ds_length;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReportIDsLength
        _m04 struct hidp::getcoldesc_dbg_t   dbg;                     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Dbg
                                                                    
        SDK_MAGIC_PROPERTIES( "_HIDP_DEVICE_DESC.$", 0x40, true, 0xf989b7535e020ca6 );                       
        SDK_FIXED_SIZE( device_desc_t, 0x40 );                       
    };                                                              
};
#include "magic/device_desc_t.end.hpp"
SDK_VERIFY( struct hidp::device_desc_t, 0x40 );
