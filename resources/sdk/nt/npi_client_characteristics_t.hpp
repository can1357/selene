#pragma once
#include <sdkgen/support_library.hpp>
#include "npi_registration_instance_t.hpp"

#include "magic/npi_client_characteristics_t.start.hpp"
namespace nt
{
    // [struct _NPI_CLIENT_CHARACTERISTICS]
    // => WDK 10 (NV)
    //
    struct npi_client_characteristics_t                                            
    {                                                                              
        using pnpi_client_attach_provider_fn_t = sdk::function<int32_t(void*, void*, const struct nt::npi_registration_instance_t*)>*;                               
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 uint16_t                               version;                         //{ +0x0000    } | .Version
        _m01 uint16_t                               length;                          //{ +0x0002    } | .Length
        _m02 pnpi_client_attach_provider_fn_t       client_attach_provider;          //{ +0x0008    } | .ClientAttachProvider
        _m03 sdk::function<int32_t(void*)>*         client_detach_provider;          //{ +0x0010    } | .ClientDetachProvider
        _m04 sdk::function<void(void*)>*            client_cleanup_binding_context;  //{ +0x0018    } | .ClientCleanupBindingContext
        _m05 struct nt::npi_registration_instance_t client_registration_instance;    //{ +0x0020    } | .ClientRegistrationInstance
                                                                                   
        SDK_NONVOL_PROPERTIES( "_NPI_CLIENT_CHARACTERISTICS.$", 0x0, false, 0x72554da23c7d9d9 );                               
        SDK_FIXED_SIZE( npi_client_characteristics_t, 0x48 );                               
    };                                                                             
};
#include "magic/npi_client_characteristics_t.end.hpp"
SDK_VERIFY( struct nt::npi_client_characteristics_t, 0x48 );
