#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/installspec_t.start.hpp"
namespace win
{
    // [union _INSTALLSPEC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union installspec_t                              
    {                                                
        struct u0_app_name_t                         
        {                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
            //                                       
            _m00 wchar_t*          name;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
            _m01 struct nt::guid_t gpo_id;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GPOId
                                                     
            SDK_MAGIC_PROPERTIES( "_INSTALLSPEC.AppName.$", 0x18, true, 0x5da143de01750a91 );                 
            SDK_FIXED_SIZE( u0_app_name_t, 0x18 );                 
        };                                           
                                                     
        struct u4_com_class_t                        
        {                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                       
            _m05 struct nt::guid_t clsid;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Clsid
            _m06 uint32_t          cls_ctx;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClsCtx
                                                     
            SDK_MAGIC_PROPERTIES( "_INSTALLSPEC.COMClass.$", 0x14, true, 0xddd0e31281f826a5 );                  
            SDK_FIXED_SIZE( u4_com_class_t, 0x14 );                  
        };                                           
                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                           
        _m02 u0_app_name_t                 app_name;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AppName
        _m03 wchar_t*                      file_ext;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileExt
        _m04 wchar_t*                      prog_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProgId
        _m07 u4_com_class_t                com_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .COMClass
                                                     
        SDK_MAGIC_PROPERTIES( "_INSTALLSPEC.$", 0x18, true, 0xe15a4e61931698a7 );          
        SDK_FIXED_SIZE( installspec_t, 0x18 );          
    };                                               
};
#include "magic/installspec_t.end.hpp"
SDK_VERIFY( struct win::installspec_t::u0_app_name_t, 0x18 );
SDK_VERIFY( struct win::installspec_t::u4_com_class_t, 0x14 );
SDK_VERIFY( union win::installspec_t, 0x18 );
