#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/collection_desc_t.start.hpp"
namespace hidp
{
    struct preparsed_data_t;

    // [struct _HIDP_COLLECTION_DESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct collection_desc_t                                      
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                        
        _m00 uint16_t                       usage_page;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UsagePage
        _m01 uint16_t                       usage;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Usage
        _m02 uint8_t                        collection_number;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CollectionNumber
        _m03 uint16_t                       input_length;           //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .InputLength
        _m04 uint16_t                       output_length;          //{ +0x0016    +0x0016    +0x0016    +0x0016    } | .OutputLength
        _m05 uint16_t                       feature_length;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FeatureLength
        _m06 uint16_t                       preparsed_data_length;  //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .PreparsedDataLength
        _m07 struct hidp::preparsed_data_t* preparsed_data;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PreparsedData
                                                                  
        SDK_MAGIC_PROPERTIES( "_HIDP_COLLECTION_DESC.$", 0x28, true, 0x9b2e31f78dc347b6 );                      
        SDK_FIXED_SIZE( collection_desc_t, 0x28 );                      
    };                                                            
};
#include "magic/collection_desc_t.end.hpp"
SDK_VERIFY( struct hidp::collection_desc_t, 0x28 );
