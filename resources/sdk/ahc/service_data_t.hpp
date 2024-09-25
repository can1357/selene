#pragma once
#include <sdkgen/support_library.hpp>
#include "service_clear_t.hpp"
#include "service_lookup_t.hpp"
#include "service_remove_t.hpp"
#include "service_update_t.hpp"
#include "service_datacache_t.hpp"
#include "service_hwid_query_t.hpp"
#include "service_lookup_cdb_t.hpp"
#include "service_init_process_data_t.hpp"

#include "magic/service_data_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_data_t                                            
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                           
        _m00 struct ahc::service_lookup_t            lookup;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lookup
        _m01 struct ahc::service_update_t            update;           //{ +0x0050    +0x0050    +0x0060    +0x0050    } | .Update
        _m02 struct ahc::service_datacache_t         cache;            //{ +0x0090    +0x0090    +0x00a0    +0x0090    } | .Cache
        _m03 struct ahc::service_lookup_cdb_t        lookup_cdb;       //{ +0x00e8    +0x00e8    +0x00f8    +0x00e8    } | .LookupCdb
        _m04 struct ahc::service_clear_t             clear;            //{ +0x00f8    +0x00f8    +0x0108    +0x00f8    } | .Clear
        _m05 struct ahc::service_remove_t            remove;           //{ +0x0100    +0x0100    +0x0110    +0x0100    } | .Remove
        _m06 struct ahc::service_hwid_query_t        hw_id_query;      //{ +0x0130    +0x0130    +0x0140    +0x0130    } | .HwIdQuery
        _m07 int32_t                                 driver_status;    //{ +0x0148    +0x0160    +0x0170    +0x0160    } | .DriverStatus
        _m08 void*                                   params_out;       //{ +0x0150    +0x0168    +0x0178    +0x0168    } | .ParamsOut
        _m09 uint32_t                                params_out_size;  //{ +0x0158    +0x0170    +0x0180    +0x0170    } | .ParamsOutSize
                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                           
        _m10 struct ahc::service_init_process_data_t init_data;        //{ +0x0148    +0x0158    +0x0148    } | .InitData
                                                                     
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_DATA.$", 0x178, true, 0xd076cdcebd4bf63e );                
        SDK_DYNAMIC_SIZE( service_data_t );                          
    };                                                               
};
#include "magic/service_data_t.end.hpp"
