#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_registry_append_string_parameters_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_registry_append_string_parameters_t  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                             
        _m00 void*             key_handle;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyHandle
        _m01 nt::unicode_view* value_name_pointer;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ValueNamePointer
        _m02 uint32_t*         required_length_pointer;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RequiredLengthPointer
        _m03 uint8_t*          buffer;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Buffer
        _m04 uint32_t          buffer_length;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BufferLength
        _m05 uint32_t          type;                     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Type
        _m06 uint8_t*          append_buffer;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .AppendBuffer
        _m07 uint32_t          append_buffer_length;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AppendBufferLength
        _m08 uint8_t           create_if_doesnt_exist;   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .CreateIfDoesntExist
        _m09 uint8_t           truncate_existing_value;  //{ +0x0035    +0x0035    +0x0035    +0x0035    } | .TruncateExistingValue
                                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_REGISTRY_APPEND_STRING_PARAMETERS.$", 0x38, true, 0x39eb984390da189c );                        
        SDK_FIXED_SIZE( system_registry_append_string_parameters_t, 0x38 );                        
    };                                                 
};
#include "magic/system_registry_append_string_parameters_t.end.hpp"
SDK_VERIFY( struct win::system_registry_append_string_parameters_t, 0x38 );
