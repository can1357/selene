#pragma once
#include <sdkgen/support_library.hpp>
#include "config_knob_flag_t.hpp"

#include "magic/knob_descriptor_t.start.hpp"
namespace ndis
{
    // [struct KnobDescriptor]
    // => Windows 11
    //
    struct knob_descriptor_t                             
    {                                                    
        // Windows 11                                    
        //                                               
        _m00 const wchar_t*                name;           //{ +0x0000    } | .Name
        _m01 void*                         value;          //{ +0x0008    } | .Value
        _m02 uint64_t                      default_value;  //{ +0x0010    } | .DefaultValue
        _m03 enum ndis::config_knob_flag_t flags;          //{ +0x0018    } | .Flags
        _m04 uint64_t                      minimum_value;  //{ +0x0020    } | .MinimumValue
        _m05 uint64_t                      maximum_value;  //{ +0x0028    } | .MaximumValue
                                                         
        SDK_MAGIC_PROPERTIES( "KnobDescriptor.$", 0x0, false, 0x2305fe7f3b4cfa9 );              
        SDK_FIXED_SIZE( knob_descriptor_t, 0x30 );              
    };                                                   
};
#include "magic/knob_descriptor_t.end.hpp"
SDK_VERIFY( struct ndis::knob_descriptor_t, 0x30 );
