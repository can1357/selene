#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/selection_menu_entry_t.start.hpp"
namespace ppm
{
    struct selection_dependency_t;

    // [struct _PPM_SELECTION_MENU_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct selection_menu_entry_t                                  
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                         
        _m00 uint8_t                             strict_dependency;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StrictDependency
        _m01 uint8_t                             initiating_state;   //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .InitiatingState
        _m02 uint8_t                             dependent_state;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DependentState
        _m03 uint32_t                            state_index;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StateIndex
        _m04 uint32_t                            dependencies;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Dependencies
        _m05 struct ppm::selection_dependency_t* dependency_list;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DependencyList
                                                                   
        SDK_MAGIC_PROPERTIES( "_PPM_SELECTION_MENU_ENTRY.$", 0x18, true, 0xe5bcab54dc21fa5f );                  
        SDK_FIXED_SIZE( selection_menu_entry_t, 0x18 );                  
    };                                                             
};
#include "magic/selection_menu_entry_t.end.hpp"
SDK_VERIFY( struct ppm::selection_menu_entry_t, 0x18 );
