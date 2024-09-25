#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kwait_reason_t.hpp"

#include "magic/timed_operation_interface_t.start.hpp"
namespace dxgk
{
    struct timed_operation_t;

    // [struct _DXGK_TIMED_OPERATION_INTERFACE]
    // => WDK 10 (NV)
    //
    struct timed_operation_interface_t                                                        
    {                                                                                         
        using timed_operation_start_t =                  sdk::function<int32_t(struct dxgk::timed_operation_t*, const int64_t*, uint8_t)>*;                                       
        using timed_operation_delay_t =                  sdk::function<int32_t(struct dxgk::timed_operation_t*, char, uint8_t, const int64_t*)>*;                                       
        using timed_operation_wait_for_single_object_t = sdk::function<int32_t(struct dxgk::timed_operation_t*, void*, enum nt::kwait_reason_t, char, uint8_t, const int64_t*)>*;                                       
                                                                                              
        // WDK 10                                                                             
        //                                                                                    
        _m00 uint16_t                                  size;                                    //{ +0x0000    } | .Size
        _m01 uint16_t                                  version;                                 //{ +0x0002    } | .Version
        _m02 void*                                     context;                                 //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*               interface_reference;                     //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*               interface_dereference;                   //{ +0x0018    } | .InterfaceDereference
        _m05 timed_operation_start_t                   timed_operation_start;                   //{ +0x0020    } | .TimedOperationStart
        _m06 timed_operation_delay_t                   timed_operation_delay;                   //{ +0x0028    } | .TimedOperationDelay
        _m07 timed_operation_wait_for_single_object_t  timed_operation_wait_for_single_object;  //{ +0x0030    } | .TimedOperationWaitForSingleObject
                                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_TIMED_OPERATION_INTERFACE.$", 0x0, false, 0x667faf67b9230193 );                                       
        SDK_FIXED_SIZE( timed_operation_interface_t, 0x38 );                                       
    };                                                                                        
};
#include "magic/timed_operation_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::timed_operation_interface_t, 0x38 );
