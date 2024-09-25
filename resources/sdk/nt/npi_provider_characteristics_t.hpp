#pragma once
#include <sdkgen/support_library.hpp>
#include "npi_registration_instance_t.hpp"

#include "magic/npi_provider_characteristics_t.start.hpp"
namespace nt
{
    // [struct _NPI_PROVIDER_CHARACTERISTICS]
    // => WDK 10 (NV)
    //
    struct npi_provider_characteristics_t                                            
    {                                                                                
        using pnpi_provider_attach_client_fn_t = sdk::function<int32_t(void*, void*, const struct nt::npi_registration_instance_t*, void*, const void*, void**, const void**)>*;                                 
                                                                                     
        // WDK 10                                                                    
        //                                                                           
        _m00 uint16_t                               version;                           //{ +0x0000    } | .Version
        _m01 uint16_t                               length;                            //{ +0x0002    } | .Length
        _m02 pnpi_provider_attach_client_fn_t       provider_attach_client;            //{ +0x0008    } | .ProviderAttachClient
        _m03 sdk::function<int32_t(void*)>*         provider_detach_client;            //{ +0x0010    } | .ProviderDetachClient
        _m04 sdk::function<void(void*)>*            provider_cleanup_binding_context;  //{ +0x0018    } | .ProviderCleanupBindingContext
        _m05 struct nt::npi_registration_instance_t provider_registration_instance;    //{ +0x0020    } | .ProviderRegistrationInstance
                                                                                     
        SDK_NONVOL_PROPERTIES( "_NPI_PROVIDER_CHARACTERISTICS.$", 0x0, false, 0x69d95f5d9a4bdf17 );                                 
        SDK_FIXED_SIZE( npi_provider_characteristics_t, 0x48 );                                 
    };                                                                               
};
#include "magic/npi_provider_characteristics_t.end.hpp"
SDK_VERIFY( struct nt::npi_provider_characteristics_t, 0x48 );
