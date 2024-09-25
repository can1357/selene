#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "object_header_t.hpp"

#include "magic/open_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OPEN_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct open_parameters_t                                    
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                      
        _m00 struct ndis::object_header_t header;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 nt::unicode_view*            adapter_name;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AdapterName
        _m02 enum ndis::medium_t*         medium_array;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MediumArray
        _m03 uint32_t                     medium_array_size;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MediumArraySize
        _m04 uint32_t*                    selected_medium_index;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SelectedMediumIndex
        _m05 uint16_t*                    frame_type_array;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FrameTypeArray
        _m06 uint32_t                     frame_type_array_size;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FrameTypeArraySize
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_OPEN_PARAMETERS.$", 0x38, true, 0xbdfd435750712e27 );                      
        SDK_FIXED_SIZE( open_parameters_t, 0x38 );                      
    };                                                          
};
#include "magic/open_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::open_parameters_t, 0x38 );
