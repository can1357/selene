#pragma once
#include <sdkgen/support_library.hpp>
#include "binary_data_t.hpp"
#include "parameter_type_t.hpp"

#include "magic/configuration_parameter_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_CONFIGURATION_PARAMETER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct configuration_parameter_t                                    
    {                                                                   
        union u0_parameter_data_t                                       
        {                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
            //                                                          
            _m01 uint32_t                   integer_data;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IntegerData
            _m02 nt::unicode_view           string_data;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StringData
            _m03 struct ndis::binary_data_t binary_data;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BinaryData
                                                                        
            SDK_MAGIC_PROPERTIES( "_NDIS_CONFIGURATION_PARAMETER.ParameterData.$", 0x10, true, 0x7f91e9cf3128e34f );                            
            SDK_FIXED_SIZE( u0_parameter_data_t, 0x10 );                            
        };                                                              
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                              
        _m00 enum ndis::parameter_type_t                 parameter_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ParameterType
        _m04 u0_parameter_data_t                         parameter_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ParameterData
                                                                        
        SDK_MAGIC_PROPERTIES( "_NDIS_CONFIGURATION_PARAMETER.$", 0x18, true, 0x7101cdd3427057f0 );               
        SDK_FIXED_SIZE( configuration_parameter_t, 0x18 );               
    };                                                                  
};
#include "magic/configuration_parameter_t.end.hpp"
SDK_VERIFY( union ndis::configuration_parameter_t::u0_parameter_data_t, 0x10 );
SDK_VERIFY( struct ndis::configuration_parameter_t, 0x18 );
