#pragma once
#include <sdkgen/support_library.hpp>
#include "video_desc_t.hpp"
#include "proc_amp_control_prop_t.hpp"

#include "magic/proc_amp_control_query_range_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_ProcAmpControlQueryRange]
    // => WDK 10 (NV)
    //
    struct proc_amp_control_query_range_t                             
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                           size;                   //{ +0x0000    } | .Size
        _m01 enum dxva::proc_amp_control_prop_t proc_amp_control_prop;  //{ +0x0004    } | .ProcAmpControlProp
        _m02 struct dxva::video_desc_t          video_desc;             //{ +0x0008    } | .VideoDesc
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXVA_ProcAmpControlQueryRange.$", 0x0, false, 0x8c4910c36a2951ea );                      
        SDK_FIXED_SIZE( proc_amp_control_query_range_t, 0x2c );                      
    };                                                                
};
#include "magic/proc_amp_control_query_range_t.end.hpp"
SDK_VERIFY( struct dxva::proc_amp_control_query_range_t, 0x2c );
