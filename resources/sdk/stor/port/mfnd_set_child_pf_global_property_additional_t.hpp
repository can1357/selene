#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_physical_function_global_properties_t.hpp"

#include "magic/mfnd_set_child_pf_global_property_additional_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_SET_CHILD_PF_GLOBAL_PROPERTY_ADDITIONAL]
    // => Windows 11
    //
    struct mfnd_set_child_pf_global_property_additional_t
    {                                                    
        using properties_t = struct stor::port::mfnd_physical_function_global_properties_t;           
                                                         
        // Windows 11                 
        //                            
        _m00 uint32_t      version;                        //{ +0x0000    } | .Version
        _m01 uint32_t      size;                           //{ +0x0004    } | .Size
        _m02 uint32_t      flags;                          //{ +0x0008    } | .Flags
        _m03 properties_t  properties;                     //{ +0x0010    } | .Properties
                                                         
        SDK_MAGIC_PROPERTIES( "_MFND_SET_CHILD_PF_GLOBAL_PROPERTY_ADDITIONAL.$", 0x0, false, 0x6f34bc602ba4a38c );           
        SDK_FIXED_SIZE( mfnd_set_child_pf_global_property_additional_t, 0x210 );           
    };                                                   
};
#include "magic/mfnd_set_child_pf_global_property_additional_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_set_child_pf_global_property_additional_t, 0x210 );
