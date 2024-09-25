#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "which_type_of_rundown_t.hpp"

#include "magic/rundown_instrumentation_data_t.start.hpp"
namespace win
{
    // [struct RundownInstrumentationData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rundown_instrumentation_data_t                             
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 uint32_t                          method;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .method
        _m01 enum win::which_type_of_rundown_t which_type_of_rundown;   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .whichTypeOfRundown
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m02 struct nt::guid_t                 iid_of_call;             //{ +0x0000    +0x0000    +0x0000    } | .iidOfCall
        _m03 struct nt::guid_t                 ipid;                    //{ +0x0014    +0x0014    +0x0014    } | .ipid
        _m04 struct nt::guid_t                 implemented_interface1;  //{ +0x0028    +0x0028    +0x0028    } | .implementedInterface1
        _m05 struct nt::guid_t                 implemented_interface2;  //{ +0x0038    +0x0038    +0x0038    } | .implementedInterface2
        _m06 struct nt::guid_t                 implemented_interface3;  //{ +0x0048    +0x0048    +0x0048    } | .implementedInterface3
                                                                      
        // Windows 10 v1607                                           
        //                                                            
        _m07 struct nt::guid_t                 riid;                    //{ +0x0000    } | .riid
        _m08 struct nt::guid_t                 ripid;                   //{ +0x0014    } | .ripid
                                                                      
        SDK_MAGIC_PROPERTIES( "RundownInstrumentationData.$", 0x58, true, 0x74ea82abfcac3df2 );                       
        SDK_DYNAMIC_SIZE( rundown_instrumentation_data_t );                       
    };                                                                
};
#include "magic/rundown_instrumentation_data_t.end.hpp"
