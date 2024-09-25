#pragma once
#include <sdkgen/support_library.hpp>
#include "selection_menu_t.hpp"

#include "magic/selection_dependency_t.start.hpp"
namespace ppm
{
    // [struct _PPM_SELECTION_DEPENDENCY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct selection_dependency_t                   
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 uint32_t                     processor;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Processor
        _m01 struct ppm::selection_menu_t menu;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Menu
                                                    
        SDK_MAGIC_PROPERTIES( "_PPM_SELECTION_DEPENDENCY.$", 0x18, true, 0x2ed00f5248f9b470 );          
        SDK_FIXED_SIZE( selection_dependency_t, 0x18 );          
    };                                              
};
#include "magic/selection_dependency_t.end.hpp"
SDK_VERIFY( struct ppm::selection_dependency_t, 0x18 );
