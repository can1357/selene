#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_pop_fx_device_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct triage_device_node_t;
    struct triage_pop_irp_data_t;

    // [struct _TRIAGE_POP_FX_DEVICE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_pop_fx_device_t                                 
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m00 nt::list_entry_t                  link;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 struct nt::irp_t*                 irp;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Irp
        _m02 struct nt::triage_pop_irp_data_t* irp_data;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .IrpData
        _m03 int32_t                           status;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Status
        _m04 int32_t                           power_req_call;      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PowerReqCall
        _m05 int32_t                           power_not_req_call;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PowerNotReqCall
        _m06 struct nt::triage_device_node_t*  device_node;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DeviceNode
                                                                  
        SDK_MAGIC_PROPERTIES( "_TRIAGE_POP_FX_DEVICE.$", 0x38, true, 0x30c358df98757203 );                   
        SDK_FIXED_SIZE( triage_pop_fx_device_t, 0x38 );                   
    };                                                            
};
#include "magic/triage_pop_fx_device_t.end.hpp"
SDK_VERIFY( struct nt::triage_pop_fx_device_t, 0x38 );
