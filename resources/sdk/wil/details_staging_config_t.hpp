#pragma once
#include <sdkgen/support_library.hpp>
#include "feature_store_t.hpp"

#include "magic/details_staging_config_t.start.hpp"
namespace wil
{
    struct details_staging_config_header_t;
    struct details_staging_config_feature_t;
    struct details_staging_config_usage_trigger_t;

    // [struct wil_details_StagingConfig]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct details_staging_config_t                                           
    {                                                                         
        using triggers_t = struct wil::details_staging_config_usage_trigger_t*;                   
                                                                              
        // Windows 10 v2004, Windows 10 v20H2                                 
        //                                                                    
        _m00 enum wil::feature_store_t                     store;               //{ +0x0000    +0x0000    } | .store
        _m01 int32_t                                       for_update;          //{ +0x0004    +0x0004    } | .forUpdate
        _m02 uint32_t                                      read_change_stamp;   //{ +0x0008    +0x0008    } | .readChangeStamp
        _m03 uint8_t                                       read_version;        //{ +0x000c    +0x000c    } | .readVersion
        _m04 int32_t                                       modified;            //{ +0x0010    +0x0010    } | .modified
        _m05 struct wil::details_staging_config_header_t*  header;              //{ +0x0018    +0x0018    } | .header
        _m06 struct wil::details_staging_config_feature_t* features;            //{ +0x0020    +0x0020    } | .features
        _m07 triggers_t                                    triggers;            //{ +0x0028    +0x0028    } | .triggers
        _m08 int32_t                                       changed_in_session;  //{ +0x0030    +0x0030    } | .changedInSession
        _m09 void*                                         buffer;              //{ +0x0038    +0x0038    } | .buffer
        _m10 uint64_t                                      buffer_size;         //{ +0x0040    +0x0040    } | .bufferSize
        _m11 uint64_t                                      buffer_alloc;        //{ +0x0048    +0x0048    } | .bufferAlloc
        _m12 int32_t                                       buffer_owned;        //{ +0x0050    +0x0050    } | .bufferOwned
                                                                              
        SDK_MAGIC_PROPERTIES( "wil_details_StagingConfig.$", 0x58, true, 0x2d737900c806df38 );                   
        SDK_FIXED_SIZE( details_staging_config_t, 0x58 );                     
    };                                                                        
};
#include "magic/details_staging_config_t.end.hpp"
SDK_VERIFY( struct wil::details_staging_config_t, 0x58 );
