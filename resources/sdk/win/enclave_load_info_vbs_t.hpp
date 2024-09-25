#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_load_info_vbs_t.start.hpp"
namespace win
{
    // [struct _ENCLAVE_LOAD_INFO_VBS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_load_info_vbs_t               
    {                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 void*                  image_handle;  //{ +0x0000    +0x0000    +0x0000    } | .ImageHandle
        _m01 uint16_t               name_length;   //{ +0x0008    +0x0008    +0x0008    } | .NameLength
        _m02 sdk::array<wchar_t, 1> name;          //{ +0x000a    +0x000a    +0x000a    } | .Name
                                                 
        SDK_MAGIC_PROPERTIES( "_ENCLAVE_LOAD_INFO_VBS.$", 0x10, true, 0xdfe9e7675a29112d );             
        SDK_FIXED_SIZE( enclave_load_info_vbs_t, 0x10 );             
    };                                           
};
#include "magic/enclave_load_info_vbs_t.end.hpp"
SDK_VERIFY( struct win::enclave_load_info_vbs_t, 0x10 );
