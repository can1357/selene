#pragma once
#include <sdkgen/support_library.hpp>
#include "registration_source_t.hpp"

#include "magic/device_catalog_t.start.hpp"
namespace win
{
    struct hkey_t;

    // [class DeviceCatalog]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class device_catalog_t                                                
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                
        _m00 const uint32_t                        m_reg_view;              //{ +0x0010    +0x0010    +0x0010    } | .m_regView
        _m01 const uint16_t                        m_reg_wow_architecture;  //{ +0x0014    +0x0014    +0x0014    } | .m_regWowArchitecture
        _m02 struct win::hkey_t const*             m_hkey_classes_root;     //{ +0x0018    +0x0018    +0x0018    } | .m_hkeyClassesRoot
        _m03 const enum win::registration_source_t m_source;                //{ +0x0020    +0x0020    +0x0020    } | .m_source
        _m04 int32_t                               m_c_ref;                 //{ +0x0024    +0x0024    +0x0024    } | .m_cRef
        _m05 varuint_t                             m_reg_architecture;      //{ +0x0028    +0x0028    +0x0028    } | .m_regArchitecture
                                                                          
        SDK_MAGIC_PROPERTIES( "DeviceCatalog.$", 0x50, true, 0xe5ebff939671257c );                       
        SDK_FIXED_SIZE( device_catalog_t, 0x50 );                         
    };                                                                    
};
#include "magic/device_catalog_t.end.hpp"
SDK_VERIFY( class win::device_catalog_t, 0x50 );
