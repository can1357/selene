#pragma once
#include <sdkgen/support_library.hpp>
#include "registration_source_t.hpp"

#include "magic/c_system_registry_catalog_t.start.hpp"
namespace win
{
    struct hkey_t;

    // [class CSystemRegistryCatalog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_system_registry_catalog_t                                     
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                
        _m00 const uint32_t                        m_reg_view;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_regView
        _m01 struct win::hkey_t*                   m_hkey_classes_root;     //{ +0x0020    +0x0018    +0x0018    +0x0018    } | .m_hkeyClassesRoot
        _m02 const enum win::registration_source_t m_source;                //{ +0x0014    +0x0020    +0x0020    +0x0020    } | .m_source
        _m03 int32_t                               m_c_ref;                 //{ +0x0018    +0x0024    +0x0024    +0x0024    } | .m_cRef
        _m04 const uint32_t                        m_reg_view_other;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_regViewOther
                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                
        _m05 const uint16_t                        m_reg_wow_architecture;  //{ +0x0014    +0x0014    +0x0014    } | .m_regWowArchitecture
                                                                          
        SDK_MAGIC_PROPERTIES( "CSystemRegistryCatalog.$", 0x30, true, 0x31c9fcd667ad489c );                       
        SDK_FIXED_SIZE( c_system_registry_catalog_t, 0x30 );                       
    };                                                                    
};
#include "magic/c_system_registry_catalog_t.end.hpp"
SDK_VERIFY( class win::c_system_registry_catalog_t, 0x30 );
