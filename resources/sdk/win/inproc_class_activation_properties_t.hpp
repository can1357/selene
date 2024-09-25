#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/clsctx_t.hpp"
#include "threading_model_t.hpp"

#include "magic/inproc_class_activation_properties_t.start.hpp"
namespace win
{
    struct unnamed_struct_dll_class_handle_t;

    // [class InprocClassActivationProperties]
    // => Windows 11
    //
    class inproc_class_activation_properties_t                                        
    {                                                                                 
        // Windows 11                                                                 
        //                                                                            
        _m00 bool                                           is_sixteen_bit;             //{ +0x0000    } | ._isSixteenBit
        _m01 bool                                           is_virtualization_enabled;  //{ +0x0001    } | ._isVirtualizationEnabled
        _m02 enum win::threading_model_t                    threading_model;            //{ +0x0004    } | ._threadingModel
        _m03 uint32_t                                       requested_class_context;    //{ +0x0008    } | ._requestedClassContext
        _m04 enum tag::clsctx_t                             selected_class_context;     //{ +0x000c    } | ._selectedClassContext
        _m05 struct win::unnamed_struct_dll_class_handle_t* dll_class;                  //{ +0x0010    } | ._dllClass
                                                                                      
        SDK_MAGIC_PROPERTIES( "InprocClassActivationProperties.$", 0x0, false, 0xf532c6cd189fc3a5 );                          
        SDK_FIXED_SIZE( inproc_class_activation_properties_t, 0x18 );                          
    };                                                                                
};
#include "magic/inproc_class_activation_properties_t.end.hpp"
SDK_VERIFY( class win::inproc_class_activation_properties_t, 0x18 );
