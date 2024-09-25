#pragma once
#include <sdkgen/support_library.hpp>

namespace sec { struct attributes_t; }

#include "magic/createfile2_extended_parameters_t.start.hpp"
namespace win
{
    // [struct _CREATEFILE2_EXTENDED_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct createfile2_extended_parameters_t                  
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                    
        _m00 uint32_t                  dw_size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint32_t                  dw_file_attributes;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwFileAttributes
        _m02 uint32_t                  dw_file_flags;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFileFlags
        _m03 uint32_t                  dw_security_qos_flags;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwSecurityQosFlags
        _m04 struct sec::attributes_t* lp_security_attributes;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpSecurityAttributes
        _m05 void*                     h_template_file;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hTemplateFile
                                                              
        SDK_MAGIC_PROPERTIES( "_CREATEFILE2_EXTENDED_PARAMETERS.$", 0x20, true, 0x314c1aa7bf176b98 );                       
        SDK_FIXED_SIZE( createfile2_extended_parameters_t, 0x20 );                       
    };                                                        
};
#include "magic/createfile2_extended_parameters_t.end.hpp"
SDK_VERIFY( struct win::createfile2_extended_parameters_t, 0x20 );
