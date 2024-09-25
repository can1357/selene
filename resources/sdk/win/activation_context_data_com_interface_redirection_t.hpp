#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/activation_context_data_com_interface_redirection_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_data_com_interface_redirection_t
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 uint32_t          size;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t          flags;                           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 struct nt::guid_t proxy_stub_clsid32;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProxyStubClsid32
        _m03 uint32_t          num_methods;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .NumMethods
        _m04 struct nt::guid_t type_library_id;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .TypeLibraryId
        _m05 struct nt::guid_t base_interface;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .BaseInterface
        _m06 uint32_t          name_length;                     //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .NameLength
        _m07 uint32_t          name_offset;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NameOffset
                                                              
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_DATA_COM_INTERFACE_REDIRECTION.$", 0x44, true, 0xf390be444f3c72c );                   
        SDK_FIXED_SIZE( activation_context_data_com_interface_redirection_t, 0x44 );                   
    };                                                        
};
#include "magic/activation_context_data_com_interface_redirection_t.end.hpp"
SDK_VERIFY( struct win::activation_context_data_com_interface_redirection_t, 0x44 );
