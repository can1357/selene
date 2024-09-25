#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coordinated_selection_t.start.hpp"
namespace ppm
{
    // [struct _PPM_COORDINATED_SELECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coordinated_selection_t       
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                               
        _m00 uint32_t  maximum_states;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaximumStates
        _m01 uint32_t  selected_states;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SelectedStates
        _m02 uint32_t  default_selection;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DefaultSelection
        _m03 uint32_t* selection;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Selection
                                         
        SDK_MAGIC_PROPERTIES( "_PPM_COORDINATED_SELECTION.$", 0x18, true, 0x8d51d9ef42db781c );                  
        SDK_FIXED_SIZE( coordinated_selection_t, 0x18 );                  
    };                                   
};
#include "magic/coordinated_selection_t.end.hpp"
SDK_VERIFY( struct ppm::coordinated_selection_t, 0x18 );
