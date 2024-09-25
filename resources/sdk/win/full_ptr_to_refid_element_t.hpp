#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/full_ptr_to_refid_element_t.start.hpp"
namespace win
{
    struct full_ptr_to_refid_element_t;

    // [struct _FULL_PTR_TO_REFID_ELEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct full_ptr_to_refid_element_t                        
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                    
        _m00 struct win::full_ptr_to_refid_element_t* next;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 void*                                    pointer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Pointer
        _m02 uint32_t                                 ref_id;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RefId
        _m03 uint8_t                                  state;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .State
                                                              
        SDK_MAGIC_PROPERTIES( "_FULL_PTR_TO_REFID_ELEMENT.$", 0x18, true, 0xd205fb1e286168b0 );        
        SDK_FIXED_SIZE( full_ptr_to_refid_element_t, 0x18 );        
    };                                                        
};
#include "magic/full_ptr_to_refid_element_t.end.hpp"
SDK_VERIFY( struct win::full_ptr_to_refid_element_t, 0x18 );
