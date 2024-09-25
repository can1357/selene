#pragma once
#include <sdkgen/support_library.hpp>
#include "error_severity_t.hpp"

#include "magic/error_source_configuration_t.start.hpp"
namespace whea
{
    struct error_record_t;
    struct error_packet_v2_t;
    struct error_source_descriptor_t;

    // [struct _WHEA_ERROR_SOURCE_CONFIGURATION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_source_configuration_t                       
    {                                                         
        using whea_error_source_correct_t =       sdk::function<int32_t(struct whea::error_source_descriptor_t*, uint32_t*)>*;              
        using whea_error_source_initialize_t =    sdk::function<int32_t(uint32_t, struct whea::error_source_descriptor_t*, void*)>*;              
        using whea_error_source_create_record_t = sdk::function<int32_t(struct whea::error_source_descriptor_t*, struct whea::error_packet_v2_t*, struct whea::error_record_t*, uint32_t, void*)>*;              
        using whea_error_source_recover_t =       sdk::function<int32_t(void*, enum whea::error_severity_t*)>*;              
        using whea_error_source_ready_t =         sdk::function<void(struct whea::error_source_descriptor_t*, void*)>*;              
                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                    
        _m00 uint32_t                           flags;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 whea_error_source_correct_t        correct;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Correct
        _m02 whea_error_source_initialize_t     initialize;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Initialize
        _m03 whea_error_source_create_record_t  create_record;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreateRecord
        _m04 whea_error_source_recover_t        recover;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Recover
        _m05 sdk::function<void(void*)>*        uninitialize;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Uninitialize
                                                              
        // WDK 10                                             
        //                                                    
        _m06 whea_error_source_ready_t          ready;          //{ +0x0030    } | .Ready
                                                              
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_SOURCE_CONFIGURATION.$", 0x38, true, 0xa4344d25492d0f05 );              
        SDK_FIXED_SIZE( error_source_configuration_t, 0x38 );              
    };                                                        
};
#include "magic/error_source_configuration_t.end.hpp"
SDK_VERIFY( struct whea::error_source_configuration_t, 0x38 );
