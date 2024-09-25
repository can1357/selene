#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ses_type_descriptor_header_t.start.hpp"
namespace nt
{
    // [struct _SES_TYPE_DESCRIPTOR_HEADER]
    // => WDK 10 (NV)
    //
    struct ses_type_descriptor_header_t          
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint8_t element_type;                 //{ +0x0000    } | .ElementType
        _m01 uint8_t number_of_possible_elements;  //{ +0x0001    } | .NumberOfPossibleElements
        _m02 uint8_t sub_enclosure_id;             //{ +0x0002    } | .SubEnclosureId
        _m03 uint8_t type_descriptor_text_length;  //{ +0x0003    } | .TypeDescriptorTextLength
                                                 
        SDK_NONVOL_PROPERTIES( "_SES_TYPE_DESCRIPTOR_HEADER.$", 0x0, false, 0x7bd6b80da5af9c18 );                            
        SDK_FIXED_SIZE( ses_type_descriptor_header_t, 0x4 );                            
    };                                           
};
#include "magic/ses_type_descriptor_header_t.end.hpp"
SDK_VERIFY( struct nt::ses_type_descriptor_header_t, 0x4 );
