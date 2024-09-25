#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nfs_open_ecp_context_t.start.hpp"
namespace nt
{
    struct sockaddr_storage_t;

    // [struct _NFS_OPEN_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct nfs_open_ecp_context_t                                 
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 nt::unicode_view*              export_alias;           //{ +0x0000    } | .ExportAlias
        _m01 struct nt::sockaddr_storage_t* client_socket_address;  //{ +0x0008    } | .ClientSocketAddress
                                                                  
        SDK_NONVOL_PROPERTIES( "_NFS_OPEN_ECP_CONTEXT.$", 0x0, false, 0xfbdae03eeba27aa6 );                      
        SDK_FIXED_SIZE( nfs_open_ecp_context_t, 0x10 );                      
    };                                                            
};
#include "magic/nfs_open_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::nfs_open_ecp_context_t, 0x10 );
