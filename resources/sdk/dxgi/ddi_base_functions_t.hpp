#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_base_functions_t.start.hpp"
namespace dxgi
{
    struct ddi_arg_blt_t;
    struct ddi_arg_present_t;
    struct ddi_arg_setdisplaymode_t;
    struct ddi_arg_setresourcepriority_t;
    struct ddi_arg_get_gamma_control_caps_t;
    struct ddi_arg_queryresourceresidency_t;
    struct ddi_arg_rotate_resource_identities_t;

    // [struct DXGI_DDI_BASE_FUNCTIONS]
    // => WDK 10 (NV)
    //
    struct ddi_base_functions_t                                               
    {                                                                         
        using pfn_present_t =                    sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*;                               
        using pfn_get_gamma_caps_t =             sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*;                               
        using pfn_set_display_mode_t =           sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*;                               
        using pfn_set_resource_priority_t =      sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*;                               
        using pfn_query_resource_residency_t =   sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*;                               
        using pfn_rotate_resource_identities_t = sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*;                               
        using pfn_blt_t =                        sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*;                               
                                                                              
        // WDK 10                                                             
        //                                                                    
        _m00 pfn_present_t                     pfn_present;                     //{ +0x0000    } | .pfnPresent
        _m01 pfn_get_gamma_caps_t              pfn_get_gamma_caps;              //{ +0x0008    } | .pfnGetGammaCaps
        _m02 pfn_set_display_mode_t            pfn_set_display_mode;            //{ +0x0010    } | .pfnSetDisplayMode
        _m03 pfn_set_resource_priority_t       pfn_set_resource_priority;       //{ +0x0018    } | .pfnSetResourcePriority
        _m04 pfn_query_resource_residency_t    pfn_query_resource_residency;    //{ +0x0020    } | .pfnQueryResourceResidency
        _m05 pfn_rotate_resource_identities_t  pfn_rotate_resource_identities;  //{ +0x0028    } | .pfnRotateResourceIdentities
        _m06 pfn_blt_t                         pfn_blt;                         //{ +0x0030    } | .pfnBlt
                                                                              
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_BASE_FUNCTIONS.$", 0x0, false, 0x771b3185f8641218 );                               
        SDK_FIXED_SIZE( ddi_base_functions_t, 0x38 );                               
    };                                                                        
};
#include "magic/ddi_base_functions_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_base_functions_t, 0x38 );
