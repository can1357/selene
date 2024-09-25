#pragma once
#include <sdkgen/support_library.hpp>
#include "device_catalogs_t.hpp"

#include "magic/c_com_catalog_t.start.hpp"
namespace win
{
    struct i_com_catalog_internal_t;

    // [class CComCatalog]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_com_catalog_t                                                                
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                               
        _m00 int32_t                               m_c_ref;                                //{ +0x0038    +0x0058    +0x0058    +0x0058    } | .m_cRef
                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                               
        _m01 class win::device_catalogs_t          m_device_catalogs;                      //{ +0x00d0    +0x00d0    +0x00d0    } | .m_deviceCatalogs
                                                                                         
        // Windows 10 v1607                                                              
        //                                                                               
        _m02 struct win::i_com_catalog_internal_t* m_p_catalog_reg_native;                 //{ +0x0040    } | .m_pCatalogRegNative
        _m03 struct win::i_com_catalog_internal_t* m_p_catalog_com_base_in_clb;            //{ +0x0048    } | .m_pCatalogCOMBaseInCLB
        _m04 struct win::i_com_catalog_internal_t* m_p_catalog_reg_x86_wow;                //{ +0x0050    } | .m_pCatalogRegX86Wow
        _m05 struct win::i_com_catalog_internal_t* m_p_catalog_reg_arm32_wow;              //{ +0x0058    } | .m_pCatalogRegArm32Wow
        _m06 struct win::i_com_catalog_internal_t* m_p_catalog_clb;                        //{ +0x0060    } | .m_pCatalogCLB
        _m07 struct win::i_com_catalog_internal_t* m_p_catalog_sx_s;                       //{ +0x0068    } | .m_pCatalogSxS
        _m08 struct win::i_com_catalog_internal_t* m_p_catalog_built_in_activation_store;  //{ +0x0070    } | .m_pCatalogBuiltInActivationStore
        _m09 struct win::i_com_catalog_internal_t* m_p_catalog_per_user_activation_store;  //{ +0x0078    } | .m_pCatalogPerUserActivationStore
        _m10 struct win::i_com_catalog_internal_t* m_p_catalog_inbox_apps_store;           //{ +0x0080    } | .m_pCatalogInboxAppsStore
                                                                                         
        SDK_MAGIC_PROPERTIES( "CComCatalog.$", 0x100, true, 0xe1efc84f02ba687 );                                      
        SDK_DYNAMIC_SIZE( c_com_catalog_t );                                             
    };                                                                                   
};
#include "magic/c_com_catalog_t.end.hpp"
