#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_qos_t.hpp"

#include "magic/mfnd_set_child_pf_qos_additional_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_SET_CHILD_PF_QOS_ADDITIONAL]
    // => Windows 11
    //
    struct mfnd_set_child_pf_qos_additional_t                  
    {                                                          
        // Windows 11                                          
        //                                                     
        _m00 uint32_t                      version;              //{ +0x0000    } | .Version
        _m01 uint32_t                      size;                 //{ +0x0004    } | .Size
        _m02 uint16_t                      child_controller_id;  //{ +0x0008    } | .ChildControllerId
        _m03 uint32_t                      flags;                //{ +0x000c    } | .Flags
        _m04 struct stor::port::mfnd_qos_t qo_s;                 //{ +0x0010    } | .QoS
                                                               
        SDK_MAGIC_PROPERTIES( "_MFND_SET_CHILD_PF_QOS_ADDITIONAL.$", 0x0, false, 0x8e958302679a7bf0 );                    
        SDK_FIXED_SIZE( mfnd_set_child_pf_qos_additional_t, 0x48 );                    
    };                                                         
};
#include "magic/mfnd_set_child_pf_qos_additional_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_set_child_pf_qos_additional_t, 0x48 );
